//
// Created by maffey on 06.11.2019.
//

#include "Segment.h"
#include <cmath>
#include <iostream>

using namespace std;

Segment::Segment(float x1, float y1, float x2, float y2) {
    Segment::x1 = x1;
    Segment::y1 = y1;
    Segment::x2 = x2;
    Segment::y2 = y2;
}


double Segment::get_length() {
    return (sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}

void Segment::flip(char axis) {
    if (axis == 'X') {
        y1 = -y1;
        y2 = -y2;
    } else if (axis == 'Y') {
        x1 = -x1;
        x2 = -x2;
    } else {
        cout << "Such axis doesn't exist. Try 'X' or 'Y'.\n";
    }
}

void Segment::shift(float vector_x, float vector_y) {
    x1 = x1 + vector_x;
    y1 = y1 + vector_y;
    x2 = x2 + vector_x;
    y2 = y2 + vector_y;
}

void Segment::show() {
    cout << "First point coordinates: (" << x1 << "," << y1 << ")\n";
    cout << "Second point coordinates: (" << x2 << "," << y2 << ")\n";
    cout << "Segment length: " << get_length() << endl;
}
