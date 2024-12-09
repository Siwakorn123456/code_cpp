#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Student Students[8]; // กำหนดอาร์เรย์สำหรับนักเรียน 8 คน
    int numStudents; // ตัวแปรเก็บจำนวนข้อมูลนักเรียนที่ต้องการป้อน
    
    printf("Enter the number of students (up to 8): ");
    scanf("%d", &numStudents);
    
    if (numStudents > 8 || numStudents <= 0) {
        printf("Invalid number of students. Please enter between 1 and 8.\n");
        return 1; // ออกจากโปรแกรมเนื่องจากค่าไม่ถูกต้อง
    }
    
    // รับข้อมูลนักเรียน
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]s", Students[i].name); // รับ string โดยไม่ตัดที่ช่องว่าง
        
        printf("Age: ");
        scanf("%d", &Students[i].age); // รับค่าอายุ
        
        printf("Grade: ");
        scanf("%f", &Students[i].grade); // รับค่าเกรด
    }
    
    // แสดงข้อมูลนักเรียน
    printf("\nStudent Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", Students[i].name);
        printf("Age: %d\n", Students[i].age);
        printf("Grade: %.2f\n", Students[i].grade);
        printf("\n");
    }
    
    return 0;
}
