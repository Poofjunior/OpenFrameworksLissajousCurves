#include "testApp.h"
#include <math.h>

const int howManyDataPts = 300;

float Omega1 = 1*2*M_PI;
float Omega2 = 3.1*2*M_PI;
float deltaT = 0.0001;

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

        ofEndShape(false);
}
*/
}


//--------------------------------------------------------------

