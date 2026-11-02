
#include <stdio.h> //Day Number → Working Day / Weekends using switch case
int main()
{
    int day;
    printf("Enter day :1,2,3,4,5,6,7 :");
    scanf("%d",&day);

     
    switch (day)
 {  
    case 1:
        printf("Monday \nWORKING DAY");
        break;
    case 2:
        printf("Tuesday \nWORKING DAY");
        break;
    case 3:
        printf("Wednesday \nWORKING DAY");
        break;
    case 4:
        printf("Thursday \nWORKING DAY");
        break;
    case 5:
        printf("Friday \nWORKING DAY");
        break;
    case 6:
        printf("Saturday \nWEEKEND");
        break;
    case 7:
        printf("Sunday \nWEEKEND");
        break;
    defualt :
        printf("invalid Day");
    
  }
      
 return 0;
}
