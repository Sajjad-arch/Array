
#include <stdio.h>
int main(void)

{
    int i,m,n,ne,position;

    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];


    printf("Enter number of elements in the array\n");
    scanf("%d", &m);


    printf("Enter the %d elments: \n",m);
    for(i=1; i<=m; i++)
    {
        scanf("%d",&arr[i]);
    }



    printf("Enter the elment want to insert: ");
    scanf("%d",&ne);
    printf("Enter the position want to insert: ");
    scanf("%d",&position);


    for(i=m;i>=position;i--)
    {

        arr[i+1]=arr[i];

    }
         arr[position]=ne;
          m++;




    for(i=1; i<=m; i++)
    {
       printf("%d \n",arr[i]);

    }

    return 0;

}
