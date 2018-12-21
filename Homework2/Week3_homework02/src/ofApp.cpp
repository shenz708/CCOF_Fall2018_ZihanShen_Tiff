#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(sinParam.set("SINE", 0.0,0.0,300.0));
    gui.add(cosParam.set("COSINE",0.0,0.0,300.0));
    
  

}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(0, 0, 0);
    sine = sin(ofGetElapsedTimef() * 1.0) * sinParam;
    cose = cos(ofGetElapsedTimef() * 1.0) * cosParam;
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
   
    ofSetColor(ofRandom(0, 255),
               ofRandom(0, 255),
               ofRandom(0, 255)
               );
  
    ofCircle(sine-ofRandom(0,50),cose-ofRandom(0,50),ofRandom(14,20));
    ofCircle(sine-ofRandom(0,60),cose-ofRandom(0,60),ofRandom(14,20));
    ofCircle(sine-ofRandom(0,70),cose-ofRandom(0,70),ofRandom(14,20));
    ofCircle(sine-ofRandom(0,80),cose-ofRandom(0,80),ofRandom(14,20));
    ofCircle(sine-ofRandom(0,90),cose-ofRandom(0,90),ofRandom(14,20));
    

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
