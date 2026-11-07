#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

typedef struct{
    int n;
    double *biases;
} layer_t;

typedef struct{
    layer_t *left;
    layer_t *right;
    double **weights;
} bridge_t;

layer_t* create_layer(int n){
    layer_t *layer = (layer_t *) malloc(sizeof(layer_t));

    layer->n = n;
    layer->biases = (double *) malloc(sizeof(double) * n);

    for(int i=0; i<n; i++){
        layer->biases[i] = rand_double(0, 0.1);
    }

    return layer;
}

bridge_t* create_bridge(int left_size, int right_size){
    bridge_t *b = (bridge_t *) malloc(sizeof(bridge_t));

    b->left = create_layer(left_size);
    b->right = create_layer(right_size);
    b->weights = (double **) malloc(sizeof(double *) * b->left->n);
    for(int i=0; i<b->left->n; i++){
        b->weights[i] = (double *) malloc(sizeof(double) * b->right->n);
    }

    for(int i=0; i<b->left->n; i++){
        for(int j=0; j<b->right->n; j++){
            b->weights[i][j] = rand_double(0, 1);
        }
    }

    return b;
}