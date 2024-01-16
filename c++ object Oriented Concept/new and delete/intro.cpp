#include <iostream>

int main(){

    int *ptr;

    int a = 5;

    ptr = &a;

    std::cout<<ptr; // show memory adress of ptr variable which is also same for variable 'a'

    std::cout<<"\n";

    std::cout<<*ptr; // show output 5 from ptr variable 

    return 0;
}