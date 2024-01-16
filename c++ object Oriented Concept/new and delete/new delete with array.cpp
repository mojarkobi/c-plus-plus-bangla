#include <iostream>

using namespace std;

int main()
{

    int *ptr;
    ptr = new int[5]; // 5 size ar arry dinymic vabe allocate korlam
    ptr[0] = 6;
    ptr[6] = 5;
    ptr[7] = 20;

    cout <<"ptr[0] : "<<ptr[0]<<endl; // show 0 offset element from ptr pointer array
    cout <<"ptr[1] : "<<ptr[1]<<endl; // show 0 offset/index element from ptr pointer array

    cout <<"ptr[2] : "<<ptr[2]<<endl;
    cout <<"ptr[3] : "<<ptr[3]<<endl;
    cout <<"ptr[4] : "<<ptr[4]<<endl;
    cout <<"ptr[5] : "<<ptr[5]<<endl;
    cout <<"ptr[6] : "<<ptr[6]<<endl;
    cout <<"ptr[7] : "<<ptr[7]<<endl;

    cout<<ptr; // show dynamically allocated array memory location
    delete[] ptr;
    return 0;
}