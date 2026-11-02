
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
     
    if(a+b+c==180 &&a>0&&b>0&&c>0) //condition1
     {
       if(a<90&&b<90&&c<90)
         printf("Acute");
       else if(a==90||b==90||c==90)
         printf("Right");
       else
         printf("obtuse"); 
     }
     
    else    //condition2
     {          
      printf("invalid");
     }      
 return 0;
}