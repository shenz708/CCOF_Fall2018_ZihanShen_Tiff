#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    //Origin Position: top-left corner of the canvas
    origin = ofPoint(0,0);
    
    //Destination Position: bottom-right corner of the canvas
    dest = ofPoint (ofGetWindowWidth(), ofGetWindowHeight());
    
    //means don't clean my canvas
    ofSetBackgroundAuto(false);
    
    //make sure
    objectPos = origin; //make sure
    
    inputPct = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
    
    //move 0.5% of the whole journey per frame
    inputPct += 0.005;
    
    //make sure the value of pct (percent) is less than 1
    //because we use it to describe the progress of a task
    //when starting the task: progress is 0% --> pct = 0
    //when the task is 28% done: progress is 28% --> pct = 0.28
    //when the task is 78.2840% done: progress is 78.2840% --> pct = 0.782840
    //when the task is completed: progress is 100% --> pct = 1
    if(inputPct > 1) inputPct = 0;
    
    //the magic PCT formula we explained in class ;)
    
//    objectPos = (1-pct) * origin + pct * dest;
    
    //objectPos = (1 + pct) * origin + pct * dest;
    
    //objectPos = (1-pct) * origin;
    
    float outputPct1 = powf(inputPct,2);
    objectPos = (1- outputPct1) * origin + outputPct1 * dest;
    
    color1 = outputPct1 * 1000;
    
    
    float outputPct2 = powf(inputPct,16);
    objectPos2 = (1- outputPct2) * origin + outputPct2 * dest;
    
    color2 = outputPct2 * 1000;
    
    
    
    
    
    
    
   // brightness = 150 - inputPct * 100;
    
//    float t = pct;
//    objectPos = sin(tan(cos(t) * 1.2));
//
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(color1, color1, 255);
    
    
    ofDrawCircle(objectPos, 100);
    
    
    
    
    ofSetColor(120, 100, color2, 50);
    
    
    ofDrawCircle(objectPos2, 150);
   


    

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
