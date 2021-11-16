//dsiplay your name and city using char array
#include<stdio.h>
int main()
{
	char name[] = "MEHAK";
	printf("My name is: %s",name);  //not %c
	
	char city[50];
	printf("\nEnter your city: ");
	scanf("%s", city); //or scanf("%s", &city);
	
	printf("\nYou belong to %s",city);
	return 0;
}
