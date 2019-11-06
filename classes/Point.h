//
// Created by maffey on 06.11.2019.
//

#ifndef SANDBOX_POINT_H
#define SANDBOX_POINT_H


using namespace std;

class Segment;

class Point {

private:

    float x;
    float y;

public:
    Point();

    Point(float x, float y);

    void show();

    friend bool isInside(Point point, Segment segment);

    float getX();

    float getY();

    void setX(float x);

    void setY(float y);

    friend bool compare(Point point_one, Point point_two);

};

#endif //SANDBOX_POINT_H
