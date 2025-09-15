#include <stdio.h>

int main() 
{ 
    int a=0;
    int b=2;
    int even[10];
    for(a=0;a<=9;a++){
        even[a]=b;
        b+=2;
        printf("value of even[%d] = %d\n",a,b);
 }
}