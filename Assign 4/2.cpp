/*Create structure named ‘student’ with member ‘rollno’, ‘name’ and ‘marks’. 
Allocate memory for storing records of 10 students. Write a complete C program that can store record 
of these 10 students,can delete some records and print them. Use dynamic memory allocation */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 10
struct student{
    int rn;
    char name[20];
    int marks;
};
int main()
{
 struct student *s;
 int rollno,inf;
     
    s=(struct student *)malloc(N*sizeof(struct student));
    if(s==NULL)
    printf("Memory allocation failed");
    else{
        printf("Required memory allocated\n");
        printf("enter the Roll no,Name and marks of %d students\n",N);
        for(int i=0;i<N;i++)
        {
        scanf("%d%s%d",&(s+i)->rn,(s+i)->name,&(s+i)->marks);
        }
        printf("Record of students\n");
        printf("Roll no\tName\tMarks\n");
        for(int i=0;i<N;i++)
        {
        printf("%d\t%s\t%d\n",(s+i)->rn,(s+i)->name,(s+i)->marks);
        }
      printf("Do you want to delete any information(y/n))\n ");
      scanf("%s",&inf);
       if(inf==121 || inf==89)
       {
           printf("Enter the roll no. of student you want to delete\t");
           scanf("%d",&rollno);
           for(int i=0;i<N;i++)
           {
               if((s+i)->rn==rollno)
               {
                   for(int j=i;j<N;j++)
                   {
                       *(s+j)=*(s+j+1);
                   }
                   break;
               }
           }
           printf("Updated record of student\n");
           printf("Roll No\tName\tMarks\n");
           for(int i=0;i<N-1;i++)
           printf("%d\t%s\t%d\n",(s+i)->rn,(s+i)->name,(s+i)->marks);
       }
       else
       exit(0);   
	}
}
