#include<stdio.h>
int main(){
	
	int a[10];
	printf("enter 10 elements : ");
	for(int i=0; i<10;i++){
		scanf("%d" , &a[i]);
	}
	
	int b[10];
	for(int i=0; i<10; i++){
		b[i]=a[9-i];
		printf("%d \t" , b[i]);
	}
	
	
	
	
	
	
	return 0;
}
