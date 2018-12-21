//
//  Circle.hpp
//  00-11-01-bouncing balls
//
//  Created by Zihan Shen-macbook on 11/1/18.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "ofMain.h"

struct Ball {
    int x;
    int y;
    int vx;
    int vy;
    int radius;
};

class Circle : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
   
    
  
    Ball balls[20];
    
    
};


#endif /* Circle_hpp */
