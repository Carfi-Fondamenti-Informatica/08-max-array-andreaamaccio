#include <iostream>
#include "lib.h"

int maggiore(float vettore[], int n)
{
    int i=0;
    while(i<n){
    if (vettore[0]>vettore[i])
        i++;
    else{
        vettore[0]=vettore[i];
        i++;
    }
    }
    return vettore[0];
}
