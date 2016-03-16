#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (void){

	//
	long double precision;
	long double pie_part = 0;
	long double pie = 0;
	int counter=1;
	long double den = 0.000;
	long double numer = 0.000;

	printf("What is the smallest precision you'd like pie to be ?\n");
	scanf("%Lf", &precision);
printf("precision: %Lf\n", precision);

	do{
			if(counter%2 == 1){

			pie_part =  (long double)((long double)(4)/(long double)(2*counter - 1));
			counter++;
			pie = pie + pie_part;
		} 
		else{

			pie_part =  (long double)((long double)(4)/(long double)(2*counter - 1));
			
			counter++;
			pie -= pie_part;

		}
}while (fabsl(pie_part) > precision);


	printf("Here is the pie approx value %Lf \n", pie);
	//For looop for adding fraction 
		//Check if smaller than epsilon 
	//if not add it to the sum 

	return 0;
}