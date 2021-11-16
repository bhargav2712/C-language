//Max & Min element from the array without sorting
#include<stdio.h>
int main()
{
	int size, i;
	printf("Enter the array size: ");
	scanf("%d",&size); 
	
	int arr[size];
	
	printf("\nEnter the array elements:\n");
	for(i=0; i<size; i++)   
	{                     
		scanf("%d",&arr[i]);
	}
	int min = arr[0];  
	int max = arr[0]; 
	
	//logic for finding max and min
	for(i=1; i<size; i++) 
	{
		if(arr[i] > max)  
			max = arr[i];  
		if(arr[i] < min) 
			min = arr[i]; 
	}
	printf("\nMaximum element of array = %d", max);
	printf("\nMinimum element of array = %d",min);
	return 0;
}
