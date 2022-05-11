#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
   std::cout << "Calculating prime numbers..." << std::endl;


   // Cycle through and find primes
   for ( int i = 2; i < MAX_PRIME; i++ )
   {
      bool isPrime = true;

      // Check if the number is prime
      for ( int j = 0; j < primeNumbers.size(); j++ )
      {
         if ( primeNumbers[j] * primeNumbers[j] > i )
            break;
         if ( i % primeNumbers[j] == 0 )
         {
            isPrime = false;
            break;
         }
      }
      // If it is prime, add it to the vector
      if ( isPrime )
         primeNumbers.push_back( i );
   }


}

//--------------------------------------------------------------
void ofApp::update()
{



}

//--------------------------------------------------------------
void ofApp::draw()
{

   // ofBackground( 20,200,100 );
   // ofSetColor( 255 );
   // ofDrawRectangle( 100,100,100,100 );

   cam.begin();
   
   ofBackground( 0 );
   // ofTranslate( ofGetWidth() / 2, ofGetHeight() / 2 );

   // Draw the prime numbers
   ofSetColor( 0, 230, 70 );
   ofTranslate( 0, -MAX_PRIME * zoomLevel / 2, 0 );
   ofSetSphereResolution( 3 );
   ofSetColor( 230, 0, 0 );

   for ( int i = 0; i < primeNumbers.size(); i++ )
   {
      ofPushMatrix();
      ofRotateYRad( primeNumbers[i] );
      ofTranslate( 0, primeNumbers[i] * zoomLevel, primeNumbers[i] * zoomLevel );
      ofDrawSphere( 0, 0, 0, 1 );
      ofPopMatrix();
   }

   // Draw centre pixel
   ofPushMatrix();
   ofSetColor( 255, 255, 255 );
   ofDrawSphere( 0, 0, 0, 1 );
   ofPopMatrix();

   cam.end();

}

//--------------------------------------------------------------
void ofApp::keyPressed( int key )
{
   if ( key == OF_KEY_SHIFT )
   {
      shiftPressed = true;
      // std::cout << "Shift on\n";
   }

   if ( key == OF_KEY_UP )
   {
      int multiplier = 2;
      if ( shiftPressed )
         multiplier = 5;

      zoomLevel *= multiplier;
      // std::cout << zoomLevel << std::endl;
   }

   if ( key == OF_KEY_DOWN )
   {
      int multiplier = 2;
      if ( shiftPressed )
         multiplier = 5;

      zoomLevel /= multiplier;
      // std::cout << zoomLevel << std::endl;
   }

   if ( key == 'h' )
   {
      zoomLevel = DEFAULT_ZOOM;
      // std::cout << "Welcome home Theseus!\n";
   }
}

//--------------------------------------------------------------
void ofApp::keyReleased( int key )
{
   if ( key == OF_KEY_SHIFT )
   {
      shiftPressed = false;
      // std::cout << "Shift off\n";
   }
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