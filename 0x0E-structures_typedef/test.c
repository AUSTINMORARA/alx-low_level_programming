#include<stdio.h>
/**
 * main - testing the structure.
 *@name: name of student.
 *@age: age of the student.
 *@grades: grades of the student.
 */
struct Student
{
	char *name;
	int age;
	int grades[5];
};

int main(void)
{
	struct student kevin;
	kevin.name = "Kevin";
	kevin.age = 78;
	kevin.grade[0] = 6;
	kevin.grade[1] = 9;
	kevin.grade[2] = 12;
	printf("%s is a student at Baltamore.\n He is %d years old\nHe got %d on his math exam this semester.\n",kevin.name, kevin.age, kevin.grade[0]);
	return(0);
}
