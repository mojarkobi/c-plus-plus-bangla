#include "stdio.h"

int main(){

    int x = 5;
    int *j;
    j = &x;
    printf("the x = %d *&x = %d  *j = %d",x,*&x,*j);
    return 0; 
}



