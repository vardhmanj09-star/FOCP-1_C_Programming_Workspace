

#include <stdio.h> //calculator using switch case
int main()
{
    int n1,n2;  //n1=input1,n2=input2
    scanf("%d%d",&n1,&n2);
    char choice;
    printf("Enter the opeations :+,-,*,/,%%");
    scanf(" %c",&choice);
     
    switch (choice)
 {  
    case '+':
        printf("sum =%d",n1+n2);
        break;
    case '-':
        printf("diff =%d",n1-n2);
        break;
    case '*':
        printf("product =%d",n1*n2);
        break;
    case '/':
        printf("div =%d",n1/n2);
        break;
    case '%':
        printf("remainder =%d",n1%n2);
        break;
    defualt :
        printf("invalid choice");
    
  }
      
 return 0;
}
