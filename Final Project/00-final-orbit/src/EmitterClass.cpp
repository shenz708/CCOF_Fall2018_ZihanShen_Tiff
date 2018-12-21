//
//  EmitterClass.cpp
//  00-final-orbit
//
//  Created by Zihan Shen-macbook on 11/30/18.
//

#include "EmitterClass.hpp"

void EmitterClass::setup(){
    
    ofSetFrameRate(60);
    ofBackground(0);
    //ofBackgroundGradient(ofColor(0,0,0), ofColor(10,10,10));
    ofSetWindowTitle("Insta");
    
    ofEnableDepthTest();
    
//    note.load("note.jpg");
    
    sound.play();

    n_bands_to_get = 64;
    
    for (int j = 0; j < n_bands_to_get; j++) {
        fft_smoothed.push_back(0);
    }
    
    
    
    light.setPosition(ofVec3f(0, 0, 1024));
    //light.enable();
    
}

//--------------------------------------------------------------
void EmitterClass::update(){
    ofSoundUpdate();
    float* val = ofSoundGetSpectrum(n_bands_to_get);
    
    for (int i = 0; i < n_bands_to_get; i++) {
        
        fft_smoothed[i] *= 0.96f;
        if (fft_smoothed[i] < val[i]) {
            
            fft_smoothed[i] = val[i];
        }
    }
    
    log.push_back(fft_smoothed);
    
    if (log.size() > 10) {
        log.erase(log.begin());
    }
    
}

//--------------------------------------------------------------

//void EmitterClass::draw(float _centerX, float _centerY)
void EmitterClass::draw(){
    
    ofSetColor(200);
    note.resize(50, 50);
    note.draw(ofVec2f(-(note.getWidth() / 2), -(note.getHeight() / 2)));
    
    float cubeSize = 1;
    
    if (sound.getIsPlaying()) {
        
        float radius = 80;
        
        for (int l = log.size() - 1; l > -1 ; l--)
        {
            for (int i = 0; i < n_bands_to_get; i++) {
                
                float deg = i * (360.f / n_bands_to_get);
                float height = log[l][i] * 50 * i / 3;
                
                float x = radius * cos(deg * DEG_TO_RAD);
                float y = radius * sin(deg * DEG_TO_RAD);
                
                ofVec3f point(x, y, height*2 );
                //ofVec3f means moving forward X, sideways Y, up height/2
                
                ofColor line_color;
                line_color.setHsb(255 - deg / 360 * 255, 255, 255, 200);
                ofSetColor(line_color);
                
                //ofDrawBox(point, cubeSize);
                //ofDrawBox(point, size.x, y,z)
                
                ofDrawSphere(point, 2);
                
            }
            
            //overall radius
            radius += 18;
        }
    }

   // ofColor(255,255,255);
    //ofDrawSphere(0,0,80);

    
}
