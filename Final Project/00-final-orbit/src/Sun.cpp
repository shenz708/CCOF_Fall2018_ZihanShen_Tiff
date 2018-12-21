//
//  Sun.cpp
//  00-final-orbit
//
//  Created by Zihan Shen-macbook on 12/7/18.
//

#include "Sun.hpp"

void Sun::setup(){
    planetGroup.add(rotateSpeed.set("speed", 0.5, 0.0, 9.0));
    //2nd = value 3rd = float min; 4th = float max
    planetGroup.add(posX.set("x", 0, 0, 600));
    planetGroup.add(posY.set("y", 0, 0, 600));
    
    
    glEnable(GL_DEPTH_TEST); //enable depth comparisons and update the depth buffer
    ofDisableArbTex();
    sun.loadImage("sun.jpg");
    
    //prepare quadric for sphere
    quadric = gluNewQuadric();
    gluQuadricTexture(quadric, GL_TRUE);
    gluQuadricNormals(quadric, GLU_SMOOTH);
}

//--------------------------------------------------------------
void Sun::update(){
    rotation++;
}

//--------------------------------------------------------------
void Sun::draw(){
    ofPushStyle();
    ofSetColor(255,255,255);
    ofRotate(rotation * rotateSpeed);
    //ofDrawSphere(posX,posY,20);
    
    sun.getTextureReference().bind();
    gluSphere(quadric, 100, 100, 100);
    ofPopStyle();
}


