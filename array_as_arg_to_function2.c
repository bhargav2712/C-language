//Passing array as argument to the function
#include<stdio.h>
int main()
{
	int min = 0;
	int arr[] = {67, 90, 2, 1};
	
	min = minimum(arr, 4);  // function call
	printf("Minimum array element = %d", min);
	return 0;
}
int minimum(int arr[], int size)
{
	int min = arr[0];
	int i;
	for(i=1; i<size; i++)
	{
		if(min > arr[i])
			min = arr[i];
	}
	return min;
}
