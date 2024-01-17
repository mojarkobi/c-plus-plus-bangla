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