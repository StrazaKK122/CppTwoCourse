//
// Created by maffey on 21.10.2019.
//

#include "Vector.h"

Vector::Vector(int pointA[2], int pointB[2]) {
    Vector::object_id++;
    Vector::point_a[0] = pointA[0];
    Vector::point_a[1] = pointA[1];
    Vector::point_b[0] = pointB[0];
    Vector::point_b[1] = pointB[1];
}

// TODO: dodaj dekonstruktor

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

int Vector::get_count() {
    return Vector::object_id;
}
