#include <stdio.h>
int main()
{
    int n;//n=number taken as input from user
    scanf("%d",&n);
     
    if(n%2==0&&n%5==0) //condition1
      printf("Special");
     
    else if(n%2==0)  //condition2
      printf("Even");
    
    else if(n%5==0) //condition3
      printf("Five");
    
    else           //condition4
      printf("odd/other n.o");
      
 return 0;
}