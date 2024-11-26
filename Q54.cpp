#include<stdio.h>
int main(){
	
	int a[10];
	printf("enter elements : ");
	for(int i=0; i<10;i++){
		scanf("%d" , &a[i]);
		
	}
	for(int i=0; i<10;i++){
		int sum=0;
		sum = sum+a[i];
		printf("the sum is : %d",sum );
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
