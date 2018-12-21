//
//  Mars.hpp
//  00-final-orbit
//
//  Created by Zihan Shen-macbook on 12/14/18.
//

#ifndef Mars_hpp
#define Mars_hpp

#include "ofMain.h"

class Mars{
public:
    void setup();
    void update();
    void draw();
    
    
    ofParameterGroup planetGroup02;
    ofParameter<float> rotateSpeed;
    ofParameter<float> posX;
    ofParameter<float> posY;
    //ofParameter<float> posZ;
    
//    void Clicked();
//    bool isClicked();
    
    
    float rotation = 0.0;
    
    ofImage mars;
    GLUquadricObj *quadric1;
    
    
};


#endif /* Mars_hpp */
