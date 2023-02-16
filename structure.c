#include<stdio.h>
#include<string.h>
struct student {
	int rollno;
	char name[20];
	char course[5];
};
struct college {
	char name1[7];
	struct student s1;
};
void main(){
	struct college c1;
	c1.s1.rollno=22;
	strcpy(c1.s1.name,"Denzel Sunny");
	strcpy(c1.s1.course,"mca");
	strcpy(c1.name1,"sjcet");
	printf("College Name : %s\n",c1.name1);
	printf("Course Name : %s\n",c1.s1.course);
	printf("Student Name : %s\n",c1.s1.name);
	printf("roll no  : %d\n",c1.s1.rollno);
}
