#include<stdio.h>
//    1
//   121
//  12321
// 1234321
int main() { 

    int i,j,k;
    

    for(i=1; i<=5; i++) {
        for(j=1; j=5-i; j++) {
            printf(" ");
        }
        for(k=1; k<=i; k++) {
            if (k==1){
            	printf("1 ");
			}
        if (k==2){
        	printf("1 2 ");
		}
    }
}

    return 0;
}
