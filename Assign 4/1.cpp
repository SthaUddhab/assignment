//Write a C program that reads 
//‘n’ numbers and sort them in ascending order using dynamic memory allocation. Use malloc function
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,temp, *p;
    printf("Enter the no. of elements to sort:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    printf("Memomry allocation failed");
    else
    {
        printf("Memory allocation successful\n");
        printf("Enter %d numbers for sorting:\n",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",p);
            p=p+1;
        }
        p=p-n;
        for(i=0;i<n;i++)
        {
           for(j=0;j<n-1;j++)
           {
               if(*(p+j)>*(p+j+1))
               {
                   temp=*(p+j);
                   *(p+j)=*(p+j+1);
                   *(p+j+1)=temp;
               }
           }
        }

    }
    printf("the number in ascending order is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*p);
        p++;
    }
}