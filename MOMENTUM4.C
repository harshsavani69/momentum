#include<stdio.h>





#include<conio.h>
main()
{
	char c;
	clrscr();
	printf("enter the day=");
	scanf("%c",&c);
	switch(c)
	{
		case 'm':
			printf("monday");
			break;
		case 'T':
			printf("Thuesday");
			break;
		case 'w':
			printf("wednesday");
			break;
		case 't':
			printf("thrusday");
			break;
		case 'f':
			printf("friday");
			break;
		case 'S':
			printf("saturday");
			break;
		case 's':
			printf("sunday");
			break;
		default:
			printf("\nplzee enter valid day=");
	 }
  getch();
}