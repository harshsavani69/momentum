#include<stdio.h>
#include<conio.h>

main()
{
    clrscr();
    int a,b,c,d;
    printf("\nenter values\n");
    scanf("%d%d%d%d",&a,&b,&c,&d );

    printf("the max is %d" ,a>b?a>c?a>d?a:d:c>d?c:d:b>c?b>d?b:d:c>d?c:d);

    getch();


}