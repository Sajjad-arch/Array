#include <stdio.h>
int main(void)


{
    int i,n,m,ne,position;

    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the number of elements elments: \n");
    scanf("%d",&m);



   printf("Enter the  elments: \n");

    for(i=1; i<=m; i++)
    {
        scanf("%d",&arr[i]);
    }

   printf("Enter the position want to delete: ");
    scanf("%d",&position);



    if(position%2!=0)
    {

      for(i=position; i<=m-1; i++)
      {
        arr[i]=arr[i+1];

      }


     m--;
        for(i=1; i<=m; i++)
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

