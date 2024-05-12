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
CM_Vec2 CM_vec2_add(CM_Vec2 a, CM_Vec2 b); // adds vec2 (a + b)
CM_Vec2 CM_vec2_sub(CM_Vec2 a, CM_Vec2 b); // subtracts vec2 (a - b)

CM_Vec3 CM_vec3_sub(CM_Vec3 a, CM_Vec3 b); // adds vec3 (a + b)
CM_Vec3 CM_vec3_sub(CM_Vec3 a, CM_Vec3 b); // subtracts vec3 (a - b)

#ifdef COPYMATH_IMPLEMENTATION

CM_Vec2 CM_vec2_add(CM_Vec2 a, CM_Vec2 b) {
    return (CM_Vec2) {
        .x = a.x + b.x,
        .y = a.y + b.y
    }
}

CM_Vec2 CM_vec2_sub(CM_Vec2 a, CM_Vec2 b) {
    return (CM_Vec2) {
        .x = a.x - b.x,
        .y = a.y - b.y
    }
}

CM_Vec3 CM_vec2_add(CM_Vec3 a, CM_Vec3 b) {
    return (CM_Vec2) {
        .x = a.x + b.x,
        .y = a.y + b.y
        .z = a.z + b.z
    }
}

CM_Vec3 CM_vec2_sub(CM_Vec3 a, CM_Vec3 b) {
    return (CM_Vec2) {
        .x = a.x - b.x,
        .y = a.y - b.y
        .z = a.z - b.z
    }
}

#endif // COPYMATH_IMPLEMENTATION
