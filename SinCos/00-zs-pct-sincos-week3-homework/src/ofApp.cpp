#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    ofSetBackgroundAuto(false);
    ofSetCircleResolution(100);
    
    inputPct = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    inputPct += 0.005;

    if(inputPct > 1) inputPct = 0;

    float outputPct1 = powf(inputPct,2);
    color = outputPct1 * 1000;

//    objectPos = (1- outputPct1) * origin + outputPct1 * dest;
    
    
    t = ofGetElapsedTimef()*100;
    objectPos.y = sin(tan(cos(t)* 10))*100; // 1.2 means the verical heigh
    //objectPos.y = sin(t) * cos(t) * 100;
    objectPos.x = t * 0.4;  //1.4 means the horizontal gap between each dots
    
   

}

//--------------------------------------------------------------
void ofApp::draw(){
    

    
    ofPushMatrix();
    ofTranslate(0, ofGetWindowHeight()/2);

    ofSetColor(color, color, 255);
    ofDrawCircle(objectPos, 1);

    ofSetColor(color, 255, 255);
    ofDrawCircle(objectPos * 4, 2);

    ofPopMatrix();
    

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
