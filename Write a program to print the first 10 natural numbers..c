#include<stdio.h>
#include<conio.h>
void main()
{

    int number,i=1;
    printf("enter the number");
    scanf("%d",&number);
    while(i<=number)
    {

        printf("%d",i);
        i++;
    }
    getch();
}
