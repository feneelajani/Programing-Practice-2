// Nested Structure

#include <stdio.h>

struct date {
    int day, month, year;
};

struct student {
    int rollno;
    char name[20];
    struct date dob;
};

int main() {
    struct student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.rollno);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("DOB: %d/%d/%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
