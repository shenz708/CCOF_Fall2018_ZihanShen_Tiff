#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "PlanetClass.hpp"
#include "Mars.hpp"
#include "EmitterClass.hpp"
#include "Sun.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    void playSong1();
    void playSong2();
    void playSong3();
    
    

    
    ofxPanel gui;
    ofxButton button1;
    ofxButton button2;
    ofxButton button3;
    
		
    
    ofParameterGroup planetGroups;
    
    //PlanetClass planet01;
    
    PlanetClass planet02;
    
    Mars mars01;
    
    EmitterClass emitter01;
    
    Sun sun; 
    
    ofSoundPlayer sound1;
    ofSoundPlayer sound2;
    ofSoundPlayer sound3;
    
    
    ofEasyCam cam;
    
    ofImage bg;
};
