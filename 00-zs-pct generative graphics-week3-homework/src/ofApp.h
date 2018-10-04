#pragma once

#include "ofMain.h"

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
    
    

    //ofPoint stores 3 float - (float1, float2, float3);
    //float1: .x;
    //float2: .y;
    //float3: .z;
    
    ofPoint origin;
    ofPoint dest;
    ofPoint objectPos;
    ofPoint objectPos2;

    
    
    //PCT(percent)
    //as a float, the value of pct can be
    float inputPct;
    float color1;
    float color2;
    float brightness;

    
    

    
    
		
};
