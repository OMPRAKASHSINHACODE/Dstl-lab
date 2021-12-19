#include<stdio.h>
int main()
{
   int a[10],b[10],i,c[10],j,k=0,n1,n2;
   printf("\n!... Union Oprations on sets ...!\n");
   printf("\nEnter number of element of set A : ");
   scanf("%d",&n1);
   printf("Enter the element of set A : ");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);


   printf("Enter number of element of set B : ");
   scanf("%d",&n2);
   printf("Enter the element of set B : ");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

   
   for(i=0;i<n1;i++)
   {
       
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k)  
       {
          c[k]=a[i];
          k++;
       }
    }
    
   for(i=0;i<n2;i++)
   {
       
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) 
     {
       c[k]=b[i];
       k++;
     }
   }

   // printing of union of set A and set B
   printf("Union of set A and B is : ");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
    printf("\n!!!... Thank you ...!!!\n");
    return 0;
}