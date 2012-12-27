#include "testApp.h"
#include <math.h>

const int howManyDataPts = 300;

int myCircleX = 300;
int myCircleY = 300;

//float Omega1 = 100*2*M_PI;
//float Omega2 = 700.5*2*M_PI;
float deltaT = 0.0001;

int SineWaveX[howManyDataPts];
int SineWaveY[howManyDataPts];

//--------------------------------------------------------------
void testApp::setup(){
    ofEnableSmoothing();
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);
    ofSetColor(0,0,255);
	ofNoFill();


 float Omega1 = 1*2*M_PI;
 float Omega2 = 3.1*2*M_PI;

	ofBeginShape();

	for(float x=0; x<1;x+=0.01) {
		ofCurveVertex(
				ofGetWidth()/2 + ofGetWidth() * 0.3f * sin((x*Omega1*ofGetElapsedTimef() + M_PI/2.0f)),
                ofGetHeight()/2 + ofGetHeight() * 0.3f * sin(x*Omega2*ofGetElapsedTimef() )  );
	}
	ofEndShape(false);

/*

    float t = ofGetElapsedTimef();

	ofBeginShape();
	for(float x=0; x<100;x++) {
		ofCurveVertex(
				ofGetWidth()/2 + ofGetHeight() * 0.3f * sin((Omega1*(t - deltaT*x) + M_PI/2.0f)),
                ofGetHeight()/2 + ofGetHeight() * 0.3f * sin(Omega2*(t - deltaT*x) )  );
	}
	ofEndShape();
*/

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}










//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}


void testApp::shiftSineVals()
{
    for (uint8_t i=0;i<(howManyDataPts - 1);i++)
    {
        SineWaveX[i] = SineWaveX[i+1];
        SineWaveY[i] = SineWaveY[i+1];
    }
}
