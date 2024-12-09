#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int age;
	float grade;
};

int main(){
	struct Student Students[2];
	
	
	strcpy(Students[0].name, "Bob");
	Students[0].age = 16;
	Students[0].grade = 3.67;
	
	
	strcpy(Students[1].name, "TAR");
	Students[1].age = 15;
	Students[1].grade = 3.77;
	
	for (int i = 0; i < 2; i++) {
	printf("student %d\n" , i+1);
	printf("name\n" , Students[i].name);
	printf("Age" , Students[i].age);
		printf("Grade\n" , Students[i].grade);
			printf("\n");
			
	
	}
	return 0;
}