#pragma once

#include "layer.h"

typedef struct{
    int depth;
    layer_t **layers;
} network_t;

network_t* create_network(int depth, int *sizes);
