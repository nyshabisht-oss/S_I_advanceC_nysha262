#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i=0;
    char name[100];
    static int win=0;
    static int drawn=0;
    static int loose=0;
    int n;
    printf("PAPER=0,ROCK=1,SCISSOR=2\n");

    printf("ENTER THE NAME OF YOU\n");
    scanf("%s",&name);
    while(i<3)
    {   
    srand(time(NULL));
    int s = rand()%3;
    printf("%s TURN\n", name);
    scanf("%d", &n);
    printf("%s:%d\n", name, n);
    printf("PLAYER 2 TURN\n");
    printf("COMPUTER:%d\n", s);

    if (n == s)
    {
        printf("MATCH DRAWN & GET 0 POINT\n");
        drawn++;

       
    }
    else if (n == 0 && s == 1 || n == 1 && s == 2 || n == 2 && s == 0)
    {
        printf("%s WIN THE GAME AND GET 1 POINT\n", name );
        win++;
    }
    else
    {
        printf("COMPUTER WIN THE GAME AND GET 1 point\n");
        loose++;
    }
    i++;
    }
    printf("\n\n");
    
    if (win==1 && drawn ==1 && loose==1 || drawn==3 )
    {
        printf("THIS GAME IS DRAWN SO PLEASE TRY AGAIN  ");
    }
    else if (win==2 || win==1 && drawn==2)
    {
        printf("CONGRATULATION, YOU WON HIS GAME WITH TOTAL POINT %d ",win);
    }
    else
    {
        printf("OOPS, YOU LOOSE THIS GAME PLEASE TRY AGAIN\n");
    }
    
    
    
    return 0;
}