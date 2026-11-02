#include <stdio.h> //calculator using switch case
int main()
{
    int p1,p2;  //p1=player1,p2=player2
    printf("player1 and player 2,Enter your choice(1-rock,2-paper,3-scissor): ");
    scanf("%d%d",&p1,&p2);
    
    switch (p1)
    {  
    case 1:
        
         switch(p2)
         {  
         case 1:
            printf("Draw\n");
            break;
         case 2:
            printf("Player2 wins\n");
            break;
         case 3:
            printf("Player1 wins\n");
            break;
         }
        break;
    
    
    case 2:
        
         switch(p2)
         {
            case 1:
            printf("Player1 wins\n");
            break;
            case 2:
            printf("Draw\n");
            break;
            case 3:
            printf("Player2 wins\n");
            break; 
         }
        break;

    case 3:
        
         switch(p2)
         {
            case 1:
            printf("Player1 wins\n");
            break;
            case 2:
            printf("player2 wins\n");
            break;
            case 3:
            printf("Draw\n");
            break; 
         }
         break;  
    
  
    defualt:
     printf("invalid choice");
    }  
 return 0;
}