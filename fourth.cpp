//
// Created by maffey on 21.10.2019.
//
#include <iostream>
#include "classes/Vector.h"

using namespace std;

// MAIN FUNCTION
int main() {
    // Show Tree

    int pointA[2] = {3, 3};
    int pointB[2] = {4, 7};
    int pointX[2] = {5, 5};
    int pointY[2] = {3 - 2};
    Vector one(pointA, pointB);
    one.show();
    Vector two(pointX, pointY);
    two.show();
    // Vector::get_count();
    one.add(two);
    one.show();
    one.subtract(two);
    one.show();
    one.multiply(two);
    one.show();


    return 0;
}