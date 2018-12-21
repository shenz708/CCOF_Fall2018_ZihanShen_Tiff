//
//  PlanetClass.hpp
//  00-final-orbit
//
//  Created by Zihan Shen-macbook on 11/30/18.
//

#ifndef PlanetClass_hpp
#define PlanetClass_hpp

#include "ofMain.h"

class PlanetClass{
public:
    void setup();
    void update();
    void draw();
    
    
    ofParameterGroup planetGroup;
    ofParameter<float> rotateSpeed;
    ofParameter<float> posX;
    ofParameter<float> posY;
    //ofParameter<float> posZ;
    
    void Clicked();
    bool isClicked();
    
    
    float rotation = 0.0;
    
    ofImage earth;
    GLUquadricObj *quadric1;

   
};



#endif /* PlanetClass_hpp */
