#include <stdlib.h>
#include "utils.h"

typedef struct{
    int size;
    double *biases;
    double *weights;
} layer_t;

layer_t* create_layer(int size){
    layer_t *layer = (layer_t *) malloc(sizeof(layer_t));

    layer->size = size;
    layer->biases = (double *) malloc(sizeof(double) * size);
    layer->weights = (double *) malloc(sizeof(double) * size);

    for(int i=0; i<size; i++){
        layer->biases[i] = 0;
        layer->weights[i] = rand_double(0, 1);
    }

    return layer;
}