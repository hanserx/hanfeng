#include<stdio.h>

int Maxsum(int a[], int n)
{
	int sum, Maxsum;
	sum = Maxsum = 0;
	int i, j;
	for (i=0; i<n; i++)
	{
		sum = 0;
		for (j=i; j<n; j++)
		{
			sum+=a[j];
			if (sum > Maxsum)
				Maxsum=sum;
		}
	}
	return Maxsum;
}
int main()
{
	int a[100], number;
	scanf("%d", &number);
	for (int i=0; i<number; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("%d", Maxsum(a, number));
	return 0;
}
