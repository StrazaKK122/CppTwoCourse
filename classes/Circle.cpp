//
// Created by maffey on 06.11.2019.
//

#include "Circle.h"
#include <cmath>


Circle::Circle() {
    radius = 12;
    color = 1;
}

Circle::Circle(float radius, int color) {
    Circle::radius = radius;
    Circle::color = color;
}

float Circle::calculateArea() {
    return M_PI * pow(radius, 2);
}

void Circle::setRadius(float radius) {
    Circle::radius = radius;
}

void Circle::setColor(int color) {
    Circle::color = color;
}
