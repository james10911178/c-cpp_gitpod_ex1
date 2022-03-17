#include<stdio.h>

int main(void){
	int x,y; 
	int bool_value;
	
	x = 89 ; y= 64; 
	
	bool_value = ( x < y );
	printf(" x > y ==> %d \n ",bool_value);
	bool_value = ( x > y );
	printf(" x < y ==> %d \n ",bool_value);	
	bool_value = (x < 50  && x < 100 );	
	printf(" x < 5 &&  x < 10 ==> %d \n ",bool_value);	
	bool_value = (x < 50  ||  x < 100 );	
	printf(" x < 5 ||  x < 10 ==> %d \n ",bool_value);
}