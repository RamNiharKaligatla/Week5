#include <stdio.h>
int main()
{
	int n,i,j;
	printf("Size of array: ");
	scanf("%d",&n);
	int a[n],f[n];
	for(i=0;i<n;i++)
	{
		f[i]=0;
	}
	printf("Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		int c=1;
		if(f[i]==1)
		{
			continue;
		}
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				f[j]=1;
				c++;
			}
		}
		printf("\%d count: %d\n",a[i],c);
	}
	return 0;
}
