#include "iostream"
#include "managelib.h"
using namespace std;
void menu()
{
	cout<<"                 **********************************************************"<<endl;
	cout<<"                         *  1   显示记录          *  2   查找记录          "<<endl;
	cout<<"                         *  3   添加记录          *  4   删除记录          "<<endl;
	cout<<"                         *  5   修改记录          *  6   统计记录          "<<endl;
	cout<<"                         *  7   排序记录          *  8   保存记录          "<<endl;
	cout<<"                         *  0   退出系统                                   "<<endl;
	cout<<"                 **********************************************************"<<endl;
}
void display(student stu[],int len){system("cls");
	cout<<"表中现有的记录为："<<endl;
	cout<<"学号\t姓名\t语文\t数学\t英语\t"<<endl;
	for(int i=0;i<len ;i++ ){
	cout<<stu[i].num<<'\t'<<stu[i].name<<'\t';
	for(int j=0;j<3;j++){
	cout<<stu[i].s[j]<<'\t';
	}
	cout<<endl;
	}
	fflush(stdin);
	getchar();
}

void search(student stu[],int len){
	
int choice,i,j;
  char num[8],name[20];
  system("cls");
  cout<<"1.按学号查询    2.按姓名查询\n";
  cout<<"输入查找方式[1,2]:";
  cin>>choice;
  if(choice==1)
  {  cout<<"输入学号:"<<endl;
     cin>>num;
     for(i=0;i<len;i++)
     if(strcmp(stu[i].num,num)==0)
     { cout<<"学号\t姓名\t语文\t数学\t英语\t总分"<<endl;   
	 cout<<stu[i].num<<'\t'<<stu[i].name<<'\t';
	 for(j=0;j<3;j++)
	    cout<<stu[i].s[j]<<"\t";
	 cout<<stu[i].s[0]+stu[i].s[1]+stu[i].s[2]<<endl;
	 cout<<"按任意键继续"<<endl;
	 fflush(stdin);getchar(); return;
	}
	cout<<"\n未找到该生记录，按任意键继续\n";
	fflush(stdin);getchar();  return ;
   }	
 else if(choice==2)
   { cout<<"输入姓名:"<<endl;
     cin>>name;
     for(i=0;i<len;i++)
     if(strcmp(stu[i].name,name)==0)
     { cout<<"学号\t姓名\t语文\t数学\t英语\t总分"<<endl;   
	 cout<<stu[i].num<<'\t'<<stu[i].name<<'\t';
	 for(j=0;j<3;j++)
		cout<<stu[i].s[j]<<"\t";
	 cout<<stu[i].s[0]+stu[i].s[1]+stu[i].s[2]<<endl;
	 cout<<"按任意键继续"<<endl;
	 fflush(stdin);getchar(); return;
	}
	cout<<"\n未找到该生记录，按任意键继续\n";
	fflush(stdin);getchar();  return; 
    }
    else
    {  cout<<"\n选择错误，按任意键返回"<<endl;
	 fflush(stdin);getchar();
     }
}
int append(student stu[],int len){
	char num[8],ch;system("cls");
	cout<<"请输入你要添加学生学号："<<endl;
	cin>>num;
	if (len!=0){
	for(int i=0;i<len;i++)
    { if(strcmp(stu[i].num,num)==0)
	  {cout<<"\n是否重新输入记录?"<<endl;
		cin>>ch;
		if(ch=='y'||ch=='Y')
		   break;
		else 
			return len;}
	}}
	strcpy(stu[len].num,num);
	cout<<"请输入:\n学生姓名"<<endl;
	cin>>stu[len].name;
	cout<<"语文成绩:"<<endl;
	cin>>stu[len].s[0];
	cout<<"数学成绩:"<<endl;
	cin>>stu[len].s[1];
	cout<<"英语成绩:"<<endl;
	cin>>stu[len].s[2];
	len=len+1;
	cout<<"添加成功！按任意键继续。"<<endl;
	fflush(stdin);getchar();
	return len;
}
int del(student stu[],int len){system("cls");
    int choice,i,j;
	char num[8],name[20];
	if(len==0){cout<<"该表为空，不可删除。按任意键继续。"<<endl;
	           fflush(stdin);getchar();
	            return len;}
	else{
	  cout<<"1.按学号删除    2.按姓名删除\n";
       cout<<"输入删除方式[1,2]:";
	  cin>>choice;
	  if(choice==1)
	  {cout<<"请输入删除的学号"<<endl;
	    cin>>num;
		 for(i=0;i<len;i++)
       if(strcmp(stu[i].num,num)==0)
        {
	     for(j=i;j<len;j++)
		 {strcpy(stu[j].num,stu[j+1].num);
		  strcpy(stu[j].name,stu[j+1].name);
           stu[j].s[0]=stu[j+1].s[0];
		   stu[j].s[1]=stu[j+1].s[1];
		   stu[j].s[2]=stu[j+1].s[2];
		   
		 }len=len-1;
	   }}
	  else if(choice==2)
	  {cout<<"请输入删除的姓名"<<endl;
	    cin>>name;
		 for(i=0;i<len;i++)
       if(strcmp(stu[i].name,name)==0)
        {
	     for(j=i;j<len;j++)
		 {strcpy(stu[j].num,stu[j+1].num);
		  strcpy(stu[j].name,stu[j+1].name);
           stu[j].s[0]=stu[j+1].s[0];
		   stu[j].s[1]=stu[j+1].s[1];
		   stu[j].s[2]=stu[j+1].s[2];
		  } len=len-1;
	   }}
	  else{ cout<<"\n选择错误，按任意键返回"<<endl;
	  fflush(stdin);getchar();return len;
	  }
	cout<<"删除成功！按任意键继续。"<<endl;
	fflush(stdin);getchar();
	return len;
	}}
