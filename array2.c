#include <stdio.h>
int main(void)

{
    int i,n;


    printf("Enter the size of an array; \n");
    scanf("%d",&n);
       int a[n];


    printf("Enter the %d elements: \n",n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=1; i<=n; i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
