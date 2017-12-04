#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int recordDice[11] = { 0 };
	int a[6] = { 1, 2, 3, 4, 5, 6 };
	int b[6] = { 1, 2, 3, 4, 5, 6 };
	int sun, i, j;
	int ra, rb;
	srand(time(NULL));

	for (i = 0; i < 36000; i++)
	{
		ra = rand() % 6;
		rb = rand() % 6;
		sun = 0;
		sun = a[ra] + b[rb];
		for (j = 2; j <= sun; j++)
		{
			if (j = sun)
			{
				recordDice[sun - 2]++;
			}
		}
	}
	printf("%-2s%10s\n", "Sun","Frequency");
	for (i = 0; i <= 10; i++)
	{
		printf("%-2d%10d\n", i+2,recordDice[i]);
	}

	
	system("pause");
	return 0;
}