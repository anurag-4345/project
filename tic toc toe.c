#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
void show()
{
    printf("\n\n\t\ttic toc toe\n");
    printf("\n\n\t\t----|----|----");
    printf("\n\n\t\t %c  |  %c  |  %c",a[0],a[1],a[2 ]);
    printf("\n\n\t\t----|----|----");
    printf("\n\n\t\t %c  | %c  |  %c",a[3],a[4],a[5]);
    printf("\n\n\t\t----|----|----");
    printf("\n\n\t\t %c  | %c  |  %c",a[6],a[7],a[8]);
    printf("\n\n\t\t----|----|----\n");
    printf("\n\nplayer 1 symbol  :O:");
    printf("\n\nplayer 2 symbol  :X:");
}

char tran(char f)
{
    char p;
if(f=='1')
{
  p='X';
  f='1';
  return p;
}
else{
    p='O';
    f='2';
    return p;
   }
}
char start()
{
    char pa,k;
    printf("\n\n\t\t********************************************************");
//    textcolor(RED+BLINK);
    printf("\n\n\t\t--Welcome to tic toc toe game please select the player --");
    //textcolor(GREEN+BLINK);
    printf("\n\n \t\t--enter will start this game : player 1[O] or player 2 [X]-- ");
    printf("\n\n\t\t********************************************************\n\n");
    printf("\n\n\t\tchoice :   ");
    fflush(stdin);
    scanf("%c",&pa);
    if(pa=='1')
    {
        k='X';
    }
 else
    {
        k='O';
    }
    fflush(stdin);
    system("cls");
    return k;
}
void check(char P,char S)
{
    int i;
    for(i=0;i<=8;i++)
    {
        if(a[i]==P)
        {
            a[i]=S;
        }
    }
}
void checkGame()
{
int k=1;
k++;
    if(k==9)
    {
        exit(0);
    }
        //player 1

        if(a[0]=='O'&&a[1]=='O'&&a[2]=='O')
        {
            system("cls");
                printf("player 1 in winner ");
            getch();
            exit(0);
        }
        if(a[4]=='O'&&a[5]=='O'&&a[3]=='O')
        {
            system("cls");
                printf("player 1 in winner ");
                getch();
                exit(0);
        }
        if(a[7]=='O'&&a[8]=='O'&&a[6]=='O')
        {
            system("cls");
                printf("player 1 in winner ");
                getch();
                exit(0);
        }
        if(a[0]=='O'&&a[4]=='O'&&a[8]=='O')
        {
            system("cls");
                printf("player 1 in winner ");
                getch();
                exit(0);
        }
        if(a[2]=='O'&& a[4]=='O'&& a[6]=='O')
        {
            system("cls");
                printf("player 1 in winner ");
                getch();
                exit(0);
        }
        if(a[0]=='O'&& a[3]=='O'&& a[6]=='O')
        {
            system("cls");
                printf("player 1 in winner ");
                getch();
                exit(0);
        }
        if(a[2]=='O'&&a[5]=='O'&&a[8]=='O')
        {
            system("cls");
                printf("player 1 in winner ");
                getch();
                exit(0);
        }
        if(a[1]=='O'&&a[4]=='O'&&a[7]=='O')
        {
            system("cls");
                printf("player 1 in winner ");
                getch();
                exit(0);
        }
       //player 2

        if(a[0]=='X'&&a[1]=='X'&&a[2]=='X')
        {
            system("cls");
                printf("player 2 in winner ");
                getch();
                exit(0);
        }
        if(a[4]=='X'&&a[5]=='X'&&a[3]=='X')
        {
            system("cls");
                printf("player 1 in winner ");
                getch();
                exit(0);
        }
        if(a[7]=='X'&&a[8]=='X'&&a[6]=='X')
        {
            system("cls");
                printf("player 1 in winner ");
                getch();
                exit(0);
        }
        if(a[0]=='X'&&a[4]=='X'&&a[8]=='X')
        {
            system("cls");
                printf("player 1 in winner ");
                getch();
                exit(0);
        }
        if(a[2]=='X'&& a[4]=='X'&& a[6]=='X')
        {
            system("cls");
                printf("player 1 in winner ");
                getch();
                exit(0);
        }
        if(a[0]=='X'&& a[3]=='X'&& a[6]=='X')
        {
            system("cls");
                printf("player 1 in winner ");
                getch();
                exit(0);
        }
        if(a[2]=='X'&&a[5]=='X'&&a[8]=='X')
        {
            system("cls");
                printf("player 1 in winner ");
                getch();
                exit(0);
        }
        if(a[1]=='X'&&a[4]=='X'&&a[7]=='X')
        {
            system("cls");
                printf("player 1 in winner ");
                getch();
                exit(0);

        }
}
void play( char p)
{
// char p=start();
    char s,f;
    f=tran(p);
    printf("\nenter the position :\n");
    fflush(stdin);
    scanf("%c",&s);
    check(s,f);
}
void main()
{
    int k;
    char p=start();
while(1)
{
show();
play(p);
if(p=='1')
    p='2';
    else
    p='1';
system("cls");
show();
checkGame();
system("cls");
if(k<=9)
{
    k++;
    if(k==9)
    {
        exit(0);
    }
}
}

}


