#include <stdio.h>
int main(void)

{
    int i,n;

    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];


    printf("Enter the %d elments: \n",n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }

     n--;


   printf("New array\n");
    for(i=1; i<=n; i++)
    {
       printf("%d \n",arr[i]);

    }

    return 0;

}


