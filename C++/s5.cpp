#include<iostream>
using namespace std;


int main(void){
    string string1 = "Hello";
    string string2 = "Horld";
    int i, flag=1;
	for(i=0;i<5;i++)
	{
    if (string1[i] != string2[i])
		flag=0;
}
	if(flag==0)
	{
		cout<<"Not eual";
	}
	else
	cout<<"Eual";
}
