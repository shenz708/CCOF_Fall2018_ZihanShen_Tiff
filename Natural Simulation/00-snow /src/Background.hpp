//
//  Background.hpp
//  00-snow 
//
//  Created by Zihan Shen-macbook on 11/1/18.
//

#ifndef Background_hpp
#define Background_hpp

#include "ofMain.h"

class Background : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
  
    
    ofShader shader;

    
};


#endif /* Background_hpp */
