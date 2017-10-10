#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup("Instellingen", "settings.xml");
    
    gui.add(radius.set("Radius", 50, 0, 200));
    gui.add(speedX.set("SpeedX", 20, 0, 200));
    gui.add(speedY.set("SpeedY", 20, 0, 200));
    gui.add(color.set("Color", ofColor::aliceBlue));

}

//--------------------------------------------------------------
void ofApp::update(){
    for (unsigned int i = 0; i <balls.size(); i++) {
        balls[i].update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    
    for (unsigned int i = 0; i <balls.size(); i++) {
        balls[i].draw();
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    Ball newBall;
    newBall.setup(speedX, speedY, radius, colour);
    balls.push_back(newBall);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    if (balls.size() > 0) {
        balls.pop_back();
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
