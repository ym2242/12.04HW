#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int recursiveMaximum(int data[], int num);

int main(void)
{
	int i;
	int data[SIZE] = { 10, 17, 20, 8, 47, 24, 91, 51, 49, 33};
	printf("Data : ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", data[i]);
	}

	printf("\nMaximum number : %d\n", recursiveMaximum(data, SIZE));
	system("pause");
	return 0;

}
int recursiveMaximum(int data[], int num)
{
	int max;
	if (num==1)
	{
		return data[num - 1];
	}
	else
	{
		max = recursiveMaximum(data, num - 1);
		if (data[num-1]>max)
		{
			return data[num - 1];
		}
		else
		{
			return max;
		}
	}
}