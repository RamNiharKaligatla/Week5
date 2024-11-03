#include <stdio.h>
int main()
{
    int n,i,k;
    printf("Size of even array: ");
    scanf("%d", &n);
    int a[n];
    printf("Elements: \n");
    for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i+=2)
    {
    	k=a[i];
    	a[i]=a[i+1];
    	a[i+1]=k;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

