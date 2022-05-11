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
   // Begin using camera
   cam.begin();
   
   // Set background to black
   ofBackground( 0 );

   // Set up position and set sphere resolution and color
   ofTranslate( 0, -MAX_PRIME * zoomLevel / 2, 0 );
   ofSetSphereResolution( 3 );
   ofSetColor( 36, 223, 7 );

   // Loop through primes and draw
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

   // End using camera
   cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed( int key )
{
   // shift key is used as a multiplier to zoom
   if ( key == OF_KEY_SHIFT )
   {
      shiftPressed = true;
      // std::cout << "Shift on\n";
   }

   // up key is used to zoom in
   if ( key == OF_KEY_UP )
   {
      int multiplier = 2;
      if ( shiftPressed )
         multiplier = 5;

      zoomLevel *= multiplier;
      // std::cout << zoomLevel << std::endl;
   }

   // down key is used to zoom out
   if ( key == OF_KEY_DOWN )
   {
      int multiplier = 2;
      if ( shiftPressed )
         multiplier = 5;

      zoomLevel /= multiplier;
      // std::cout << zoomLevel << std::endl;
   }

   // h key is used to reset zoom
   if ( key == 'h' )
   {
      zoomLevel = DEFAULT_ZOOM;
      // std::cout << "Welcome home Theseus!\n";
   }
}

//--------------------------------------------------------------
void ofApp::keyReleased( int key )
{
   // Detects when shift is released, to disable modifier
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