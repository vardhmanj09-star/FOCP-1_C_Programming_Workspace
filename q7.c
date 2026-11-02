#include <stdio.h>
int main()
{
    int pin,amnt,balance; //p=pin ,amnt=amount ,balance
    scanf("%d%d%d",&pin,&amnt,&balance);
     
    if(pin==1234&&amnt%100==0) //condition1
     {
       if(amnt<=balance&&amnt>0)
         printf("Withdrawal Successful\n ");
       
       else
         printf("Invalid pin  \nInvalid amount"); 
     }
     
    else    //condition2
     {          
      printf("Invalid balance\n");
     }      
 return 0;
}