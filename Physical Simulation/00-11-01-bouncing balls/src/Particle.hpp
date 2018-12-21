//
//  Particle.hpp
//  00-11-01-bouncing balls
//
//  Created by Zihan Shen-macbook on 11/1/18.
//

#ifndef Particle_hpp
#define Particle_hpp

#include "ofMain.h"

class Particle : public ofBaseApp{
    
public:
    Particle();
    
    void setAttractPoints( vector <ofPoint> * attract );
    
    void reset();
    void update();
    void draw();
    
    ofPoint pos;
    ofPoint vel;
    ofPoint frc;
    
    float drag;
    float uniqueVal;
    float scale;
    
    
    vector <ofPoint> * attractPoints;
    
    
};


#endif /* Particle_hpp */
