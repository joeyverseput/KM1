#pragma once

#include "ofMain.h"
#include 

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
    
        ofxPanel gui;
};
