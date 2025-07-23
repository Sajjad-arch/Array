#include <stdio.h>
int main(void)


{
    int i,n,ne,position;

    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n+1];


    printf("Enter the %d elments: \n",n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }

   printf("Enter the position want to insert: ");
    scanf("%d",&position);

    if(position < 0 || position > n)
        {
        printf("Invalid position!\n");
        return 1;
        }


    printf("Enter the new element want to insert: ");
    scanf("%d",&ne);


    if(position%2==0)
    {

      for(i=n; i>=position; i--)
      {
        arr[i+1]=arr[i];

      }

        arr[position]=ne;

        for(i=1; i<=n+1; i++)
         {
        printf("%d\n",arr[i]);
         }

    }

   else
   {
       printf("It is an even index");
   }


   return 0;

}
