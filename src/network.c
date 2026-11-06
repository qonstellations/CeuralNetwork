#include <stdlib.h>

#include "layer.h"

typedef struct{
    int depth;
    // an array of layer pointers
    layer_t **layers;
} network_t;

network_t* create_network(int depth, int *sizes){
    network_t *net = (network_t *) malloc(sizeof(network_t));
    
    net->depth = depth;
    net->layers = (layer_t **) malloc(sizeof(layer_t *) * depth);
    for(int i=0; i<depth; i++){
        net->layers[i] = create_layer(sizes[i]);
    }

    return net;
}