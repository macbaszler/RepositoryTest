#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a;
    int s;
    printf("Enter a number:");
    scanf("%d",&a);
    
s=a;
do {
    a = a-1;
    s = a+s;
     
}
while(a>0);


    printf("\nS= : %d\n",s);
  return EXIT_SUCCESS;
}



//for (i = 0; i < a; ++i) {
   //     i= i+1;
    //}
//puts("Hello, world!");
