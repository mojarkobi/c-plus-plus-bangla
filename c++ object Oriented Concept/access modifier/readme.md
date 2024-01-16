# access modifier indepth tutorial

যখন ক্লাসের প্রোপার্টি মেথড এর সামনে দিয়ে কোনো নির্দিষ্ট access modifier উল্লেখ না থাকে
তখন এটি default হিসেবে private থাকে।

আবার যদি  একবার এক্সেস মডিফাইয়ার উল্লেখ করে তখন নিচে যত প্রোপার্টি মেথড থাকবে সব এটাই প্রযোয্য হবে
যদিনা এদের সামনে নতুন কোনো মডিফাইয়ার উল্লেখ করা হয়।
 **নিচে উদাহরন দিয়ে দেখানো হলো**


```C++

#include <iostream>
#include <string>

class ParentClass{
public: std::string name; // ai line a public access modifier dilam
// akhan thek jotokhon porjonto new modifier declare na hobe ati apply hobe

int age;  // atio public karon upore public set korar por akhane onno kono modifier set korini

private:
    int sallery = 20000;

  // here this method take value from outside the class
public :
       void setInfo(std::string name,int a){
      this->name = name; //  akhane this use korate name parameter and class property same holeo conflict hoyni
      age = a; // akhane this use an korar karone parameter a and class property age alada nam use kora laglo
  }


};


int main(){
    ParentClass obj;

    obj.setInfo("ashik",26);

    std::cout<<"value of obj object name is "<<obj.name<<" and age is"<<obj.age;

    return 0;
}

```

উপরের কোডে  int age; এর মডিফাইয়ার হবে এর পূর্বে যে access modifier  উল্লেখ করা হয়েছে
সেটিই  এটির উপর প্রয়োগ হবে যেহেতু এটির সামনে কোনো মডিফাইয়ার উল্লেখ করা হয়নি।
