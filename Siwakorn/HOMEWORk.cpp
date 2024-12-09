#include <stdio.h>
#include <string.h>

float vat;
int m;

struct Food{
	char dish[50];
	int price;
};
	
int main(){
	struct Food d[5] = {
		{"Pepsi", 20 },
		{"MAMA", 20 },
		{"LER", 65 },
		{"kai", 75 },
		{"REDWine", 350 }
	};	
	
	printf("-----------------Food menu-----------------\n");
for (int i = 0; i < 5; i++) {
    printf("%d. %s \t %d bath\n", i + 1, d[i].dish, d[i].price);
	}
	printf("--------------------------------------------\n");
	int menu;
	printf("Please Select Menu (1-5) : ");
	scanf("%d", &menu);
	printf("How many you want to buy : ");
	scanf("%d", &m);

	if(menu < 1 || menu > 5){
		printf("Invlid Number ! Please enter the number between 1 and 5.\n");
		return 1;
	}
	if (m <= 0) {
    	printf("Invalid quantity! Please enter a positive number.\n");
    	return 1;
	}
	
	printf("The menu you choose : %s %d bath\n\n", d[menu-1].dish ,d[menu-1].price);
	
	float subtotal = d[menu-1].price * m;
	vat = subtotal * 0.07;
	float final_price = subtotal + vat;
	printf("Total price including VAT (7%%): %.2f bath\n", final_price);

	return 0;
}