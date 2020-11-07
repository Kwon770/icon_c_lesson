#include<stdio.h>

int main()
{
	char *Fiz = "Fizz";
	char *Buz = "Buzz";
	char *FizBuz = "FizzBuzz";
	int i;
	
	for(i = 1; i <= 100; i++)
	{
		
		if(i%3 == 0 && i%15 != 0)
		{
			printf("%s\n", Fiz);
		}
		
		else if(i%5 == 0 && i%15 != 0)
		{
			printf("%s\n", Buz);
		}
		
		else if(i%15 == 0)
		{
			printf("%s\n", FizBuz);
		}
		
		else
			printf("%d\n", i);
	}
	
	return 0;
}
