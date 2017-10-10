//
//  Ball.hpp
//  mijnApp
//
//  Created by Joey Verseput on 12-09-17.
//
//

#ifndef Ball_hpp
#define Ball_hpp

#include <stdio.h>
#include <ofMain.h>

#endif /* Ball_hpp */

class Ball {

public:
    Ball();
    
    void setup();
    
    void update();
    
    void draw();
    
    // variables
    float x;
    float y;
    float speedX;
    float speedY;
    int radius;
    ofColor color;

};


