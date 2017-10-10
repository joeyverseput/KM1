#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
        void update();
        void draw();

		void keyPressed(int key);
    
    private:
        float x;
        float y;
        float speedX;
        float speedY;
        int radius;
        ofColor color;
};
