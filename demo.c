//array demo
#include<stdio.h>
int main()
{
	int arr[3] = {1,  2,  3};  //-->VALUES
	          // [0],[1],[2]  -->INDEX NO/INDEX VALUE
	
	printf("array elements are:\n");
	int i;
	for(i=0; i<3; i++) //for(i=0; i<=2; i++)
	{
		printf("[%d] = %d\n", i, arr[i]);
	}
	return 0;
}

