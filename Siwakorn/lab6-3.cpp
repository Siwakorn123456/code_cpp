#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int age;
	float grade;
};

int main(){
	struct Student Students[7];
	
	
	strcpy(Students[0].name, "Bob");
	Students[0].age = 16;
	Students[0].grade = 3.67;
	
	
	strcpy(Students[1].name, "TAR");
	Students[1].age = 15;
	Students[1].grade = 3.22;
	
		strcpy(Students[2].name, "suam");
	Students[2].age = 16;
	Students[2].grade = 3.67;
	
	
	strcpy(Students[3].name, "fa");
	Students[3].age = 15;
	Students[3].grade = 3.7;
	
		strcpy(Students[4].name, "kao");
	Students[4].age = 16;
	Students[4].grade = 3.6;
	
	
	strcpy(Students[5].name, "bass");
	Students[5].age = 15;
	Students[5].grade = 3.27;
	
		strcpy(Students[6].name, "tang");
	Students[6].age = 16;
	Students[6].grade = 3.37;
	
	
	strcpy(Students[7].name, "boss");
	Students[7].age = 15;
	Students[7].grade = 3.97;
	
	for (int i = 0; i < 8 ; i++) {
	printf("student %d\n" , i+1);
	printf("name: %s\n" , Students[i].name);
	printf("Age: %d\n" , Students[i].age);
	printf("Grade: %.2f\n" , Students[i].grade);
	printf("\n");
			
	
	}
	return 0;
}