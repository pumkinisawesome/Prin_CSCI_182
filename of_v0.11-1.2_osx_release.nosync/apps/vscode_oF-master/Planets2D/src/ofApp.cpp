#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
   // Setup window
   ofBackground( 0, 0, 0 );
   ofSetCircleResolution( 50 );
   ofSetVerticalSync( true );
   ofSetFrameRate( 60.0 );

   sunPosition.x = ofGetWindowWidth () / 2;
   sunPosition.y = ofGetWindowHeight() / 2;
   sunSize       = 40.0f;
   sunColor      = ofColor::yellow;

   earthColor    = ofColor::lightBlue;
   earthSize     = sunSize / 4;
   earthDistance = 200.0;
   earthSpeed    = 0.015;

   moonColor     = ofColor::lightGray;
   moonSize      = sunSize / 16;
   moonDistance  = 60;
   moonSpeed     = 0.045;
   


}

//--------------------------------------------------------------
void ofApp::update()
{
   earthPosition.x = cos( ofGetFrameNum() * earthSpeed ) * earthDistance;
   earthPosition.y = sin( ofGetFrameNum() * earthSpeed ) * earthDistance;

   moonPosition .x = cos( ofGetFrameNum() * moonSpeed  ) * moonDistance;
   moonPosition .y = sin( ofGetFrameNum() * moonSpeed  ) * moonDistance;


}

//--------------------------------------------------------------
void ofApp::draw()
{
   ofPushMatrix();
   ofSetColor  ( sunColor );
   ofTranslate ( sunPosition ); 
   ofDrawCircle( 0.0f, 0.0f, sunSize );

   ofTranslate ( earthPosition );
   ofSetColor  ( earthColor );
   ofDrawCircle( 0.0f, 0.0f, earthSize );

   ofTranslate ( moonPosition );
   ofSetColor  ( moonColor );
   ofDrawCircle( 0.0f, 0.0f, moonSize );

   ofPopMatrix();


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{



}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{



}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{



}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{



}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{



}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{



}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{



}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{



}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{



}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{



}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{ 



}