#include <_stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    // using size for input params (not including bias)
    int size;
    double bias;
    double *weights;
} neuron_t;

double rand_double(double min, double max){
    return min + ((double) rand() / RAND_MAX) * (max-min);
}

void show_neuron(neuron_t *n, char *name){
    printf("\nneuron (%s) : ", name);
    printf("\nweights : ");
    for(int i=0; i<n->size; i++){
        printf("\n%.20lf ", n->weights[i]);
    }
    printf("\nbias : \n%.20lf\n", n->bias);
}

neuron_t* create_neuron(int size){
    neuron_t *n = (neuron_t *) malloc(sizeof(neuron_t));
    
    n->size = size;
    n->bias = rand_double(0, 1);
    n->weights = (double *) malloc(sizeof(double) * size);

    for(int i=0; i<size; i++){
        n->weights[i] = rand_double(0, 1);
    }

    return n;
}

int main(){
    srand(time(NULL));

    neuron_t *n = create_neuron(4);
    show_neuron(n, "dummy");

    return 0;
}