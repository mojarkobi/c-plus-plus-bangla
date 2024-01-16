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