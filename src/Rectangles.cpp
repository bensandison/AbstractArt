#include "Rectangles.hpp"

void Rectangles::setup(){
    
}

void Rectangles::update(){
    
}

void Rectangles::draw(){
    ofFill();
    ofSetColor(200, 0, 0);
    ofDrawRectangle(200, 200, 100, 100);
    ofSetColor(0, 200, 20);
    ofDrawRectangle(500, 500, 150, 200);
}
