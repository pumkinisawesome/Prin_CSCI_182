#include "ofApp.h"
#include "constants.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    // create seed for random numbers
    srand( time( NULL ) );

    // Loop through and move sailor in grid
    for ( int nCurrentSteps = 0; nCurrentSteps < MAX_STEPS; nCurrentSteps++ )
    {
        Direction nextStepDirection = static_cast<Direction>( rand() % 4 );

        // For each step move sailor
        switch ( nextStepDirection )
        {
            case NORTH:
                if ( nSailorY > 0 )
                    nSailorY--;
                else
                    continue;
                break;
            
            case EAST:
                if ( nSailorX < MAP_WIDTH - 1 )
                    nSailorX++;
                else
                    continue;
                break;

            case SOUTH:
                if ( nSailorY < MAP_HEIGHT - 1 )
                    nSailorY++;
                else
                    continue;
                break;

            case WEST:
                if ( nSailorX > 0 )
                    nSailorX--;
                else
                    continue;
                break;
        }

        // Increment box sailor is in
        arrSteps[ nSailorX ][ nSailorY ]++;
    }

    // Find maximum value
    maxValue = 0;
    for ( int i = 0; i < MAP_HEIGHT; i++ )
        for ( int j = 0; j < MAP_WIDTH; j++ )
            if ( arrSteps[j][i] > maxValue )
                maxValue = arrSteps[j][i];

    for ( int i = 0; i < MAP_HEIGHT; i++ )
    {
        for ( int j = 0; j < MAP_WIDTH; j++ )
        {
            std::cout << arrSteps[j][i] << '\t';
        }
        std::cout << std::endl;
    }
}

//--------------------------------------------------------------
void ofApp::update()
{



}

//--------------------------------------------------------------
void ofApp::draw()
{

    ofBackground(0,0,0);
    ofEnableAlphaBlending(); 

    for ( int i = 0; i < MAP_HEIGHT; i++ )
    {
        for ( int j = 0; j < MAP_WIDTH; j++ )
        {
            ofSetColor(215,34,9, arrSteps[j][i] / maxValue * 100);
            ofDrawRectangle( ofGetWindowWidth()  / MAP_WIDTH  * j,
                             ofGetWindowHeight() / MAP_HEIGHT * i,
                             ofGetWindowWidth()  / MAP_WIDTH,
                             ofGetWindowHeight() / MAP_HEIGHT );
        }
    }

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