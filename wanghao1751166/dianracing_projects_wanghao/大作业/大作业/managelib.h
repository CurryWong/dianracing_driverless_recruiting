struct student
{
char num[8];
char name[20];
int s[3];
};
void display(student stu[],int len);
void search(student stu[],int len);
int append(student stu[],int len);
int del(student stu[],int len);
void modify(student stu[],int len);
void count(student stu[],int len);
void sort(student stu[],int len);
void save(student stu[],int len);
int readfile(student stu[]);
void menu();