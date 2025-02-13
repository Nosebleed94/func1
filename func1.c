#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#include "func1.h"

#define SIZE 100

int experiment (double* radioactivity, double* time, double start_time, double end_time, double step){
    double const betta = 3;
    int n = 0;
    double helper = start_time;
    for (int i = 0; helper <= end_time; i++){
        time[i] = helper;
        n = i + 1;
        radioactivity[i] = exp(-time[i] / betta);
        helper = helper + step;
    } 
    return n;
}

