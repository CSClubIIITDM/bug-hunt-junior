// find the bug in the concept

#include<iostream>
using namespace std;

int i = 5;
int j;

int foo(int j) {
  for (i=0; i<j; i++){
    cout << i << " ";
  }
  return j;
}

void ineedj(int j) {
  cout << "j is " << j << "\n";
}

int main(){
  int j;
  j = foo(i);
  ineedj(j);
  return 0;
}
