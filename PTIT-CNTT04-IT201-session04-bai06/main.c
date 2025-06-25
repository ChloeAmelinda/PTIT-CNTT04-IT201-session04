#include <stdio.h>
#include <string.h>


struct Student {
    int id;
    char name[50];
    int age;
};
void inputStudent(struct Student *student , int id) {
    student->id = id;
    printf("Student id is %d\n", student->id);
    printf("Enter student name: ");
    getchar();
   // scanf("%s", student->name);
    fgets(student->name,50,stdin);
    student->name[strcspn(student->name,"\n")] = '\0';
    printf("Enter student age: ");
    scanf("%d", &student->age);
}
void printStudent(struct Student student) {
    printf("Student ID: %d\n", student.id);
    printf("Student name: %s\n", student.name);
    printf("Student age: %d\n", student.age);
}
int linearSearch(struct Student arr[],int n ,int id) {
    for (int i = 0; i < n; i++) {
        if (arr[i].id == id) {
            return i;
        }
    }
    return -1;

}
int main(void) {
    struct Student student[5];
    printf("Enter information of students ");
    for (int i = 0; i < 5; i++) {
        //printf("Enter student ID %d:\n ",i+1);
        inputStudent(&student[i],i+1);
    }
    int searchID;
    printf("Enter student ID to find: ");
    scanf("%d", &searchID);
    //check
    int index=linearSearch(student,5,searchID);
    if(index==-1) {
        printf("Student not found\n");
    }else {
        printf("Information of student");
        printStudent(student[index]);
    }


    return 0;
}