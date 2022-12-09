#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    int dimensione;
    cin>>dimensione;
    float array[dimensione];
    for (int i=0; i<dimensione; i++){
        cin>>array[i];
    }
    cout<<maggiore(array, dimensione);
    return 0;
}
