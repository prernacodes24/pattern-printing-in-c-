 // print the ractangle or stars i.e. m * n 


#include <stdio.h>

int main()
{
	int n,m;
	printf("enter the number of rows : ");
	scanf("%d",& n);
	printf("enter the number of colums : ");
	scanf("%d",& m);
	for(int i=1; i<=n; i++) {
		for (int i=1; i<=m; i++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
