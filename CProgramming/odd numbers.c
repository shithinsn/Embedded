#include <stdio.h>

int main() 
{ 
    int a=0;
    int b=-1;
    int odd[10];
    for(a=-1;a<=9;a++){
        odd[a]=b;
        b+=2;
        printf("value of odd[%d] = %d\n",a,b);
 }
}