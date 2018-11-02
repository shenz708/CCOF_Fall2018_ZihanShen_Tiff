#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
//    circle.setup();
//    particles.setup();
    
    
    ofSetVerticalSync(true);
    
    int num = 1000;
    p.assign(num, Particle());
    resetParticles();

}


void ofApp::resetParticles(){
    
    
    for(unsigned int i = 0; i < p.size(); i++){
        
        p[i].setAttractPoints(&attractPointsWithMovement);;
        p[i].reset();
    }
}





//--------------------------------------------------------------
void ofApp::update(){
//    circle.update();
//    particles.update();
    
    for(unsigned int i = 0; i < p.size(); i++){
        //p[i].setMode(currentMode);
        p[i].update();
    }
    
    //lets add a bit of movement to the attract points
    
//    for(unsigned int i = 0; i < attractPointsWithMovement.size(); i++){
//
//        attractPointsWithMovement[i].x = attractPoints[i].x + ofSignedNoise(i * 10, ofGetElapsedTimef() * 0.7) * 12.0;
//        attractPointsWithMovement[i].y = attractPoints[i].y + ofSignedNoise(i * -10, ofGetElapsedTimef() * 0.7) * 12.0;
//    }

}

//--------------------------------------------------------------
void ofApp::draw(){
//    circle.draw();
//    particles.draw();

    
    ofBackgroundGradient(ofColor(60,60,60), ofColor(10,10,10));
    
    
    for(unsigned int i = 0; i < p.size(); i++){
        p[i].draw();
    }
    


}




