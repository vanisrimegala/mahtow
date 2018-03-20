#include<stdio.h>
#include<string.h>
int main()
{
   char a[10],i,count;
   printf("Enter the day \n");
   scanf("%s",a);
       if(a=='sunday'||a=='saturday')
       {
          count++;
       }
   if(count==1)
       {
       printf("yes ");
       }
       else
       {
           printf("no");
       }
  
   return 0;
}
