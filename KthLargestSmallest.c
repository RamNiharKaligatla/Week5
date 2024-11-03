#include <stdio.h>
int main()
{
    int n,i,j,l,k;
    printf("Size: ");
    scanf("%d", &n);
    int a[n];
    printf("Elements: \n");
    for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
    }
    
    printf("Enter value of k: ");
    scanf("%d", &k);
    for(i=0;i<n-1;i++)
	{
        for(j=0;j<n-i-1;j++)
		{
            if(a[j]>a[j+1])
			{
                l=a[j];
                a[j] = a[j+1];
                a[j+1]=l;
            }
        }
    }
    printf("%dth smallest is %d and ",k,a[k-1]);
    printf("%dth largest is %d",k,a[n-k]);
	return 0;
}
