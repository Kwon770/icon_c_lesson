#include<stdio.h>

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	int *Ptr;
	int i;
	
	Ptr = arr;
	
	for(i = 4; i >= 0;i--)
	{
		Ptr = &arr[i];
		
		printf("%d", *Ptr);
	}
	
	return 0;
}
