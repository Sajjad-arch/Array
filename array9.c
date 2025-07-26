
#include <stdio.h>
int main(void)

{
    int i,n,m;

    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];


    printf("Enter the number of elements elments: \n");
    scanf("%d",&m);


    printf("Enter the elements: ");
    for(i=1; i<=m; i++)
    {
        scanf("%d",&arr[i]);
    }




     m--;


   printf("New array\n");
    for(i=1; i<=m; i++)
    {
       printf("%d ",arr[i]);

    }

    return 0;



}

