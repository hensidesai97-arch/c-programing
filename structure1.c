/*Create a structure to specify data on students given below.  Roll number, Name, Course Name, 
Major and Minor Subjects.
Assume that there are 10 students.
	a) The function should print name of all students.
	b) Print the data of a student whose roll number is given.*/

#include<stdio.h>
#include<string.h>
int main(){
    int rollnumber;
    typedef struct student
    {
       int rollnumber;
       char name[50];
       char coursename[50];
       char major[10];
       char minor[10];
    }student;
    
    student a;
    a.rollnumber=1;
    strcpy(a.name,"hensi");
    strcpy(a.coursename,"btech");
    strcpy(a.major,"maths");
    strcpy(a.minor,"uhv");

    student b;
    b.rollnumber=2;
    strcpy(b.name,"sneha");
    strcpy(b.coursename,"btech");
    strcpy(b.major,"physics");
    strcpy(b.minor,"iks");

    student c;
    c.rollnumber=3;
    strcpy(c.name,"vanshika");
    strcpy(c.coursename,"btech");
    strcpy(c.major,"pee");
    strcpy(c.minor,"evs");

    printf("name of all student: \n");
    printf("%s\n",a.name);
    printf("%s\n",b.name);
    printf("%s\n",c.name);
    
    printf("for know all detail of student enter roll number: ");
    scanf("%d",&rollnumber);

    if(rollnumber == a.rollnumber){
        printf("%s\n",a.name);
        printf("%s\n",a.coursename);
        printf("%s\n",a.major);
        printf("%s\n",a.minor);
    }
    if(rollnumber == b.rollnumber){
        printf("%s\n",b.name);
        printf("%s\n",b.coursename);
        printf("%s\n",b.major);
        printf("%s\n",b.minor);
    }
    if(rollnumber == c.rollnumber){
        printf("%s\n",c.name);
        printf("%s\n",c.coursename);
        printf("%s\n",c.major);
        printf("%s\n",c.minor);
    }

    return 0;
}