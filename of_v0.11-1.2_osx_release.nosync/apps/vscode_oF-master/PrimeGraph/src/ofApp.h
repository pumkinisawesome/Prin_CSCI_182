#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp
{
   public:
      void update();
      void setup();
      void draw();

      void keyPressed ( int key );
      void keyReleased( int key );

      void mouseMoved   ( int x, int y );
      void mouseDragged ( int x, int y, int button );
      void mousePressed ( int x, int y, int button );
      void mouseReleased( int x, int y, int button );
      void mouseEntered ( int x, int y );
      void mouseExited  ( int x, int y );

      void windowResized( int w, int h );
      
      void dragEvent( ofDragInfo dragInfo );
      void gotMessage( ofMessage msg );

   private:
      ofEasyCam        cam;                              // EasyCam object to view in 3D
      const int        MAX_PRIME        = 50000;         // Maximum value to check for primes
      const double     DEFAULT_ZOOM     = 0.01;          // Default zoom level
      double           zoomLevel        = DEFAULT_ZOOM;  // Current zoom level
      bool             shiftPressed     = false;         // Whether shift is pressed currently
      std::vector<int> primeNumbers;                     // Vector to store calculated prime numbers
};