void modify(student stu[],int len){system("cls");
    int choice,i,j;int b=0;
	char num[8],name[20];
	student a;

	if(len==0){cout<<"该表为空，不可修改。按任意键继续。"<<endl;
	           fflush(stdin);getchar();
	            return ;}
	else{
		while(b!=1){
	  cout<<"1.按学号修改    2.按姓名修改\n";
       cout<<"输入修改方式[1,2]:";
	  cin>>choice;
	  
	  if(choice==1)
	  {cout<<"请输入修改的学号"<<endl;
	    cin>>num;
		 for(i=0;i<len;i++)
       if(strcmp(stu[i].num,num)==0)
        {
	     
	cout<<"语文成绩:"<<endl;
	cin>>a.s[0];stu[i].s[0]=a.s[0];
	cout<<"数学成绩:"<<endl;
	cin>>a.s[1];stu[i].s[1]=a.s[1];
	cout<<"英语成绩:"<<endl;
	cin>>a.s[2];stu[i].s[2]=a.s[2];b=1;
	   }
	   if(b==0){cout<<"该学生不存在，请重新输入学号。"<<endl;} 
	  }
	  else if(choice==2)
	  {cout<<"请输入修改的姓名"<<endl;
	    cin>>name;
		 for(i=0;i<len;i++)
       if(strcmp(stu[i].name,name)==0)
	   {
	cout<<"语文成绩:"<<endl;
	cin>>a.s[0];stu[i].s[0]=a.s[0];
	cout<<"数学成绩:"<<endl;
	cin>>a.s[1];stu[i].s[1]=a.s[1];
	cout<<"英语成绩:"<<endl;
	cin>>a.s[2];stu[i].s[2]=a.s[2];b=1;
		  }
	   if(b==0){cout<<"该学生不存在，请重新输入姓名。"<<endl;}
	    }
	  else{ cout<<"\n选择错误，按任意键返回"<<endl;
	  fflush(stdin);getchar();return ;
	  }}
	cout<<"修改成功！按任意键继续。"<<endl;
	fflush(stdin);getchar();
	return ;}
	}
	
