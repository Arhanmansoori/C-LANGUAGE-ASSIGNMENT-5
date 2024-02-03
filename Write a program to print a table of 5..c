#include<stdio.h>
#include<conio.h>
void main()
{

    int number,i=1;
    printf("enter the number for which you want to find the table : \n");
    scanf("%d",&number);
    while(i<=10)
    {
        printf("%d x %d = %d\n",number,i,number*i);
        i++;
    }
    getch();
}
