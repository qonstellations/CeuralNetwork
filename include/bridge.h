#pragma once

typedef struct{
    int n;
    double *biases;
} layer_t;

typedef struct{
    layer_t *left;
    layer_t *right;
    double **weights;
} bridge_t;

layer_t* create_layer(int n);
bridge_t* create_bridge(int left_size, int right_size);
