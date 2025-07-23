#include <stdio.h>
int main(void)

{
    int i;
    int arr[10];


    printf("Enter the 10 elements: \n");

    for(i=1; i<=10; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=1; i<=10; i++)
    {
        printf("%d \n",arr[i]);

    }

    return 0;
}
