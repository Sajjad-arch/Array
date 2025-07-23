#include <stdio.h>
int main(void)

{
    int i,n,ne;

    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];


    printf("Enter the %d elments: \n",n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }



    printf("Enter the elment want to insert: ");
    scanf("%d",&ne);
    arr[n]=ne;



    for(i=1; i<=n; i++)
    {
       printf("%d \n",arr[i]);

    }

    return 0;

}
