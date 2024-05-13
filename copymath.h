#ifndef __COPYMATH_H__
#define __COPYMATH_H__

#include <math.h>

// Vectors
typedef struct {
    float x;
    float y;
} CM_Vec2;

typedef struct {
    float x;
    float y;
    float z;
} CM_Vec3;

// Maybe cause add and sub and mult and stuff are so similar we can generalise with a macro?
// even if we can should we?
CM_Vec2 CM_vec2_add(CM_Vec2 a, CM_Vec2 b);  // adds vec2 (a + b)
CM_Vec2 CM_vec2_sub(CM_Vec2 a, CM_Vec2 b);  // subtracts vec2 (a - b)
float CM_vec2_mag(CM_Vec2 a);               // magnitude of a
float CM_vec2_dot(CM_Vec2 a, CM_Vec2 b);    // dot product of a and b (a . (dot) b)
float CM_vec2_ang(CM_Vec2 a, CM_Vec2 b);    // angle between a and b (theta) in radians

CM_Vec3 CM_vec3_sub(CM_Vec3 a, CM_Vec3 b);  // adds vec3 (a + b)
CM_Vec3 CM_vec3_sub(CM_Vec3 a, CM_Vec3 b);  // subtracts vec3 (a - b)
float CM_vec3_mag(CM_Vec3 a);               // magnitude of a
float CM_vec3_dot(CM_Vec3 a, CM_Vec3 b);    // dot product of a and b (a . (dot) b)

#ifdef COPYMATH_IMPLEMENTATION

CM_Vec2 CM_vec2_add(CM_Vec2 a, CM_Vec2 b) {
    return (CM_Vec2) {
        .x = a.x + b.x,
        .y = a.y + b.y
    };
}

CM_Vec2 CM_vec2_sub(CM_Vec2 a, CM_Vec2 b) {
    return (CM_Vec2) {
        .x = a.x - b.x,
        .y = a.y - b.y
    };
}

float CM_vec2_mag(CM_Vec2 a) {
    return sqrt(a.x*a.x + a.y*a.y);
}

float CM_vec2_dot(CM_Vec2 a, CM_Vec2 b) {
    return a.x*b.x + a.y*b.y;
}

float CM_vec2_angle(CM_Vec2 a, CM_Vec2 b) {
    return acos(CM_vec2_dot(a, b)/(CM_vec2_mag(a)*CM_vec2_mag(b)));
}

CM_Vec3 CM_vec3_add(CM_Vec3 a, CM_Vec3 b) {
    return (CM_Vec3) {
        .x = a.x + b.x,
        .y = a.y + b.y,
        .z = a.z + b.z
    };
}

CM_Vec3 CM_vec3_sub(CM_Vec3 a, CM_Vec3 b) {
    return (CM_Vec3) {
        .x = a.x - b.x,
        .y = a.y - b.y,
        .z = a.z - b.z
    };
}

float CM_vec3_mag(CM_Vec3 a) {
    return sqrt(a.x*a.x + a.y*a.y + a.z*a.z);
}

float CM_vec3_dot(CM_Vec3 a, CM_Vec3 b) {
    return a.x*b.x + a.y*b.y + a.z*b.z;
}

#endif // COPYMATH_IMPLEMENTATION

#endif // __COPY_MATH_H__
