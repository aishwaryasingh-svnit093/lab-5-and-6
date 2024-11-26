#include<stdio.h>
int main()
{ 
    int a[10],max=0,smax;
    printf("enter 10 integers");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            smax=max;
            max=a[i];
          
          
        }
        else if(smax<a[i]&&a[i]<max)
        {
            smax=a[i];
        }
          
        
    }
    printf("%d is max", max);
    printf("%d is smax", smax);
    return 0;
}
