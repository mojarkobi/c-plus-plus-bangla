#include <iostream>

using namespace std;


class Rectangle{
    public :

    int height;
    int width;

    int area(); // here prototype declare only
};

// here implementation / defination of area methd
int Rectangle::area(){
    return height * width;
}

// here main function start
int main(){

   Rectangle obj;

   obj.height=20;
   obj.width=40;
   cout<<"the area is "<<obj.area()<<endl;
}

/*

*/