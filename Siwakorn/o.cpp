#include <stdio.h>
#include <string.h>
void aaa(void);
void square(int W, int L);
float circle(int r);

main(){
    st:
    int r;	
	//aaa();
	//square(5,1000);
	printf("Enter Radius ;"); scanf("%d", &r);
	printf("Circle %.3f\n",circle(r));
	//printf("----------------\n")
	goto st;
}

void aaa(void){
	printf("hello world");
}

void square(int W, int L){
	int ANS = W*L;
	printf("ANSWER = %d \n", ANS);
}

float circle(int r){
	float c = 3.14*r*r;
	return c;
}