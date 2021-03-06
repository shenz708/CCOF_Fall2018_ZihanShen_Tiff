//
//  Particle.cpp
//  00-11-01-bouncing balls
//
//  Created by Zihan Shen-macbook on 11/1/18.
//

#include "Particle.hpp"

//------------------------------------------------------------------
Particle::Particle(){
    attractPoints = NULL;
}

void Particle::setAttractPoints( vector <ofPoint> * attract ){
    attractPoints = attract;
}

void Particle::reset(){
    //the unique val allows us to set properties slightly differently for each particle
    uniqueVal = ofRandom(-10000, 10000);
    
    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();
    
    vel.x = ofRandom(-3.9, 3.9);
    vel.y = ofRandom(-3.9, 3.9);
    
    frc   = ofPoint(0,0,0);
    
    scale = ofRandom(1, 2);
    
  
    //drag  = ofRandom(0.95, 0.998);
    drag  = 0.9;  //speed of clear the circle area //force of drag dots away
    
}




//--------------------------------------------------------------
void Particle::update(){
  
    //1 - APPLY THE FORCES
    
    ofPoint attractPt(ofGetMouseX(), ofGetMouseY()); //setup position of attraction
    frc = attractPt-pos;
    
    //let get the distance and only repel points close to the mouse
    float dist = frc.length();
    frc.normalize();
    
    vel *= drag;
    if( dist < 90 ){ //distance between mouse and force
        
        vel += frc * 2.6; //notice the frc is negative // I changed to positive so mouse attract dots
    }else{
        
        //if the particles are not close to us, lets add a little bit of random movement using noise. this is where uniqueVal comes in handy.
        frc.x = ofSignedNoise(uniqueVal, pos.y * 0.01, ofGetElapsedTimef()*0.2);
        frc.y = ofSignedNoise(uniqueVal, pos.x * 0.01, ofGetElapsedTimef()*0.2);
        
        vel += frc * 0.04; //velocity of dots moving
        
    }
    
    
    //2 - UPDATE OUR POSITION
    
    pos += vel;
    
    
    //3 - (optional) LIMIT THE PARTICLES TO STAY ON SCREEN
    //we could also pass in bounds to check - or alternatively do this at the ofApp level
    if( pos.x > ofGetWidth() ){
        pos.x = ofGetWidth();
        vel.x *= -1.0;
    }else if( pos.x < 0 ){
        pos.x = 0;
        vel.x *= -1.0;
    }
    if( pos.y > ofGetHeight() ){
        pos.y = ofGetHeight();
        vel.y *= -1.0;
    }
    else if( pos.y < 0 ){
        pos.y = 0;
        vel.y *= -1.0;
    }

    
}

//--------------------------------------------------------------
void Particle::draw(){
    //ofSetColor(208, 255, 63);
    ofSetColor(255,255,0);

    ofDrawCircle(pos.x, pos.y, scale * 3.0);
    ofPoint(pos.x, pos.y);

}
