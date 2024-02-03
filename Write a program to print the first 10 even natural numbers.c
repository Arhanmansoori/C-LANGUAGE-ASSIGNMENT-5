#include<stdio.h>
#include<conio.h>
void main()
{

    int number,i;
    printf("enter the number");
    scanf("%d",&number);
    while(i<=number)
    {

        if(i%2==0)
        {

            printf("%d\n",i);
        }
        i++;
    }
    getch();
}
