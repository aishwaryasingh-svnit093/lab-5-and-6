#include<stdio.h>
int main(){
	
	 int arr[10];
	 printf("enter the elements :");
	 
	 int countodd =0;
	 int counteven =0;
	 int countzero=0 ; 
	 
	 for(int i=0;i<10;i++){
	 	scanf("%d" , &i);
	 	
	 
	 	 if ( i>0){
	 	 	countodd++;
		  }
		  else if (i<0){
		  	counteven++;
		  }
		  else {
		  	countzero++;
		  }
		  
	 	
	 	 }
	 	 
	printf("odd numbers=%d \n", countodd);
	printf("even numbers=%d \n" , counteven);
	printf("zero numbers %d" , countzero );
	
	
	return 0 ;
}
