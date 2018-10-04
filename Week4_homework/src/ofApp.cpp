#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(sinParam.set("SINE", 0 ,0, 300));
    gui.add(cosParam.set("COSINE",0 ,0, 300));
    //1st number means default value; 2nd means the min; 3rd means the max.
    
  

}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(0, 0, 0);
    sine = sin(ofGetElapsedTimef() * 0.5) * sinParam;
    cose = cos(ofGetElapsedTimef() * 0.5) * cosParam;
    //the 0.5 number means the elapsed time of the movement according to the input
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
   
//    ofSetColor(ofRandom(0, 255),
//               ofRandom(0, 255),
//               ofRandom(0, 255)
//               );
    
    ofSetColor(255,255,255,ofRandom(80,100));
  
    ofCircle(sine-ofRandom(20,50),cose-ofRandom(20,50), 20);
//    ofCircle(sine-ofRandom(0,60),cose-ofRandom(0,60),ofRandom(14,20));
//    ofCircle(sine-ofRandom(0,70),cose-ofRandom(0,70),ofRandom(14,20));
//    ofCircle(sine-ofRandom(0,80),cose-ofRandom(0,80),ofRandom(14,20));
//    ofCircle(sine-ofRandom(0,90),cose-ofRandom(0,90),ofRandom(14,20));
    
    //ofCircle(<#float x#>, <#float y#>, float radius);
    

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
