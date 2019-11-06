//
// Created by maffey on 06.11.2019.
//
#include <iostream>
#include "Point.h"

using namespace std;

void Point::show() {
    cout << "Point coordinates: (" << x << "," << y << ")\n";
}

Point::Point(float x, float y) {
    Point::x = x;
    Point::y = y;

}

Point::Point() {
    Point::x = 3;
    Point::y = 4;

}

float Point::getX() {
    return x;
}

float Point::getY() {
    return y;
}

void Point::setX(float x) {
    Point::x = x;
}

void Point::setY(float y) {
    Point::y = y;
}
