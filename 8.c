#include<stdio.h>
int main(){
	
	int choice,n,i,fact=1,count=0;
	printf("Options are given below:\n");
	printf("1. Factorial\n");
	printf("2. Prime number\n");
	printf("3. Odd or even number\n");
	printf("4. Exit\n");
	printf("\nEnter your choice: ");
	scanf("%d", &choice);
	printf("\n");
	
	switch(choice){
		//Factorial value
		case 1:
			printf("Enter any number: ");
			scanf("%d", &n);
			
			for(i=1; i<=n; i++){
				fact = fact*i;
			}
			printf("\nFactorial of %d is: %d\n", n, fact);
			break;
		
		//Prime number identify	
		case 2:
			printf("Enter any positive number: ");
			scanf("%d", &n);
			
			for(i=2; i<n; i++){
				if(n%i==0){
					count++;
					break;
				}
			}
			if(count==0){
				printf("\nPrime number\n");
			}
			else{
				printf("\nNot a prime number\n");
			}
			break;
		
		//Even or odd number identify	
		case 3:
			printf("Enter any number: ");
			scanf("%d", &n);
			
			if(n%2==0){
				printf("\nEven number\n");
			}
			else if(n%2!=0){
				printf("\nOdd number\n");
			}
			else{
				printf("\Invalid input\n");
			}
			break;
		
		//if others	
		default:
			printf("\nExit\n");
	}
	
	return 0;
}
