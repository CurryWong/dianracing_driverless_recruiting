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
	cout<<"��ӭ����ѧ������ϵͳ�� �������������";
	fflush(stdin);
	getchar();
	while(1){ system ("cls");
	menu();
    cout<<"������ѡ�"<<endl;
	cin>>choice;
	if(choice==0)
	{cout<<"�Ƿ񱣴����ݣ�"<<endl;
	 cin>>c;
	 if(c=='y'||c=='Y'){
	 save(stu,len);
	 }
	cout<<"ллʹ�ã���������˳���"<<endl;
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
		cout<<"\n������󣬰����������"<<endl;
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
//	cout<<"�����������"<<endl;
//	fflush(stdin);getchar();
//	while(1) 
//	{   system("cls"); 
//	    menu();        
//	    cout<<"ѡ��˵��0~8��:";
//	    cin>>choice;
//          if(choice==0) 
//	    {	cout<<"\n���浽�ļ���?"<<endl;
//		cin>>ch;
//		if(ch=='y'||ch=='Y')
//		   save(stu,len);
//		cout<<"\n��ӭ�ٴ�ʹ�ã���������˳�"<<endl;
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
//		cout<<"\n������󣬰����������"<<endl;
//		fflush(stdin);
//		getchar();
//	 }
//    }
//  }
