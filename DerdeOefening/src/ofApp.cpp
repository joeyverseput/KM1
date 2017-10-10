#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(ofColor::black);

}

//--------------------------------------------------------------
void ofApp::update(){
    rotateX = rotateX +1;
    rotateY = rotateY +2;
    rotateZ = rotateZ +3;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    
    if (rotate) {
        ofRotateX(rotateX);
        ofRotateY(rotateY);
        ofRotateZ(rotateZ);
    }
    
    if(drawGrid) {
        ofDrawGrid(200);
    }
    
    ofNoFill();
    ofSetColor(ofColor::red);
    ofDrawSphere(100, 100, 100, 50);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'g') {
        drawGrid = !drawGrid;
    }
    
    if (key == ' ') {
        rotate = !rotate;
    }
}
