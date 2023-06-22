/******************************************************************************
Copy đoạn code vào file này
**Lưu ý không đổi tên file hoặc định dạng file
**Nộp thành công sẽ có tích xanh ở ngoài repository
*******************************************************************************/
#include <stdio.h>

struct student {
    char name[20];
    int eng;
    int math;
    int phys;
    
};
int main() {
    struct student students[2];
    int i;

    // Accept information for each student
    for (i = 0; i < 2; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter marks in English for student %d: ", i+1);
        scanf("%d", &students[i].eng);
        printf("Enter marks in Math for student %d: ", i+1);
        scanf("%d", &students[i].math);
        printf("Enter marks in Physics for student %d: ", i+1);
        scanf("%d", &students[i].phys);
    }

    // Display information of all students
    printf("\nInformation of all students:\n");
    for (i = 0; i < 2; i++) {
        printf (" {\"%s\", %d, %d, %d}\n", students[i].name, students[i].eng, students[i].math, students[i].phys);
    }
        float  x;
        char grade;
    for (int i = 0; i<2; i++) {
             if (strcmp( ten_nhap_vao, students[i].name) == 0) {
                     //Tính điểm và in grade
              }
    
           x = (students[i].eng + students[i].math + students[i].phys) / 3;
    
        if (x >= 90 && x <= 100) {
            grade = 'S';
        } else if (x >= 80 && x < 90) {
            grade = 'A';
        } else if (x >= 70 && x < 80) {
            grade = 'B';
        } else if (x >= 60 && x < 70) {
            grade = 'C';
        } else {
            grade = 'D';
        }

        printf("Grade: %c\n", grade);

        return 0;
    }
             
             }
