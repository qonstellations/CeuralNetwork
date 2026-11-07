#include <stdio.h>

#include "utils.h"
#include "network.h"

int main(){
    init_rand();

    int nodes_per_layer[] = {2, 4, 1};

    create_network(sizeof(nodes_per_layer)/sizeof(nodes_per_layer[0]), nodes_per_layer);
    
    return 0;
}