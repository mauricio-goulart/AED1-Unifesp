#include "float_vector.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>;

typedef struct float_vector
{
    int capacity; //maximum mumber of elements
    int size; //number of elements currently stored
    float *data; //float vector
}FloatVector;

bool isFull(const FloatVector *vec)
{
    return vec->size == vec->capacity;
} 


FloatVector *create(int capacity)
{
    FloatVector *vec = (FloatVector *)calloc(capacity, sizeof(FloatVector));
    vec->capacity = capacity;
    vec->size = 0;
    vec->data = (float *)calloc(capacity,sizeof(float));

    return vec;
}


void destroy(FloatVector **vec)
{
    free((*vec)->data);
    free(*vec);
    *vec = NULL;
}


void append(FloatVector *vec, float val)
{
    if (isFull(vec))
    {
        printf("ERROR in 'append'\nVector is full\n");
        exit(EXIT_FAILURE);
    }

    vec->data[vec->size] = val;
    vec->size++;
    
}

void print(const FloatVector *vec)
{
    printf("-------Info_Vector------\n");
    printf("Capacity = [%d]\n", vec->capacity);
    printf("Size = [%d]\n", vec->size);
    printf("------------------------\n");
    printf("Info Vec: \n");


    for (int c = 0; c < vec->size; c++)
    {
        printf("V[%d] = [%.2f]\n", c, vec->data[c]);
    }
    
}

int size(const FloatVector *vec)
{
    return vec->size;
}


int capacity(const FloatVector *vec)
{
    return vec->capacity;
}


float at(const FloatVector *vec, int index)
{
    if (index < 0 || index >= vec->size)
    {
        printf("ERROR in 'at'\nThe vector has fewer elements than the index\n");
        exit(EXIT_FAILURE);
    }

    return vec->data[index];  
    
}


float get(const FloatVector *vec, int index)
{
    return vec->data[index];
}

void set(FloatVector *vec, int index, float val)
{
    if (index < 0 || index >= vec->size)
    {
        printf("ERROR in 'at'\nThe vector has fewer elements than the index\n");
        exit(EXIT_FAILURE);
    }

    vec->data[index] = val;
    
}

void lemove(FloatVector *vec, int index)
{
    if (index < 0 || index >= vec->size)
    {
        printf("ERROR in 'remove'\n");
    }

    vec->data[index] = vec->data[vec->size-1];

    vec->size--;
    
    
}

void erase(FloatVector *vec)
{
    for (int c = 0; c < vec->size; c++)
    {
        vec->data[c] = 0;
    }
    
}

float *clone(FloatVector *vec)
{
    float *new = (float *)calloc(vec->size,sizeof(float));

    for (int c =0; c < vec->size; c++)
    {
        new[c] = vec->data[c];
    }
    
    return new;
}

