#include "calc.h"
#include <iostream>
#include <math.h>

int calc::calcFib(int x){	
//function returns 0 or 1 based on the true/false value
	if(x == 0 | x == 1){
		return x == 0 ? 0:1;
	}
	return calcFib(x-1) + calcFib(x-2);
}

int calc::sumBetween(int min, int max){
	int retVal = 0;
	for(int i =min; i <= max; i++){
		retVal += i;
	}
	return retVal;
}
bool calc::isEven(int x){
			
	return x%2==0 ? true: false;
}






