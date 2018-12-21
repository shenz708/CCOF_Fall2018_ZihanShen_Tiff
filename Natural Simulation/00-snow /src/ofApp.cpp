#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    background.setup();
    ofSetFrameRate(60);
    //particle.setup();

    for(int i = 0; i<TOTALNUM; i++){
        Particle p;
        p.setup();
        particle.push_back(p);
    }
    
  
    
//    for (int i=0; i<80; i++) {
//        balls[i].x = ofRandomWidth();
//        balls[i].y = 0;
//        balls[i].vx = ofRandom(-4,4);
//        balls[i].vy = ofRandom(-5,5);
//        balls[i].radius = ofRandom(5,8);
//    }

}

//--------------------------------------------------------------
void ofApp::update(){
    background.update();
    
    //particle.update();
    
    
    ofPoint wind;
    wind.set(0.001, 0);
    
    for(int i = 0; i<TOTALNUM; i++){
        particle[i].applyForce(wind);
        particle[i].addGravityForce(0.01);
        
        
        particle[i].update();
    }
    
    

    
//    for (int i=0; i<80; i++) {
//
//        balls[i].x = balls[i].x + balls[i].vx;
//        balls[i].y = balls[i].y + balls[i].vy;
//
    
   
    
    
    
//        if (balls[i].x<0 || balls[i].x > ofGetWidth()) {
//            balls[i].vx = -balls[i].vx;
//        }
        
        
//        if (balls[i].y<0 || balls[i].y > ofGetHeight()) {
//
//            balls[i].y = balls[i].y + balls[i].vy;
////            balls[i].vy = balls[i].y + balls[i].vy;
//        }
//    }


}

//--------------------------------------------------------------
void ofApp::draw(){
    background.draw();
    
    //particle.draw();
    
    for(int i = 0; i<TOTALNUM; i++){
        particle[i].draw();
    }

    
    
//    for (int i=0; i<80; i++) {
//        ofSetColor(255, 255, 255);
//        ofCircle(balls[i].x, balls[i].y, balls[i].radius);
//    }


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
