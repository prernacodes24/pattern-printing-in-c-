#include <stdio.h>

int main()
{
	int n;
	printf("enter the number of rows : ");
	scanf("%d",& n);
	int a = n ;
	for(int i=1; i<=n; i++) {
		for (int j=1; j<=a; j++) {  //j -> 1 to a 
			printf("*");
		}
		a--;
		printf("\n");
	}

	return 0;
}
