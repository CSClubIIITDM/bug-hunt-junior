#include<iostream>
using namespace std;


int main(void){
    string string1 = "Hello";
    string string2 = "Horld";
    for(int i=0;i<string1.size();i++)
    {
        string1[i] = tolower(string1[i]);
    }
    for(int i=0;i<string2.size();i++)
    {
        string2[i] = tolower(string2[i]);
    }

    if (string1 == string2)
    cout << "Equal";
    else
    cout << "Not Equal";
}