void count(student stu[],int len){system("cls");
if(len==0){cout<<"无数据！ 按任意键退出";}
else{
	cout<<"************************************************************"<<endl;
	cout<<"  *  1   各科目最高分与最低分    *  2   总分最高分与最低分"<<endl;
	cout<<"  *  3   各科目各分数段人数     "<<endl;
	cout<<"************************************************************"<<endl;
	int choice;
	cin>>choice;
	if(choice==1){
	int a=stu[0].s[0],b=stu[0].s[1],c=stu[0].s[2];
	int d=stu[0].s[0],e=stu[0].s[1],f=stu[0].s[2];
	   for(int i=0;i<len;i++)
	   {if(stu[i].s[0]>a)a=stu[i].s[0];
	    if(stu[i].s[1]>b)b=stu[i].s[1];
	    if(stu[i].s[2]>c)c=stu[i].s[2];
		if(stu[i].s[0]<d)d=stu[i].s[0];
	    if(stu[i].s[1]<e)e=stu[i].s[1];
	    if(stu[i].s[2]<f)f=stu[i].s[2];
	    }
	cout<<"语文最高分为:"<<a<<' '<<"最低分为:"<<d<<endl;
	cout<<"数学最高分为:"<<b<<' '<<"最低分为:"<<e<<endl;
	cout<<"英语最高分为:"<<c<<' '<<"最低分为:"<<f<<endl;
	}
	else if(choice==2){int sum[100000],max,min;
	for(int i=0;i<len;i++)
	{sum[i]=stu[i].s[0]+stu[i].s[1]+stu[i].s[2];}
	max=min=sum[0];
	for(int i=0;i<len;i++)
	{if(sum[i]>max)max=sum[i];
	 if(sum[i]<min)min=sum[i];
	}
	cout<<"总分最高分为:"<<max<<' '<<"最低分为:"<<min<<endl;
	}
	else if(choice==3){
	int ab=0,aj=0,az=0,al=0,ay=0,
	   bb=0,bj=0,bz=0,bl=0,by=0,
	   cb=0,cj=0,cz=0,cl=0,cy=0;
	 for(int i=0;i<len;i++)
	   {if(stu[i].s[0]<60)ab++;
	    if(stu[i].s[0]>=60&&stu[i].s[0]<70)aj++;
	    if(stu[i].s[0]>=70&&stu[i].s[0]<80)az++;
	    if(stu[i].s[0]>=80&&stu[i].s[0]<90)al++;
		if(stu[i].s[0]>=90)ay++;
	    if(stu[i].s[1]<60)bb++;
	    if(stu[i].s[1]>=60&&stu[i].s[1]<70)bj++;
	    if(stu[i].s[1]>=70&&stu[i].s[1]<80)bz++;
	    if(stu[i].s[1]>=80&&stu[i].s[1]<90)bl++;
		if(stu[i].s[1]>=90)by++;
		if(stu[i].s[2]<60)cb++;
	    if(stu[i].s[2]>=60&&stu[i].s[2]<70)cj++;
	    if(stu[i].s[2]>=70&&stu[i].s[2]<80)cz++;
	    if(stu[i].s[2]>=80&&stu[i].s[2]<90)cl++;
		if(stu[i].s[2]>=90)cy++;
	    }
	 cout<<"科目\t不及格\t及格\t中\t良\t优"<<endl;
     cout<<"语文\t"<<ab<<'\t'<<aj<<'\t'<<az<<'\t'<<al<<'\t'<<ay<<endl;
	 cout<<"数学\t"<<bb<<'\t'<<bj<<'\t'<<bz<<'\t'<<bl<<'\t'<<by<<endl;
	 cout<<"英语\t"<<cb<<'\t'<<cj<<'\t'<<cz<<'\t'<<cl<<'\t'<<cy<<endl;
	}else {cout<<"输入错误。按任意键继续。"<<endl;}

}fflush(stdin);getchar();
	return ;}
void sort(student stu[],int len){system("cls");

	cout<<"************************************************************"<<endl;
	cout<<"  *  1   按总分成绩排序    *  2   按学号排序"<<endl;
	cout<<"************************************************************"<<endl;
	int choice;cin>>choice;
	if(choice==1)
	{cout<<"排序成功！按任意键退出。请到显示中查看。"<<endl;
	int sum[100000],imax=0;
	student t;
	for(int i=0;i<len;i++)
	{sum[i]=stu[i].s[0]+stu[i].s[1]+stu[i].s[2];}
	for(int i=0;i<len;i++)
	{for(int j=i;j<len;j++)
	  {if(sum[j]>sum[imax])imax=j;}
	  t=stu[imax];stu[imax]=stu[i];stu[i]=t;
	}
	}
	else if(choice==2){
	cout<<"排序成功！按任意键退出。请到显示中查看。"<<endl;
	int imax=0;student g;
	for(int i=0;i<len;i++)
	{for(int j=i;j<len;j++)
	  {if(strcmp(stu[j].num,stu[imax].num)==-1)imax=j;}
	  g=stu[imax];stu[imax]=stu[i];stu[i]=g;
	}
	
	
	}else{cout<<"输入错误！按任意键返回。";}


	fflush(stdin);getchar();
	return ;
}
void save(student stu[],int len){
	system("cls");
	FILE *fp;
	if((fp=fopen("student_dat","wb+"))==NULL){cout<<1<<endl;exit(1);}
	for(int i=0;i<len;i++){
	fwrite(&stu[i],sizeof(student),1,fp);
	}
	fclose(fp);cout<<"保存成功，按任意键继续...\n";
	fflush(stdin);
	getchar();
	return ;
	





//FILE *fp;
//	int i;
//	if((fp=fopen("student_list_dat","wb+"))==NULL)
//	{
//		cout<<"无法打开文件\n";
//		exit(1);
//	}
//	for(i=0;i<len;i++)
//		fwrite(&stu[i],sizeof(stu[i]),1,fp);
//	cout<<"保存成功，按任意键继续...\n";
//	fflush(stdin);
//	getchar();
//	return;
}
int readfile(student stu[]){


	FILE *fp;
	int i=0;
	if((fp=fopen("student_dat","ab+"))==NULL){cout<<1<<endl;exit(1);}
	while(!feof(fp))
	{
	  fread(&stu[i],sizeof(student),1,fp);
	  i++;
	}fclose(fp);
	return i-1;




	/*int len=0;
	FILE *fp;
	int i=0;
	if((fp=fopen("student_list_dat","ab+"))==NULL)
	{
		cout<<"无法打开文件\n";
		exit(1);
	}
	while(!feof(fp))
	{
		fread(&stu[i],sizeof(stu[i]),1,fp);
		i++;
	}
	fclose(fp);
	return i-1;
*/
}