#include <stdio.h>
#include <string.h>


struct Student{
	char name [50];
	int age;
	float grade;
};

int main(){
	struct Student st[7];

	for(int i=0; i<7; i++){
		printf("student Name %d :", i+1);
		scanf("%s" , &st[i].name);
		printf("Age :");
		scanf("%d" , &st[i].age);
		printf("Grade : ");
		scanf("%f" , &st[i].grade);
		
	}
	
		FILE *file = fopen("student.txt", "w");
		if(file == NULL){
			printf("CAn not open file!!");
			return 1;
		}
		
		for(int i=0; i<7; i++){
		printf("%s\t",st[i].name);
		fprintf(file, "%s \t", st[i].name);
		printf("%d\t",st[i].age);
		fprintf(file, "%d \t", st[i].age);
		printf("%f \n",st[i].grade);
		fprintf(file, "%f \n", st[i].grade);
			
		}
		   fclose(file);
		   return 0;
		
}
