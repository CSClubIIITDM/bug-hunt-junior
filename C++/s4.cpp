// random returns a random (positive) integer.
// Random returns a random integer in the range 0 to n-1.

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define Random(n) random()%n

long int random(){
    srand(time(0));
    return rand();
}


int main(void){
    int k, i=6, j=6;
    
    int val = Random(j-i+1);

    cout << val << endl;
}
