#include<stdio.h>
int main()
{
	int a[100],b[100],c[200],x,y,z,i,j,k;
	printf("enter size of first array: ");
	scanf("%d",&x);
	printf("enter elements of first array in sorted order: \n");
	for (i=0;i<x;i++)
		{
			scanf("%d",&a[i]);
		}

	printf("enter size of second array: ");
	scanf("%d",&y);
	printf("enter elements of second array in sorted order: \n");
	for (j=0;j<y;j++)
		{
			scanf("%d",&b[j]);
		}
	z=x+y;
	i=j=k=0;
	while(k<z)
	{	
		if(i<x&&j<y)
		{
			if(a[i]<=b[j])
				c[k++]=a[i++];
			else
				c[k++]=b[j++];
		}
		else if(i<x)
				c[k++]=a[i++];
		else
				c[k++]=b[j++];		
	}
	printf("The sorted array is: ");
	for (k=0;k<z;k++)
		{
			printf("\n%d",c[k]);
		}
}
