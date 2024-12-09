#include<stdio.h> 

int main()
{
	int tar;
	int bin[100];
	int i=0, j;
	
	printf(" Input Decimal value : ");
	
	scanf("%d", &tar);
	
	do
	{
		bin[i] = tar % 2;
		tar /= 2;
        i++;
		
	}while(tar > 0);
 
 
    printf("\n Binary value is ");
     
    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);   
    }
     
    return 0;
	
}