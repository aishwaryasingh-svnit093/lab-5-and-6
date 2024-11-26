#include<stdio.h>
int main(){
	
	int n;
	printf("enter number of elements : ");
	scanf("%d" , &n);
	
	int a[n];
	printf("enter elements: ");
	for(int i=0;i<n;i++){
		scanf("%d" , &a[i]);
	}
	 for(int i=0;i<n/2;i++){
	 	int firstval=a[i];
	 	int secondval=a[n-i-1];
	 	a[i]=secondval;
	 	a[n-i-1]=firstval;
	 	
	 	
	 }
	
	
	for (int i=0;i<n;i++){
		printf("%d \t" , a[i]);
	}
	
	
	
	
	
	return 0;
}
