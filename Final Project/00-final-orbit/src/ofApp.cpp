#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofBackground(0);
    
    bg.load("bg.jpg");
    
    //planet01.setup();
    planet02.setup();
    
    mars01.setup();
    
    sun.setup();

   
    
    
    planetGroups.add(planet02.planetGroup);
    
    planetGroups.add(mars01.planetGroup02);
    
    button1.addListener(this, &ofApp::playSong1);
    button2.addListener(this, &ofApp::playSong2);
    button3.addListener(this, &ofApp::playSong3);
    
    
    gui.setup(planetGroups);
    gui.add(button1.setup("song1"));
    gui.add(button2.setup("song2"));
    gui.add(button3.setup("song3"));
    
    sound1.load("song.mp3");
    sound2.load("song2.mp3");
    sound3.load("song3.mp3");
    
    emitter01.sound = sound1;
    emitter01.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    //planet01.update();
    planet02.update();
    mars01.update();
    
    emitter01.update();
    
    sun.update();


//    if(ofGetMousePressed()){
//        emitter01.sound.stop();
//        emitter01.sound = sound2;
//        emitter01.sound.play();
//    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    //gui.draw();
    
   //bg.draw(0, 0, 1024, 768);
    
    //bg.draw(0, 0, 3000, 2250);
    //bg.draw(0, 0, 2000, 1500);
    bg.draw(0, 0, 1800, 1350);

    ofEnableDepthTest();
    cam.begin();
    sun.draw();

    //ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    //planet01.draw();
    emitter01.draw();



    //ofTranslate(planet01.posX, planet01.posY);
    planet02.draw();
    mars01.draw();
    
    cam.end();
    ofDisableDepthTest();
    
    gui.draw();
    
//    bg.draw(190, 490, 20, 20);
}

void ofApp::playSong1(){
    emitter01.sound.stop();
    emitter01.sound = sound1;
    emitter01.sound.play();
}

void ofApp::playSong2(){
    emitter01.sound.stop();
    emitter01.sound = sound2;
    emitter01.sound.play();
    
}

void ofApp::playSong3(){
    emitter01.sound.stop();
    emitter01.sound = sound3;
    emitter01.sound.play();
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
