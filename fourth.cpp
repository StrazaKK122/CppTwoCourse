//
// Created by maffey on 21.10.2019.
//
#include <iostream>
#include "classes/Vector.h"

using namespace std;

// MAIN FUNCTION
int main() {
    int pointA[2] = {3, 3};
    int pointB[2] = {4, 7};
    Vector one(pointA, pointB);
    one.show();
    Vector two(pointB, pointA);
    cout << one.add(two);
    one.show();


    return 0;
}