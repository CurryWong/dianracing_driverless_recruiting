#include "iostream"
#include "managelib.h"
using namespace std;
void menu()
{
	cout<<"                 **********************************************************"<<endl;
	cout<<"                         *  1   ��ʾ��¼          *  2   ���Ҽ�¼          "<<endl;
	cout<<"                         *  3   ��Ӽ�¼          *  4   ɾ����¼          "<<endl;
	cout<<"                         *  5   �޸ļ�¼          *  6   ͳ�Ƽ�¼          "<<endl;
	cout<<"                         *  7   �����¼          *  8   �����¼          "<<endl;
	cout<<"                         *  0   �˳�ϵͳ                                   "<<endl;
	cout<<"                 **********************************************************"<<endl;
}
void display(student stu[],int len){system("cls");
	cout<<"�������еļ�¼Ϊ��"<<endl;
	cout<<"ѧ��\t����\t����\t��ѧ\tӢ��\t"<<endl;
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
  cout<<"1.��ѧ�Ų�ѯ    2.��������ѯ\n";
  cout<<"������ҷ�ʽ[1,2]:";
  cin>>choice;
  if(choice==1)
  {  cout<<"����ѧ��:"<<endl;
     cin>>num;
     for(i=0;i<len;i++)
     if(strcmp(stu[i].num,num)==0)
     { cout<<"ѧ��\t����\t����\t��ѧ\tӢ��\t�ܷ�"<<endl;   
	 cout<<stu[i].num<<'\t'<<stu[i].name<<'\t';
	 for(j=0;j<3;j++)
	    cout<<stu[i].s[j]<<"\t";
	 cout<<stu[i].s[0]+stu[i].s[1]+stu[i].s[2]<<endl;
	 cout<<"�����������"<<endl;
	 fflush(stdin);getchar(); return;
	}
	cout<<"\nδ�ҵ�������¼�������������\n";
	fflush(stdin);getchar();  return ;
   }	
 else if(choice==2)
   { cout<<"��������:"<<endl;
     cin>>name;
     for(i=0;i<len;i++)
     if(strcmp(stu[i].name,name)==0)
     { cout<<"ѧ��\t����\t����\t��ѧ\tӢ��\t�ܷ�"<<endl;   
	 cout<<stu[i].num<<'\t'<<stu[i].name<<'\t';
	 for(j=0;j<3;j++)
		cout<<stu[i].s[j]<<"\t";
	 cout<<stu[i].s[0]+stu[i].s[1]+stu[i].s[2]<<endl;
	 cout<<"�����������"<<endl;
	 fflush(stdin);getchar(); return;
	}
	cout<<"\nδ�ҵ�������¼�������������\n";
	fflush(stdin);getchar();  return; 
    }
    else
    {  cout<<"\nѡ����󣬰����������"<<endl;
	 fflush(stdin);getchar();
     }
}
int append(student stu[],int len){
	char num[8],ch;system("cls");
	cout<<"��������Ҫ���ѧ��ѧ�ţ�"<<endl;
	cin>>num;
	if (len!=0){
	for(int i=0;i<len;i++)
    { if(strcmp(stu[i].num,num)==0)
	  {cout<<"\n�Ƿ����������¼?"<<endl;
		cin>>ch;
		if(ch=='y'||ch=='Y')
		   break;
		else 
			return len;}
	}}
	strcpy(stu[len].num,num);
	cout<<"������:\nѧ������"<<endl;
	cin>>stu[len].name;
	cout<<"���ĳɼ�:"<<endl;
	cin>>stu[len].s[0];
	cout<<"��ѧ�ɼ�:"<<endl;
	cin>>stu[len].s[1];
	cout<<"Ӣ��ɼ�:"<<endl;
	cin>>stu[len].s[2];
	len=len+1;
	cout<<"��ӳɹ����������������"<<endl;
	fflush(stdin);getchar();
	return len;
}
int del(student stu[],int len){system("cls");
    int choice,i,j;
	char num[8],name[20];
	if(len==0){cout<<"�ñ�Ϊ�գ�����ɾ�����������������"<<endl;
	           fflush(stdin);getchar();
	            return len;}
	else{
	  cout<<"1.��ѧ��ɾ��    2.������ɾ��\n";
       cout<<"����ɾ����ʽ[1,2]:";
	  cin>>choice;
	  if(choice==1)
	  {cout<<"������ɾ����ѧ��"<<endl;
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
	  {cout<<"������ɾ��������"<<endl;
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
	  else{ cout<<"\nѡ����󣬰����������"<<endl;
	  fflush(stdin);getchar();return len;
	  }
	cout<<"ɾ���ɹ����������������"<<endl;
	fflush(stdin);getchar();
	return len;
	}}
void modify(student stu[],int len){system("cls");
    int choice,i,j;int b=0;
	char num[8],name[20];
	student a;

	if(len==0){cout<<"�ñ�Ϊ�գ������޸ġ��������������"<<endl;
	           fflush(stdin);getchar();
	            return ;}
	else{
		while(b!=1){
	  cout<<"1.��ѧ���޸�    2.�������޸�\n";
       cout<<"�����޸ķ�ʽ[1,2]:";
	  cin>>choice;
	  
	  if(choice==1)
	  {cout<<"�������޸ĵ�ѧ��"<<endl;
	    cin>>num;
		 for(i=0;i<len;i++)
       if(strcmp(stu[i].num,num)==0)
        {
	     
	cout<<"���ĳɼ�:"<<endl;
	cin>>a.s[0];stu[i].s[0]=a.s[0];
	cout<<"��ѧ�ɼ�:"<<endl;
	cin>>a.s[1];stu[i].s[1]=a.s[1];
	cout<<"Ӣ��ɼ�:"<<endl;
	cin>>a.s[2];stu[i].s[2]=a.s[2];b=1;
	   }
	   if(b==0){cout<<"��ѧ�������ڣ�����������ѧ�š�"<<endl;} 
	  }
	  else if(choice==2)
	  {cout<<"�������޸ĵ�����"<<endl;
	    cin>>name;
		 for(i=0;i<len;i++)
       if(strcmp(stu[i].name,name)==0)
	   {
	cout<<"���ĳɼ�:"<<endl;
	cin>>a.s[0];stu[i].s[0]=a.s[0];
	cout<<"��ѧ�ɼ�:"<<endl;
	cin>>a.s[1];stu[i].s[1]=a.s[1];
	cout<<"Ӣ��ɼ�:"<<endl;
	cin>>a.s[2];stu[i].s[2]=a.s[2];b=1;
		  }
	   if(b==0){cout<<"��ѧ�������ڣ�����������������"<<endl;}
	    }
	  else{ cout<<"\nѡ����󣬰����������"<<endl;
	  fflush(stdin);getchar();return ;
	  }}
	cout<<"�޸ĳɹ����������������"<<endl;
	fflush(stdin);getchar();
	return ;}
	}
	
void count(student stu[],int len){system("cls");
if(len==0){cout<<"�����ݣ� ��������˳�";}
else{
	cout<<"************************************************************"<<endl;
	cout<<"  *  1   ����Ŀ��߷�����ͷ�    *  2   �ܷ���߷�����ͷ�"<<endl;
	cout<<"  *  3   ����Ŀ������������     "<<endl;
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
	cout<<"������߷�Ϊ:"<<a<<' '<<"��ͷ�Ϊ:"<<d<<endl;
	cout<<"��ѧ��߷�Ϊ:"<<b<<' '<<"��ͷ�Ϊ:"<<e<<endl;
	cout<<"Ӣ����߷�Ϊ:"<<c<<' '<<"��ͷ�Ϊ:"<<f<<endl;
	}
	else if(choice==2){int sum[100000],max,min;
	for(int i=0;i<len;i++)
	{sum[i]=stu[i].s[0]+stu[i].s[1]+stu[i].s[2];}
	max=min=sum[0];
	for(int i=0;i<len;i++)
	{if(sum[i]>max)max=sum[i];
	 if(sum[i]<min)min=sum[i];
	}
	cout<<"�ܷ���߷�Ϊ:"<<max<<' '<<"��ͷ�Ϊ:"<<min<<endl;
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
	 cout<<"��Ŀ\t������\t����\t��\t��\t��"<<endl;
     cout<<"����\t"<<ab<<'\t'<<aj<<'\t'<<az<<'\t'<<al<<'\t'<<ay<<endl;
	 cout<<"��ѧ\t"<<bb<<'\t'<<bj<<'\t'<<bz<<'\t'<<bl<<'\t'<<by<<endl;
	 cout<<"Ӣ��\t"<<cb<<'\t'<<cj<<'\t'<<cz<<'\t'<<cl<<'\t'<<cy<<endl;
	}else {cout<<"������󡣰������������"<<endl;}

}fflush(stdin);getchar();
	return ;}
void sort(student stu[],int len){system("cls");

	cout<<"************************************************************"<<endl;
	cout<<"  *  1   ���ֳܷɼ�����    *  2   ��ѧ������"<<endl;
	cout<<"************************************************************"<<endl;
	int choice;cin>>choice;
	if(choice==1)
	{cout<<"����ɹ�����������˳����뵽��ʾ�в鿴��"<<endl;
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
	cout<<"����ɹ�����������˳����뵽��ʾ�в鿴��"<<endl;
	int imax=0;student g;
	for(int i=0;i<len;i++)
	{for(int j=i;j<len;j++)
	  {if(strcmp(stu[j].num,stu[imax].num)==-1)imax=j;}
	  g=stu[imax];stu[imax]=stu[i];stu[i]=g;
	}
	
	
	}else{cout<<"������󣡰���������ء�";}


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
	fclose(fp);cout<<"����ɹ��������������...\n";
	fflush(stdin);
	getchar();
	return ;
	





//FILE *fp;
//	int i;
//	if((fp=fopen("student_list_dat","wb+"))==NULL)
//	{
//		cout<<"�޷����ļ�\n";
//		exit(1);
//	}
//	for(i=0;i<len;i++)
//		fwrite(&stu[i],sizeof(stu[i]),1,fp);
//	cout<<"����ɹ��������������...\n";
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
		cout<<"�޷����ļ�\n";
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