// print the square or stars i.e. n*n


#include <stdio.h>

int main()
{
	int n,m;
	printf("enter the number of rows : ");
	scanf("%d",& n);
	
	for(int i=1; i<=n; i++) {
		for (int i=1; i<=n; i++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
