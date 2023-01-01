//Write a C program to delete an element
//from the position(given by user) for an
//integer array.
#include<stdio.h>
 int main()
 {
 	int a[20],b[20],fact=1,n;
 	int i,j,l,loc;
 	printf("Enter array size: ");
 	scanf("%d",&n);
 	    printf("Enter elements: ");
 	
 		for(i=0;i<n;i++)
 		{
 	    scanf("%d",&a[i]);
		}
		printf("Enter loc to delete: ");
		scanf("%d",&loc);
		for(i=loc;i<n-1;i++)
		{
		a[i]=a[i+1];
		}
		printf("New array is:\n ");
		for(i=0;i<n-1;i++)
		{
		printf(" %d",a[i]);
		}
	}
