#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *Ptr;
	int input, i, j, con = 0;
	
	scanf("%d", &input);
	
	Ptr = (int*)malloc(input * sizeof (int));
	
	for(j = 0; j < input; j++)
	{
		scanf("%d", &i);
		
		Ptr[j] = i;
		
		con += Ptr[j];
	}
	printf("%d", con);
	
	return 0;
}
