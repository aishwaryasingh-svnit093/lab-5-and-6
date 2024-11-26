#include<stdio.h>
int main(){
	
	
	int a[3][3];
	printf("enter elements: ");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d" , &a[i][j]);
		}
		
}

int sum1=0;
int sum2=0;
int sum3=0;

for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			sum1+=a[0][j];
			 
			sum2+=a[1][j];
			
			sum3+=a[2][j];
		
		}
		
	}
	printf("sum of rows: %d \n" , sum1);
	printf("sum of rows: %d \n" , sum2);
		printf("sum of rows: %d \n" , sum3);



	
	
	
	
	
	
	
	
	
	return 0;
}
