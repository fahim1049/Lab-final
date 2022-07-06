#include<stdio.h>
int main(){
	
	int n;
	printf("Enter any six digit number: ");
	scanf("%d", &n);
	
	int a=n%10;
	int a1=n/10;
	int b=a1%10;
	int b1=a1/10;
	int c=b1%10;
	int c1=b1/10;
	int d=c1%10;
	int d1=c1/10;
	int e=d1%10;
	int e1=d1/10;
	int f=e1%10;
	
	int sum = a+b+c+d+e+f;
	printf("\nSummation of all digit is: %d\n", sum);
	printf("Numbers in reverse order: %d%d%d%d%d%d", a,b,c,d,e,f);
	
	return 0;
}
