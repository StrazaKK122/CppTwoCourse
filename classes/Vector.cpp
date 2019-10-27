//
// Created by maffey on 21.10.2019.
//

#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector(int pointA[2], int pointB[2]) {
    cout << "Creating a Vector.\n";
    // Vector::object_id++;
    Vector::point_a[0] = pointA[0];
    Vector::point_a[1] = pointA[1];
    Vector::point_b[0] = pointB[0];
    Vector::point_b[1] = pointB[1];
}

Vector::~Vector() {
    std::cout << "Destroyed the Vector.\n";
}

// TODO: Change return values.
int Vector::add(Vector vector) {
    Vector::point_a[0] += vector.point_a[0];
    Vector::point_a[1] += vector.point_a[1];
    Vector::point_b[0] += vector.point_b[0];
    Vector::point_b[1] += vector.point_b[1];
    return 0;
}

int Vector::subtract(Vector vector) {
    Vector::point_a[0] -= vector.point_a[0];
    Vector::point_a[1] -= vector.point_a[1];
    Vector::point_b[0] -= vector.point_b[0];
    Vector::point_b[1] -= vector.point_b[1];
    return 0;
}

int Vector::multiply(Vector vector) {
    Vector::point_a[0] *= vector.point_a[0];
    Vector::point_a[1] *= vector.point_a[1];
    Vector::point_b[0] *= vector.point_b[0];
    Vector::point_b[1] *= vector.point_b[1];
    return 0;
}

// TODO: finish show.

void Vector::show() {
    cout << " == Vector Data: == ";
    cout << "Point A\n";
    cout << "X: " << Vector::point_a[0] << endl;
    cout << "Y: " << Vector::point_a[1] << endl;
    cout << "Point B\n";
    cout << "X: " << Vector::point_b[0] << endl;
    cout << "Y: " << Vector::point_b[1] << endl;
}



