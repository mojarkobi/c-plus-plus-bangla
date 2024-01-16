# dinamically memory allocate by new and deallocate by delete keyword

```cpp
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
```

Your above code has a couple of issues:

1. You allocated memory for an array of 5 integers with `new int[5]`, but you're trying to access elements beyond the allocated size. The valid indices for this array would be from 0 to 4.

2. You're accessing `ptr[6]` and `ptr[7]`, which are outside the bounds of the allocated array. This can lead to undefined behavior and memory issues.

Here's the corrected code:

```cpp
#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    ptr = new int[5]; // Allocating memory for 5 integers it means this array offset size 0 - 4 

    ptr[0] = 6;
    // ptr[1] through ptr[4] can be safely accessed
    // Attempting to access ptr[5], ptr[6], and ptr[7] is beyond the allocated size so unexpected result shown

    cout <<"ptr[0] : "<<ptr[0]<<endl;
    cout <<"ptr[1] : "<<ptr[1]<<endl;
    cout <<"ptr[2] : "<<ptr[2]<<endl;
    cout <<"ptr[3] : "<<ptr[3]<<endl;
    cout <<"ptr[4] : "<<ptr[4]<<endl;

    // Don't attempt to access ptr[5], ptr[6], ptr[7]

    cout << ptr; // Showing dynamically allocated array memory location

    delete[] ptr; // Deallocating the dynamically allocated memory

    return 0;
}

```

This code accesses only the valid indices within the allocated array bounds and frees the dynamically allocated memory using `delete[] ptr` to avoid memory leaks.

## how object can be assign to another object like a variable

```cpp

#include <iostream>

using namespace std;

class Rectangle{
    
    int weight;
    int height;

    public: 
      void set(int a, int b){
        weight = a;
        height = b;
      }
      int area(){
        return height * weight;
      }
};

// here main function start
int main(){

    Rectangle obj1,obj2,obj3;
    obj1.set(6,5);
    obj2.set(12,15);

    obj3 = obj1; // set obj3 value from copy obj1
    obj2 = obj1; // set obj2 value from coping obj1
   

    cout<<"obj1.area() :"<<obj1.area()<<endl;
    cout<<"obj2.area() :"<<obj2.area()<<endl;
    cout<<"obj3.area() :"<<obj3.area()<<endl;


    return 0;
}

```

উপরের কোডে obj1, obj2, obj3 একই ক্লাসের অবজেক্ট, শুধুমাত্র সেজন্যই একটি অবজেক্ট অন্য অবজেক্টে এসাইন করা গেলো।
