# object pointer in-depth

```cpp

#include<iostream>

using namespace std;

class Rectangle{

    public: 
    int height;
    int width;

    void set(int h, int w){
        height = h;
        width  = w;
    }

    int area(){
        return height * width;
    }
};

int main(){
    
    Rectangle obj;
    Rectangle *p;
    p = &obj;

    p->set(5,5);

    cout<<"the value: "<<p->area()<<endl;

    obj.set(6,6);

    cout<<"the value: "<<p->area()<<endl;

    return 0;

}

```

উপরের কোডে `Rectangle *p;` মানে হলো, p পয়েন্টার ভ্যারিয়েবল তৈরী করা হয়েছে Rectangle টাইপের
`Rectangle` ক্লাসকেই  এটার টাইপ বলে গন্য করা হয়েছে এখানে।

`p = &obj;` মানে হলো obj অবজেক্ট এর এড্রেস p  পয়েন্টার ভ্যারিয়েবলে এসাইন করে দেয়া হলো।

`obj.set(6,6);` মানে হলো set() মেথডকে অবজেক্ট দিয়ে এক্সেস করা হয়েছে।
`p->set(5,5);` মানে হলো set() মেথডকে পয়েন্টার ব্যবহার করে এক্সেস করা হয়েছে। যেহেতু এটাতে -> ব্যবহার করা হয়েছে।

## make array of object

```cpp

#include <iostream>

using namespace std;

class Rectangle
{

    int weight;
    int height;

public:
    void set(int a, int b)
    {
        weight = a;
        height = b;
    }
    int area()
    {
        return height * weight;
    }
};

// here main function start
int main()
{

    Rectangle obj[5]; // create 5 object size array for Rectangle class

    obj[0].set(2, 5); // 0 index object set function
    obj[1].set(3, 6);
    obj[2].set(4, 7);
    obj[3].set(5, 8);
    obj[4].set(6, 9);

    cout << "obj[0].area() :" << obj[0].area() << endl; // show 0 index object area
    cout << "obj[1].area() :" << obj[1].area() << endl; // same
    cout << "obj[2].area() :" << obj[2].area() << endl; // same
    cout << "obj[3].area() :" << obj[3].area() << endl; // same
    cout << "obj[4].area() :" << obj[4].area() << endl;

    return 0;
}

```

## array of object part 2

```cpp

#include <iostream>

using namespace std;

class Rectangle
{

    int weight;
    int height;

public:
    Rectangle(int a) // this is constructor function
    {
        weight = a;
        height = a;
    }

    int area()
    {
        return height * weight;
    }
};

// here main function start
int main()
{

    // single parameter constructor thakle kivabe kora lage ta dekhanu holo

    Rectangle obj[5] = {2,3,5,8,4}; // create 5 object size array for Rectangle class with constructor value assign

    cout << "obj[0].area() :" << obj[0].area() << endl; // show 0 index object area
    cout << "obj[1].area() :" << obj[1].area() << endl; // same
    cout << "obj[2].area() :" << obj[2].area() << endl; // same
    cout << "obj[3].area() :" << obj[3].area() << endl; // same
    cout << "obj[4].area() :" << obj[4].area() << endl;

    return 0;
}

```

## array of object part3

```cpp
#include <iostream>

using namespace std;

class Rectangle
{

    int weight;
    int height;

public:
    Rectangle(int a, int b) // this is constructor function
    {
        weight = a;
        height = b;
    }

    int area()
    {
        return height * weight;
    }
};

// here main function start
int main()
{

    // multiple parameter constructor thakle kivabe kora lage ta dekhanu holo

    Rectangle obj[5] = {Rectangle(3, 5), Rectangle(4, 6), Rectangle(5, 6), Rectangle(6, 7), Rectangle(7, 8)}; // create 5 object size array for Rectangle class with multiple constructor value assign

    cout << "obj[0].area() :" << obj[0].area() << endl; // show 0 index object area
    cout << "obj[1].area() :" << obj[1].area() << endl; // same
    cout << "obj[2].area() :" << obj[2].area() << endl; // same
    cout << "obj[3].area() :" << obj[3].area() << endl; // same
    cout << "obj[4].area() :" << obj[4].area() << endl; // same

    return 0;
}

```
