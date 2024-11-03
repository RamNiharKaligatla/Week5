#include <stdio.h>
int main()
{
    int n,i,k,c=0;
    printf("Size: ");
    scanf("%d", &n);
    int a[n];
    printf("Elements: \n");
    for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
    }
    printf("Enter required number: ");
    scanf("%d", &k);
    for(i=0;i<n;i++)
    {
    	if(a[i]==k)
    	{
    		c+=1;
		}
	}
	printf("Number %d is present %d times",k,c);
	return 0;
}
