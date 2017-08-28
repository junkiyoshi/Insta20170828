#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofSetLineWidth(1);
}

//--------------------------------------------------------------
void ofApp::update(){
	ofColor c;
	c.setHsb(ofGetFrameNum() % 255, 255, 255);
	ofSetColor(c);
}

//--------------------------------------------------------------
void ofApp::draw(){

	this->cam.begin();

	float size = 15;

	for (int x = -ofGetWidth() / 2; x < ofGetWidth() / 2; x += size) {
		for (int y = -ofGetHeight() / 2; y < ofGetHeight() / 2; y += size) {
			ofNoFill();
			ofEllipse(ofVec3f(x, y, 0), size, size);

			ofFill();
			ofEllipse(ofVec3f(x, y, 0), size * ofNoise(x * 0.005, y * 0.005, ofGetFrameNum() * 0.02), size * ofNoise(x * 0.005, y * 0.005, ofGetFrameNum() * 0.02));
		}
	}

	this->cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
