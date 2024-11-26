#include<stdio.h>
int main(){
	
	int i,j;
	int rows =5;
	 
	for(i=0;i<=rows ;i++){
		for(j=0;j<=i;j++){
			if (i==1 && j==1){
				printf("A ");
			}
		else if(i==2 && j==2){
			printf("AB");
		}
		else if (i==3 && j==3){
			printf("ABC");
		}
		else if (i==4 && j==4){
			printf("ABCD");
		}
		else if(i==5 && j==5){
			printf("ABCDE");
		}
		else {
			printf("");
		}
		
		
		
		}
		printf("\n");
		
	}
	 
	
	
	
	
	
	return 0;
}
