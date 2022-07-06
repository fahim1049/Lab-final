#include<stdio.h>
int main(){
	
	int i, j;
	
	printf("All the prime numbers between 1 to 300: ");
	
	for(i=2; i<=300; i++){
		for(j=2; j<=300; j++){
			if(i%j==0){
				break;
			}
		}
		if(i==j){
			printf("%d ", j);
		}
	}
	
	return 0;
}
