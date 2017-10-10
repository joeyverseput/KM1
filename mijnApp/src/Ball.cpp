//
//  Ball.cpp
//  mijnApp
//
//  Created by Joey Verseput on 12-09-17.
//
//

#include "Ball.hpp"



void Ball::update(){
    if(x < 0) {
        x = 0;
        speedX = -speedX;
    }
    
    if (x > ofGetWidth()) {
        x = ofGetWidth();
        speedX = -speedX;
    }
    
    if (y < 0){
        y = 0;
        speedY = -speedY;
    }
    
    if (y > ofGetHeight()) {
        y = ofGetHeight();
        speedY = -speedY;
    }
    
    x += speedX;
    y += speedY;
    
}

//--------------------------------------------------------------
void Ball::draw(){
    ofSetColor(ofColor::red);
    ofDrawCircle(x, y, radius);
}



