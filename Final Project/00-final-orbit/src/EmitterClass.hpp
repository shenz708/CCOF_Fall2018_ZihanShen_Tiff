//
//  EmitterClass.hpp
//  00-final-orbit
//
//  Created by Zihan Shen-macbook on 11/30/18.
//

#ifndef EmitterClass_hpp
#define EmitterClass_hpp

#include "ofMain.h"

class EmitterClass{
public:
    void setup();
    void update();
    void draw();
    
    
    ofLight light;
    ofImage note;
  
    
    vector<float> fft_smoothed;
    vector<vector<float>> log;
    int n_bands_to_get;
    
    ofSoundPlayer sound;

    
};

#endif /* EmitterClass_hpp */
