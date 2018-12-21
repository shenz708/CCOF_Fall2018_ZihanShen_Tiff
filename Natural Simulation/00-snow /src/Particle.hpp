//
//  Particle.hpp
//  00-snow 
//
//  Created by Zihan Shen-macbook on 11/2/18.
//

#ifndef Particle_hpp
#define Particle_hpp

#include "ofMain.h"

class Particle {
    
public:
    void setup();
    void update();
    void draw();
    
    void applyForce(ofPoint _f);
    void addGravityForce(float _g);
    
    void addDragForce(float _c);
    
    //void checkEdges();
    
    ofPoint loc;
    ofPoint vel;
    ofPoint acc;
    
    float mass;
    
};

#endif /* Particle_hpp */
