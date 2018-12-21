//
//  Mars.cpp
//  00-final-orbit
//
//  Created by Zihan Shen-macbook on 12/14/18.
//

#include "Mars.hpp"

//--------------------------------------------------------------
void Mars::setup(){
    planetGroup02.add(rotateSpeed.set("speed", 0.5, 0.0, 9.0));
    //2nd = value 3rd = float min; 4th = float max
    planetGroup02.add(posX.set("x", 0, 0, 600));
    planetGroup02.add(posY.set("y", 0, 0, 600));
    
    
    glEnable(GL_DEPTH_TEST); //enable depth comparisons and update the depth buffer
    ofDisableArbTex();
    
    mars.loadImage("mars.png");
    
    //prepare quadric for sphere
    quadric1 = gluNewQuadric();
    gluQuadricTexture(quadric1, GL_TRUE);
    gluQuadricNormals(quadric1, GLU_SMOOTH);
}

//--------------------------------------------------------------
void Mars::update(){
    rotation++;
}

//--------------------------------------------------------------
void Mars::draw(){
    //ofSetColor(255,0,0);
    ofPushStyle();
    ofSetColor(255,255,255);
    glTranslatef(posX, posY,10);
    ofRotate(rotation * rotateSpeed);
    mars.getTextureReference().bind();
    gluSphere(quadric1, 20, 100, 100);
    ofPopStyle();
}



