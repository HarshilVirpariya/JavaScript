#include<stdio.h>
int fact(int n){
	if(n == 0 || n == 1){
		return 1;
	}else{
		return n*fact(n-1);
	}
}

int main(){
	int number;
	
	printf("Enter Number :- ");
	scanf("%d",&number);
	
	if(number<0){
		 printf("Factorial is not defined for negative numbers\n");
	}else{
		printf("Factorial of %d = %d",number,fact(number));
	}
	return 0;
}

