#include<iostream>
#include<string.h>
using namespace std;


int main(){
    char *string1 = "Hello";
    char *string2 = "Horld";

    if (strcmp(string1,string2)==0)
    cout << "Equal";
    else
    cout << "Not Equal";
}
