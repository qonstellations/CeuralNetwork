#pragma once

typedef struct{
    int size;
    double *biases;
    double *weights;
} layer_t;

layer_t* create_layer(int size);
