#include<stdio.h>
int main(){
	
	int i,j;
	int rows =5;
	
	for(i=0;i<=rows ;i++){
	
		for(j=0;j<=i;j++){
			
			if(i==1 && j==1){
				printf("A");
			}
			else if (i==2 && j==2){
				printf("BB");
			}
			else if (i==3 && j==3){
				printf("CCC");
			}
			else if(i==4 && j==4){
				printf("DDDD");
			}
			else if(i==5 && j==5){
				printf("EEEEE");
			}
			
		}
		printf("\n");
}
return 0;
}


