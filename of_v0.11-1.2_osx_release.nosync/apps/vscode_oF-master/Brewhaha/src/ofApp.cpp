#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
   ofImage image( "Giacomo.jpg" );

   // static ofColor pixelArr[static_cast<int>(image.getWidth())][static_cast<int>(image.getHeight())];

   pixelVecHeight = image.getHeight();
   pixelVecWidth  = image.getWidth();

   for ( int y = 0; y < image.getHeight(); y++ )
   {
      for ( int x = 0; x < image.getWidth(); x++ )
      {
         pixelVec.push_back(image.getColor( x, y ));
      }
   }
}

//--------------------------------------------------------------
void ofApp::update()
{



}

//--------------------------------------------------------------
void ofApp::draw()
{

   // ofBackground( 20, 200, 100 );
   // ofSetColor( 255 );
   // ofDrawRectangle( 100, 100, 100, 100 );

   cam.begin();

   ofTranslate( pixelVecWidth, pixelVecHeight, 0 );

   ofSetSphereResolution( 3 );
   for ( int i = 0; i < pixelVec.size(); i++ )
   {
      ofPushMatrix();
      ofSetColor( pixelVec[i] );
      ofDrawSphere( - 2 * ( i % pixelVecWidth ), - 2 * ( i / pixelVecHeight ),
                    pixelVec[i].getBrightness() / 2, 1 );
      ofPopMatrix();
   }

   cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed( int key )
{



}

//--------------------------------------------------------------
void ofApp::keyReleased( int key )
{



}

//--------------------------------------------------------------
void ofApp::mouseMoved( int x, int y )
{



}

//--------------------------------------------------------------
void ofApp::mouseDragged( int x, int y, int button )
{



}

//--------------------------------------------------------------
void ofApp::mousePressed( int x, int y, int button )
{



}

//--------------------------------------------------------------
void ofApp::mouseReleased( int x, int y, int button )
{



}

//--------------------------------------------------------------
void ofApp::mouseEntered( int x, int y )
{



}

//--------------------------------------------------------------
void ofApp::mouseExited( int x, int y )
{



}

//--------------------------------------------------------------
void ofApp::windowResized( int w, int h )
{



}

//--------------------------------------------------------------
void ofApp::gotMessage( ofMessage msg )
{



}

//--------------------------------------------------------------
void ofApp::dragEvent( ofDragInfo dragInfo )
{ 



}