#include<conio.h>
#include<stdio.h>
#include<string.h>
struct student
{
    char name[20],course_code[20],subjects[10][10]; //string litreal on subjects
    int roll_no,marks[2000];
};
void main()
{
    int choice = 0,count = 0,i,per = 0;
    float total = 0;
    struct student s1;
    do{
    printf("Enter your name\n");
    gets(s1.name);
    printf("Enter your Course Code\n");
    scanf("%s",s1.course_code);
    printf("Enter your roll number\n");
    scanf("%d",&s1.roll_no);
    printf("enter the subjects [should be 5 subjects]\n");
    for(i=0;i<5;i++)
    {
      scanf("%s",s1.subjects[i]);
    }
    printf("enter the marks of the subjects![Should be out of 100]\n");
    for(i=0;i<5;i++)
    {
        printf("%s\n",s1.subjects[i]);
        scanf("%d",&s1.marks[i]);
        total=total+s1.marks[i];
    }
    total=total/5;
    if(total>100)
        count = 0;
    else if(total>=75)
        count = 1;
    else if(total>=65)
        count = 2;
    else
        count = 3;

    if(count==0)
         printf("wrong input of marks! please input correct marks.\n");

    printf("do you want to change the info? enter 1 for yes or press any key to exit.\n");
    scanf(" %d",&choice);
    }while(choice==1);
    if(count!=0)
    {
    printf("\n==================================================\n");
    printf("                    MARKSHEET                     ");
    printf("\n==================================================\n");
    printf("||            NAME: \t\t%s\n        ||",s1.name);
    printf("||            Course Code: %s\n\t\t ||",s1.course_code);
    printf("||            Roll No: %d\n\t\t     ||",s1.roll_no);
    printf("||            MARKS:\n\t\t          ||");
    for(i=0;i<5;i++)
    {
    printf("||            %s = %d\n\t\t         ||",s1.subjects[i],s1.marks[i]);
    }
    printf("percentage = %.1f\n\t\t",total);
    switch(count)
    {
      case 1:
         printf("Congratulations you have passed with Distinction!");
          break;
      case 2:
         printf("Congratulations you have passed First Class!");
         break;
      case 3:
         printf("Sorry you have Failed");
         break;
    }
    }
    getch();
}
