#include <random>
#include <ctime>

extern bool FL_RANGECALCULATED;

int rng_salvo(){
    int generated;
    srand(time(NULL));
    generated = rand()%10+1;
    return generated;
}