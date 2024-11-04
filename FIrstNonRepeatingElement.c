#include <stdio.h>
int main()
{
	int n,i,j;
 	printf("Size of array: ");
 	scanf("%d",&n);
 	int a[n];
 	printf("Elements:\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int c=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		if(c==1)
		{
			printf("%d",a[i]);
			break;
		}
	}
	return 0;
}
