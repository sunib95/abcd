#include <stdio.h>
#include <stdlib.h>


int main()
{
   int i;
    for(i=1; i<=100;i++ )
    if(i%2==0)
    printf("the even number is %d\n",i);
    else if(i%2==1)
    printf("the odd number is %d\n",i);
    else
        printf("shit");

   return 0;
}
