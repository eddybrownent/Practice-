#include <stdio.h>
/*
*main - Entry point
*
* Description - program that automatically grade students
*
* Return: 0
*
*/
int main(void)
{
	int marks;
	printf("What is your score?\n");
	scanf("%i",&marks);
	if(marks>=80 && marks <=100)
	{
	  printf("%i - A\n",marks);
	}
	if(marks>=60 && marks<=79)
{
    printf("%i - B\n",marks);
}
	return (0);
}	
