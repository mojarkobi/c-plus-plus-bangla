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