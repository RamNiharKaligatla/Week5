#include <stdio.h>
int main()
{
    int n,i,k;
    printf("Size: ");
    scanf("%d", &n);
    int a[n];
    printf("Elements: \n");
    for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
    }
	for(i=0;i<n/2;i++)
	{
		k=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=k;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

