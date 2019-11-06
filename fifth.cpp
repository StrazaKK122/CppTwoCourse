//
// Created by maffey on 31.10.2019.
//

#include <iostream>
#include "classes/Cuboid.h"
#include "classes/Segment.h"
#include "classes/Point.h"
#include "classes/Circle.h"

using namespace std;

float calculateArea(Cuboid cuboid) {
    float area = cuboid.width * cuboid.length * 2
                 + cuboid.length * cuboid.height * 2
                 + cuboid.width * cuboid.height * 2;
    cout << "The area is: " << area << endl;
    return area;
}

bool isInside(Point point, Segment segment) {
    // We try to arrive to the formula of y = ax + b
    float a = (segment.y2 - segment.y1) / (segment.x2 - segment.x1);
    float b = segment.y1 - a * segment.x1;
    if (point.y == a * point.x + b) {
        if ((segment.x1 <= segment.x2 && segment.x2 > point.x && point.x > segment.x1)
            || (segment.x1 >= segment.x2 && segment.x1 > point.x && point.x > segment.x2)) {
            if ((segment.y1 <= segment.y2 && segment.y2 > point.y && point.y > segment.y1)
                || (segment.y1 >= segment.y2 && segment.y1 > point.y && point.y > segment.y2)) {
                cout << "The point is inside the given segment.\n";
                return true;
            }
        }
    }
    cout << "The point is NOT inside the given segment.\n";
    return false;
}


bool compare(Point point_one, Point point_two) {
    if (point_one.x == point_two.x && point_one.y == point_two.y) {
        cout << "Both points are the same\n";
        return true;
    } else {
        cout << "The points are different.\n";
        return false;
    }
}

bool compareCircles(Circle one, Circle two) {
    if (one.radius == two.radius && one.color == two.color) {
        cout << "Both circles are the same\n";
        return true;
    } else {
        cout << "The circles are different.\n";
        return false;
    }
}

// MAIN FUNCTION
int main() {
    Cuboid ourCuboid(6, 10, 12);
    ourCuboid.calculateVolume();
    calculateArea(ourCuboid);

    cout << endl;

    Point ourPoint(2, 2);
    Segment ourSegment(1, 1, 14, 14);
    isInside(ourPoint, ourSegment);

    cout << endl;

    Point one;
    Point two(5, 7);
    one.show();
    two.show();
    compare(one, two);
    two.setX(3);
    two.setY(4);
    two.show();
    compare(one, two);

    cout << endl;

    Circle oneC;
    Circle twoC(12, 5);
    compareCircles(oneC, twoC);
    twoC.setColor(1);
    compareCircles(oneC, twoC);
    twoC.setColor(10);
    compareCircles(oneC, twoC);

    // TODO: task # 5.

    return 0;
}
