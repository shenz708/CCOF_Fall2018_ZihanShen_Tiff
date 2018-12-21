//
//  Background.cpp
//  00-snow 
//
//  Created by Zihan Shen-macbook on 11/1/18.
//

#include "Background.hpp"

//--------------------------------------------------------------
void Background::setup(){
    
#ifdef TARGET_OPENGLES
    shader.load("shadersES2/shader");
#else
    if(ofIsGLProgrammableRenderer()){
        shader.load("shadersGL3/shader");
    }else{
        shader.load("shadersGL2/shader");
    }
#endif
    
}

//--------------------------------------------------------------
void Background::update(){
    
}

//--------------------------------------------------------------
void Background::draw(){
    ofSetColor(255);
    
    shader.begin();
    
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    shader.end();
    
}

