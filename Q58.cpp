#include<stdio.h>
int main()
{ 
    int a[10];
    printf("enter 10 integers");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
     int b[10];
    printf("enter 10 integers");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
     for(int i=0;i<10;i++)
    {
        int c[10];
     c[i] = a[i]+b[i];
   printf("%d \t",c[i]);
    }
    return 0;
}
   
