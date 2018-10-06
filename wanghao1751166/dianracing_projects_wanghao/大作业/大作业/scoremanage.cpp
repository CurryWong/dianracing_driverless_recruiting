#include<iostream>
#include"managelib.h"
#define N 20
using namespace std;
void main(){
	student stu[N];
	int len ;
	int choice;
	char c;
	len=readfile(stu);
	cout<<"欢迎来到学生管理系统！ 按任意键继续。";
	fflush(stdin);
	getchar();
	while(1){ system ("cls");
	menu();
    cout<<"请输入选项！"<<endl;
	cin>>choice;
	if(choice==0)
	{cout<<"是否保存数据？"<<endl;
	 cin>>c;
	 if(c=='y'||c=='Y'){
	 save(stu,len);
	 }
	cout<<"谢谢使用！按任意键退出！"<<endl;
	fflush(stdin);
	getchar();
	break;
	}
	switch(choice)
	{ case 1:display(stu,len);break;
	    case 2:search(stu,len);break;
	    case 3:len=append(stu,len);break;
	    case 4:len=del(stu,len);break;
	    case 5:modify(stu,len);break;
	    case 6:count(stu,len);break;
	    case 7:sort(stu,len);break;
	    case 8:save(stu,len);break;
	default:
		cout<<"\n输入错误，按任意键继续"<<endl;
		fflush(stdin);
		getchar();
	
	}



	
	}



}


//#include<iostream>
//#include"managelib.h"
//using namespace std;
//#define N 20
//void main()
//{	struct student stu[N];
//	int len;
//	int choice;
//	char ch;
//	len=readfile(stu); 
//	cout<<"按任意键继续"<<endl;
//	fflush(stdin);getchar();
//	while(1) 
//	{   system("cls"); 
//	    menu();        
//	    cout<<"选择菜单项（0~8）:";
//	    cin>>choice;
//          if(choice==0) 
//	    {	cout<<"\n保存到文件吗?"<<endl;
//		cin>>ch;
//		if(ch=='y'||ch=='Y')
//		   save(stu,len);
//		cout<<"\n欢迎再次使用，按任意键退出"<<endl;
//		fflush(stdin);
//		getchar();  break;
//	    }
// switch(choice)
//	{
//	    case 1:display(stu,len);break;
//	    case 2:search(stu,len);break;
//	    case 3:len=append(stu,len);break;
//	    case 4:len=del(stu,len);break;
//	    case 5:modify(stu,len);break;
//	    case 6:count(stu,len);break;
//	    case 7:sort(stu,len);break;
//	    case 8:save(stu,len);break;
//	    default:
//		cout<<"\n输入错误，按任意键继续"<<endl;
//		fflush(stdin);
//		getchar();
//	 }
//    }
//  }
