//
// Created by maffey on 31.10.2019.
//

#include "Cuboid.h"
#include <iostream>

using namespace std;

float Cuboid::calculateVolume() {
    cout << "The volume is: " << length * width * height << endl;
    return length * width * height;
}

Cuboid::Cuboid(float length, float width, float height) {
    if (length > 0) {
        Cuboid::length = length;
    }
    if (width > 0) {
        Cuboid::width = width;
    }
    if (height > 0) {
        Cuboid::height = height;
    }

}
