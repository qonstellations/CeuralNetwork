#include <stdlib.h>
#include <time.h>

void init_rand(){
    srand(time(NULL));
}

double rand_double(double min, double max){
    return min + ((double) rand() / RAND_MAX) * (max-min);
}
