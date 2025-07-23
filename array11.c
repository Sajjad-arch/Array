#include <stdio.h>
int main(void)


{
    int i,n,ne,position;

    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];


    printf("Enter the %d elments: \n",n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }

   printf("Enter the position want to delete: ");
    scanf("%d",&position);



    if(position%2==0)
    {

      for(i=position; i<=n-1; i++)
      {
        arr[i]=arr[i+1];

      }


     n--;
        for(i=1; i<=n; i++)
         {
        printf("%d\n",arr[i]);
         }

    }

   else
   {
       printf("It is an odd index");
   }


   return 0;

}

