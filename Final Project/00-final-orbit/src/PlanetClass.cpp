//
//  PlanetClass.cpp
//  00-final-orbit
//
//  Created by Zihan Shen-macbook on 11/30/18.
//

#include "PlanetClass.hpp"

//--------------------------------------------------------------
void PlanetClass::setup(){
    planetGroup.add(rotateSpeed.set("speed", 0.5, 0.0, 9.0));
    //2nd = value 3rd = float min; 4th = float max
    planetGroup.add(posX.set("x", 0, 0, 600));
    planetGroup.add(posY.set("y", 0, 0, 600));
    
    
    glEnable(GL_DEPTH_TEST); //enable depth comparisons and update the depth buffer
    ofDisableArbTex();
    
    earth.loadImage("earth.png");

    //prepare quadric for sphere
    quadric1 = gluNewQuadric();
    gluQuadricTexture(quadric1, GL_TRUE);
    gluQuadricNormals(quadric1, GLU_SMOOTH);
}

//--------------------------------------------------------------
void PlanetClass::update(){
    rotation++;
}

//--------------------------------------------------------------
void PlanetClass::draw(){
    //ofSetColor(255,0,0);
    ofPushStyle();
    ofSetColor(255,255,255);
    glTranslatef(posX, posY,20);
    ofRotate(rotation * rotateSpeed);    
    earth.getTextureReference().bind();
    gluSphere(quadric1, 20, 100, 100);
    ofPopStyle();
}




void PlanetClass::Clicked(){
   
}


bool PlanetClass::isClicked(){
    
}
