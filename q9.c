
#include <stdio.h>
int main()
{
    int marks,attendance;//marks,attendance taken as input from user
    scanf("%d%d",&marks,&attendance);
     
    if(marks>=90&&attendance>=70) //condition1
      printf("Special Scholarship");
     
    else if(marks>=75&&attendance>=75)  //condition2
      printf("Eligible");
    
    else           //condition3
      printf("Not Eligible");
      
 return 0;
}
