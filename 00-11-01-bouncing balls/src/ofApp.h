#pragma once

#include "ofMain.h"
#include "Circle.hpp"
#include "Particle.hpp"



class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    
    
    
      void resetParticles();

//    Circle circle;
//    Particle particles;
    
    
    
    vector <Particle> p;
    vector <ofPoint> attractPoints;
    vector <ofPoint> attractPointsWithMovement;
		
};
