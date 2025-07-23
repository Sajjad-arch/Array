#include <Stdio.h>
int main(void)

{
    int i,n;

    printf("Enter the size of an array: \n");
    scanf("%d",&n);
    int a[n];


    printf("Enter the %d elements; \n");

    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1; i<=n; i++)
    {
        if(a[i]%2==0)
        {
            printf("The even arra s are %d,",a[i]);
        }
    }
    return 0;
}
