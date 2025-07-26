#include <stdio.h>
int main(void)

{
    int i,n,ne,m;

    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
   int numberofelements=0;


    printf("Enter number of elements in the array\n");
    scanf("%d", &m);


    printf("Enter the %d elments: \n",m);
    for(i=0; i<m; i++)
    {
        scanf("%d",&arr[i]);
        numberofelements++;
    }



    if(numberofelements<n)
    {
        printf("Enter the elment want to insert: ");
    scanf("%d",&ne);

         arr[numberofelements]=ne;
          numberofelements++;




    for(i=0; i<numberofelements; i++)
    {
       printf("%d ",arr[i]);

    }



}
else {
        printf("Insertion is not possible because the array is full!!!\n");
    }


    return 0;

    }
