#include <iostream>
using namespace std;
int main(){

    int *ptr;

    ptr = new int(); // akhane ptr variable a new keyword diye integer type dinamic memory alocate kora holo

    *ptr = 6;

    cout<<*ptr; // ati ptr ar content or value return korbe
    cout<<"\n"; 
    cout<<ptr; // ati memory address show korbe karon dereference operator * ache tai

    delete ptr; // dynamic allocted memory delete hocche

    return 0;

}