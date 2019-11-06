//
// Created by maffey on 06.11.2019.
//

#ifndef SANDBOX_SEGMENT_H
#define SANDBOX_SEGMENT_H

class Point;

using namespace std;

class Segment {

    float x1, y1;
    float x2, y2;

public:
    Segment(float x1, float y1, float x2, float y2);

    void set_segment(float first_x, float first_y, float second_x, float second_y);

    double get_length();

    void flip(char axis);

    void shift(float vector_x, float vector_y);

    void show();

    friend bool isInside(Point point, Segment segment);
};


#endif //SANDBOX_SEGMENT_H
