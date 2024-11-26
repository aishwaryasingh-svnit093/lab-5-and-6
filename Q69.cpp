#include<stdio.h>
//Program to perform linear search on an array.
int main() {

    int n, i, num[10] , k=0, count=0;
    printf("Enter 10 elements of an array : ");

    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }

    printf("Enter a number which one you want.... : \n");
    scanf("%d", &n);

    for(i=0; i<10; i++) {
        if(n==num[i]) {  
            k=i+1;
            count++;
            break;
        }
    }
    if(count>0){
    	printf("the number is %d \n" , n);
    	printf("index of number is %d",k);
	}
    return 0;
}
