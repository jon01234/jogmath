#ifndef JOGMATH_H
#define JOGMATH_H

#include <stdlib.h>

#define JOGMATH_FUNCTION static inline

//* VECTORS
/**
 * @brief A union that contains two float values
 *
 */
typedef union vec2
{
    struct
    {
        float x, y;
    };
    struct
    {
        float u, v;
    };
} vec2;

// All x and y can be u or v
JOGMATH_FUNCTION vec2 *vec2_create(float x, float y)
{
    vec2 *v = (vec2 *)calloc(1, sizeof(vec2));

    v->x = x;
    v->y = y;

    return v;
}

JOGMATH_FUNCTION void vec2_add(vec2 *a, vec2 *other)
{
    a->x += other->x;
    a->y += other->y;
}

JOGMATH_FUNCTION void vec2_sub(vec2 *a, vec2 *other)
{
    a->x -= other->x;
    a->y -= other->y;
}

JOGMATH_FUNCTION void vec2_mult(vec2 *a, vec2 *other)
{
    a->x *= other->x;
    a->y *= other->y;
}

JOGMATH_FUNCTION void vec2_div(vec2 *a, vec2 *other)
{
    a->x /= other->x;
    a->y /= other->y;
}

/**
 * @brief Union with three values
 *
 */
typedef union vec3
{
    struct
    {
        float x, y, z;
    };
    struct
    {
        float r, g, b;
    };
} vec3;

// x, y, z can be r, g, b
JOGMATH_FUNCTION vec3 *vec3_create(float x, float y, float z)
{
    vec3 *v = (vec3 *)calloc(1, sizeof(vec3));

    v->x = x;
    v->y = y;
    v->z = z;

    return v;
}

JOGMATH_FUNCTION void vec3_add(vec3 *a, vec3 *other)
{
    a->x += other->x;
    a->y += other->y;
    a->z += other->z;
}

JOGMATH_FUNCTION void vec3_sub(vec3 *a, vec3 *other)
{
    a->x -= other->x;
    a->y -= other->y;
    a->z -= other->z;
}

JOGMATH_FUNCTION void vec3_mult(vec3 *a, vec3 *other)
{
    a->x *= other->x;
    a->y *= other->y;
    a->z *= other->z;
}

JOGMATH_FUNCTION void vec3_div(vec3 *a, vec3 *other)
{
    a->x /= other->x;
    a->y /= other->y;
    a->z /= other->z;
}

/**
 * @brief Union with four values
 *
 */
typedef union vec4
{
    struct
    {
        float x, y, z, w;
    };
    struct
    {
        float r, g, b, a;
    };
} vec4;

JOGMATH_FUNCTION vec4 *vec4_create(float x, float y, float z, float w)
{
    vec4 *v = (vec4 *)calloc(1, sizeof(vec4));

    v->x = x;
    v->y = y;
    v->z = z;
    v->w = w;

    return v;
}

JOGMATH_FUNCTION void vec4_add(vec4 *a, vec4 *other)
{
    a->x += other->x;
    a->y += other->y;
    a->z += other->z;
    a->w += other->w;
}

JOGMATH_FUNCTION void vec4_sub(vec4 *a, vec4 *other)
{
    a->x -= other->x;
    a->y -= other->y;
    a->z -= other->z;
    a->w -= other->w;
}

JOGMATH_FUNCTION void vec4_mult(vec4 *a, vec4 *other)
{
    a->x *= other->x;
    a->y *= other->y;
    a->z *= other->z;
    a->w *= other->w;
}

JOGMATH_FUNCTION void vec4_div(vec4 *a, vec4 *other)
{
    a->x /= other->x;
    a->y /= other->y;
    a->z /= other->z;
    a->w /= other->w;
}

#endif // JOGMATH_H