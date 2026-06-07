#include <stdarg.h>
#include <stdio.h>

typedef unsigned char bool;
#define false 0;
#define true 1;

//  Building Vectors
// Vectors have a dimetion(numer of elements) and a list of said elements

typedef struct vector
{
    unsigned int dim;
    float *element;
} vector;

extern const vector undef_vec ={0,NULL};

/**
 * 
 */
vector allocate(unsigned int dim);
/**
 * 
 */
vector constuctDefaultVector(unsigned int dim, float val);
/**
 * 
 */
vector constuctEmptyVector(unsigned int dim);
/**
 * 
 */
vector newVector(unsigned int numArgs, ...);
/**
 * 
 */

#define NUMARGS(...) \
    (sizeof((float[]){0.0f, __VA_ARGS__}) / sizeof(float) - 1)

