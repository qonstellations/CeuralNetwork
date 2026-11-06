#include <stdio.h>

#include "utils.h"
#include "network.h"

int main(){
    init_rand();

    int sizes[] = {2, 4, 1};

    create_network(3, sizes);
    
    return 0;
}