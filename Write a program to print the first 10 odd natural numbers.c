#include<stdio.h>
#include<conio.h>
void main()
{

    int i=1,number;
    printf("enter the number ");
    scanf("%d",&number);
    while(i<=number)
    {
      if(i%2!=0)
      {


       printf("%d\n",i);

      }
      i++;
    }
    getch();
}
