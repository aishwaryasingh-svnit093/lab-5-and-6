#include<stdio.h>
int main(){
	
	
	
	int arr[10];
	printf("enter 10 elements: ");

	 
	 int count=0;
	 
	for(int i=0; i<10;i++){
		
	
	scanf("%d" , &arr[i]);
	
		if(arr[i] %2 !=0){
			count++;
		}
		
	
	}
	
	printf("total odd numbers : %d \n" , count);
	printf("total even numbers : %d" , 10-count);
	
	
	
	
	
	
	
	
	return 0;
}
