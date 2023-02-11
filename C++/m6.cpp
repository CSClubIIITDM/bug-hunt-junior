// the below code doesn't work for some values of s. find the bug

#include<iostream>
#include<string.h>

int main(){
    std :: string s = "HelloWorld";

    for(int i=0;i < s.length(); i++){
        s[i] = toupper(s[i]);
    }

    std::cout << s << std::endl;

    return 0;
}
