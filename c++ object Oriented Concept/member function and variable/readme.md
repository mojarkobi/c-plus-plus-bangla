# membe variable and function indepth

class এর ভেতরে method and variable ডিক্লোয়ার করা হলে,
সেই ক্লাস এর মেম্বার ফাংশন এবং মেম্বার ভ্যারিয়েবল বলে।

```cpp

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
```

উপরের কোডে আমি সরাসরি Rectangle ক্লাসের ভেতর area() মেথড এর defination না লিখে
শুধু প্রটোটাইপ ডিক্লেয়ারেশন করেছি যেমন  int area(); এবং এটার defination ক্লাসের বাহিরে
করেছি যেমন 

```cpp
int Rectangle::area(){
    return height * width;
}
```

কারন ক্লাসের ভতরে যে মেথড থাকবে তা ক্লাসের  অবজেক্ট বানালে  সাথে সাথে স্টোরেজ দখল করে রাখবে

কিন্তু প্রটোটাই ডিক্লেয়ার করার পর বাহিরে এটার defination লিখলে, তখন মেথড কল হওয়ার সময়ই জায়গা দখল করবে।

আরেকটা বিষয় হলো যখন ক্লাসে অনেক বেশি মেথড প্রপার্টি লেখা লাগবে তখন কোডবেজ টা ছোট আর সহজ রাখতেও এই টেকনিকটা ফলো করা হয়।

ক্লাসের বাহিরে defination লেখার নিয়ম হলো return type তারপর className তারপর scope resulation operator :: methodName(){}

যেমন

```cpp
int Rectangle::area(){
    return height * width;
}
```

## inline function why use inline keyword before method defination

উপরের কোডে ফাংশন প্রটোটাইপ ডিক্লেয়ার করার পর, ক্লাসের বাহিরে ফাংশন ডেফিনেশন লেখার কারনে
এটির অবজেক্ট বানানোর সাথে সাথে মেমোরীতে জায়গা খরচ করবেনা যতখন না সেটাকে কল করা হয়।

কিন্তু এটার কারনে প্রোগ্রাম চলাকালিন সময়ে খুজতে হবে কোথায় ফাংশন ডেফিনেশন লেখা আছে।
সেজন্য কিছুটা স্লো হয়ে যায় প্রোগ্রাম এক্সিকিউশন
কিন্তু যদি আমরা function এর সামনে inline কিওয়ার্ড লিখে দিয়ে এটাকে inline function করে দেই তারমানে,
এটা সরাসরি function declaration and defination একসাথে লিখলে যেমন  করে স্পিড দেয় তেমন স্পিড দিবে।
function declaration and defination একসাথে লিখাটাকে auto inline বলে।

তবে আমর কিন্তু প্রোগ্রাম বড় হয়ে গেলে আর ফাংশন বেশি হয়ে গেলে inline টা ঠিকঠাক কাজ করবে না।

**নিচে inline function এর উদাহরন দেয়া হলো।**

```cpp
#include <iostream>

using namespace std;


class Rectangle{
    public :

    int height;
    int width;

    int area(); // here prototype declare only
};

// here implementation / defination of area methd
inline int Rectangle::area(){
    return height * width;
}

// here main function start
int main(){

   Rectangle obj;

   obj.height=20;
   obj.width=40;
   cout<<"the area is "<<obj.area()<<endl;
}

```
