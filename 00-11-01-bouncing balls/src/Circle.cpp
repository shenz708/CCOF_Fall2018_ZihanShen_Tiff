//
//  Circle.cpp
//  00-11-01-bouncing balls
//
//  Created by Zihan Shen-macbook on 11/1/18.
//

#include "Circle.hpp"

//--------------------------------------------------------------
void Circle::setup(){
    ofBackground(0, 0, 0);
    ofSetFrameRate(30);
    //--------------------------------------------------------------
    //    yellowBall.x = ofRandomWidth();
    //    yellowBall.y = ofRandomHeight();
    //    yellowBall.vx = ofRandom(-10,10);
    //    yellowBall.vy = ofRandom(-10,10);
    //
    //    whiteBall.x = ofRandomWidth();
    //    whiteBall.y = ofRandomHeight();
    //    whiteBall.vx = ofRandom(-10,10);
    //    whiteBall.vy = ofRandom(-10,10);
    //--------------------------------------------------------------
    
    for (int i=0; i<20; i++) {
        balls[i].x = ofRandomWidth();
        balls[i].y = ofRandomHeight();
        balls[i].vx = ofRandom(-10,10);
        balls[i].vy = ofRandom(-10,10);
        balls[i].radius = ofRandom(10,20);
    }
}

//--------------------------------------------------------------
void Circle::update(){
    //    yellowBall.x = yellowBall.x + yellowBall.vx;
    //    yellowBall.y = yellowBall.y + yellowBall.vy;
    //
    //    whiteBall.x = whiteBall.x + whiteBall.vx;
    //    whiteBall.y = whiteBall.y + whiteBall.vy;
    //
    //    if (yellowBall.x<0 || yellowBall.x > ofGetWidth()) {
    //        yellowBall.vx = -yellowBall.vx;
    //    }
    //
    //    if (yellowBall.y<0 || yellowBall.y > ofGetHeight()) {
    //        yellowBall.vy = -yellowBall.vy;
    //    }
    //
    //    if (whiteBall.x<0 || whiteBall.x > ofGetWidth()) {
    //        whiteBall.vx = -whiteBall.vx;
    //    }
    //
    //    if (whiteBall.y<0 || whiteBall.y > ofGetHeight()) {
    //        whiteBall.vy = -whiteBall.vy;
    //    }
    
    
    
    
    for (int i=0; i<20; i++) {
        
        balls[i].x = balls[i].x + balls[i].vx;
        balls[i].y = balls[i].y + balls[i].vy;
        
        if (balls[i].x<0 || balls[i].x > ofGetWidth()) {
            balls[i].vx = -balls[i].vx;
        }
        
        if (balls[i].y<0 || balls[i].y > ofGetHeight()) {
            balls[i].vy = -balls[i].vy;
        }
    }
    
}

//--------------------------------------------------------------
void Circle::draw(){
    //    ofSetColor(255, 255, 0);
    //    ofCircle(yellowBall.x, yellowBall.y, 10);
    //
    //    ofSetColor(255, 255, 255);
    //    ofCircle(whiteBall.x, whiteBall.y, 10);
    
    
    for (int i=0; i<20; i++) {
        ofSetColor(255, 255, 0);
        ofCircle(balls[i].x, balls[i].y, balls[i].radius);
    }
}
