#include<stdio.h>
int main(){
	
	//3x3 matrix
	 
	 
	 int a[3][3];
	 printf("enter elements: ");
	 for(int i=0;i<3;i++){
	 	for (int j=0;j<3;j++){
		 
	 	scanf("%d" , &a[i][j]);
	 }
	 }
	
	
	 int min=9999999999;
	 int max=0;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			
			if(a[i][j]<min){
				min=a[i][j];
			}
			else if(a[i][j]>max){
				max=a[i][j];
			}
			
			
			
		}
			}
	 
	 printf("max no : %d \n" , max);
	 printf("min no : %d" , min);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
