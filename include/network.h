#pragma once

#include "bridge.h"

typedef struct{
    int depth;
    bridge_t **bridges;
} network_t;

network_t* create_network(int depth, int *layer_sizes);
