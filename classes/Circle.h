//
// Created by maffey on 06.11.2019.
//

#ifndef SANDBOX_CIRCLE_H
#define SANDBOX_CIRCLE_H


class Circle {
private:
    float radius;
    int color;
public:
    Circle();

    Circle(float radius, int color);

    float calculateArea();

    void setRadius(float radius);

    void setColor(int color);

    friend bool compareCircles(Circle one, Circle two);
};


#endif //SANDBOX_CIRCLE_H
