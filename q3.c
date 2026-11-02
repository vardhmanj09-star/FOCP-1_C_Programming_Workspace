
#include <stdio.h>
int main()
{
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
     
    if((n1>n2&&n1<n3)||(n1<n2&&n1>n3)) //condition1
      printf("n1 : %d",n1);
     
    else if((n2>n1&&n2<n3)||(n2<n1&&n2>n3))  //condition2
      printf("n2 :%d",n2);
    
    else           //condition3
      printf("n3 :%d",n3);
      
 return 0;
}