#include <stdlib.h>

#include "bridge.h"

typedef struct{
    int depth;
    bridge_t **bridges;
} network_t;

network_t* create_network(int depth, int *layer_sizes){
    network_t *net = (network_t *) malloc(sizeof(network_t));
    
    net->depth = depth;
    net->bridges = (bridge_t **) malloc(sizeof(bridge_t *) * depth-1);
    for(int i=0; i<depth-1; i++){
        net->bridges[i] = (bridge_t *) malloc(sizeof(bridge_t));
    }

    for(int i=0; i<depth-1; i++){
        net->bridges[i] = create_bridge(layer_sizes[i], layer_sizes[i+1]);
    }

    return net;
}