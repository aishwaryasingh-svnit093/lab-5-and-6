#include<stdio.h>
int main(){
	
	
	int rows=5;
	int i,j;
	
	for(i=0;i<rows;i++){
		for(j=5;j>=i;j--){
		
		printf(" ");
	}
	for(int s=0;s<=i;s++){
		
		if(s==0){
			printf("1");
		}
		else if(s==1){
			printf("2");
		}
		else if(s==2){
			printf("3");
		}
		else if(s==3){
			printf("4");
		}
		else if (s==4){
			printf("5");
		}
		else {
			break;
		}
		
	}
	printf("\n");
	}
	
	
	
	
	
	return 0;
}
