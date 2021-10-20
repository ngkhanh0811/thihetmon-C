#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int arr[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("\n+Number %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Result : ");
	for(i=9;i>=0;i--)
	{
		printf("%d ", arr[i]);
	}
}
