#include <stdio.h>
int main()
{
	int n,i,j,c=0;
 	printf("Size of array: ");
 	scanf("%d",&n);
 	int a[n];
 	printf("Elements:\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d",a[i]);
				c++;
				break;
			}
		}
		if(c==1)
		{
			break;
		}
	}
	return 0;
}
