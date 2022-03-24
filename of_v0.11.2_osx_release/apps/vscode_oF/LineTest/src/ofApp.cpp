#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    counter = 0;
    ofSetCircleResolution(50);
    ofBackground(0,0,0);
    bSmooth = false;
    ofSetWindowTitle("Example 1");

    ofSetFrameRate(60);

    fWidth  = ofGetWidth ();
    fHeight = ofGetHeight();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    counter += 0.033f * 2;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPushMatrix();
    ofSetColor( 255, 130, 0 );

    ofTranslate( ofGetWidth() / 2, ofGetHeight()/2 );
    ofRotateDeg( 45 );
    ofDrawRectangle( 0, 0, 20, 20 );
    
    ofDrawBitmapString( "Hello", 22, 22 );

    ofPopMatrix();


    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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