#include <stdio.h>
int main()
{
    int n,i;
    float s=0;
    printf("Size: ");
    scanf("%d",&n);
    int a[n],max=a[0],min=a[0];
    printf("Elements: \n");
    for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
        s+=a[i];
    }
    for(i=1;i<n;i++)
	{
        if(a[i] > max)
		{
            max = a[i];
        }
        if(a[i] < min)
		{
            min = a[i];
        }
    }
    printf("Maximum = %d\n",max);
    printf("Minimum = %d\n",min);
    printf("Average = %f\n",s/n);
    return 0;
}

