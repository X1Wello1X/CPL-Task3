#include <stdio.h>
int main() {
	float X;
	printf("Enter the number : ");
	scanf("%f", &X);
	if (X>=0)
		if(X<=25)
			printf("the number between [0,25] ");
		
		else if(X<=50)
			printf("the number between (25,50] ");
		
		else if(X<=75)
			printf("the number between (50,75] ");
		
		else if(X<=100)
			printf("the number between (75,100] ");
		else{
	
			printf(" Out of intervals ");
	}
	else {
		printf(" Out of intervals ");
	}
return(0);	
}
