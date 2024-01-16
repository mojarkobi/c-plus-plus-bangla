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