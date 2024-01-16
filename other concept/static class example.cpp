#include <iostream>
 
// Function declaration
void func(void); // function declare so that compiler can detect when this function define any where

static int count = 10;  /* Global variable */

// here main function start
main() {
   while(count--) {
      func();
   }
   
   return 0;
}

// here the Function definition of func function
void func( void ) {
   static int i = 5; // local static variable
   i++;
   std::cout << "i is " << i ;
   std::cout << " and count is " << count << std::endl;
}
