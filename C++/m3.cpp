// find the bug in the concept used in the code -- no fix

#include<iostream>
using namespace std;
  char string1[80];
char *initialize() {

//   string = "hello"
  char* ptr = &string1[0];
  return ptr;
}

void do_something_with(char* myval){
	cout << "the variable initialized is " << *myval << endl;
}

main() {
	cout << "enter value for myval" << endl;
  char *myval = initialize();
  cout<<"Address is "<<myval<<endl;
  cin >> *myval;
  cout << "Variable intialized" << endl;
  do_something_with(myval);
}
