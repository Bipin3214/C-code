#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,arr[100],n,temp;
	printf("\n Enter the size of array  : ");
	scanf("%d",&n);
	printf("\n Enter the elemnets of array : \n ");
	for(i=0;i<n;i++)
	{
		printf("arr[ %d ] :  ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n\n ******** Reversing address of array ********");
	j=n-1;
	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
	}
	
	for(i=0;i<n;i++)
	{
				printf("\n arr[ %d ] : %d",i,arr[i]);
	}
	getch();
}
