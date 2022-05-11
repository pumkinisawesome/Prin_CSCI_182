#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp
{
   public:
      void setup();
      void update();
      void draw();
      
      void keyPressed(int key);
      void keyReleased(int key);
      void mouseMoved(int x, int y);
      void mouseDragged(int x, int y, int button);
      void mousePressed(int x, int y, int button);
      void mouseReleased(int x, int y, int button);
      void mouseEntered(int x, int y);
      void mouseExited(int x, int y);
      void windowResized(int w, int h);
      void dragEvent(ofDragInfo dragInfo);
      void gotMessage(ofMessage msg);
   
   private:
      float sunSize;
      ofColor sunColor;
      glm::vec2 sunPosition;

      float earthDistance;
      float earthSpeed;
      float earthSize;
      ofColor earthColor;
      glm::vec2 earthPosition;

      float moonDistance;
      float moonSpeed;
      float moonSize;
      ofColor moonColor;
      glm::vec2 moonPosition;


};