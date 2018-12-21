//
//  Sun.hpp
//  00-final-orbit
//
//  Created by Zihan Shen-macbook on 12/7/18.
//

#ifndef Sun_hpp
#define Sun_hpp

#include "ofMain.h"

class Sun{
public:
    void setup();
    void update();
    void draw();
    
    
    ofParameterGroup planetGroup;
    ofParameter<float> rotateSpeed;
    ofParameter<float> posX;
    ofParameter<float> posY;
    //ofParameter<float> posZ;
    
  
    
    float rotation = 0.0;
    
    ofImage sun;
    GLUquadricObj *quadric;
    
    
};


#endif /* Sun_hpp */
