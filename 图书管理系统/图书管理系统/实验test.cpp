#include"book.h"//头文件
#include"manage.h"
#include"reader.h"
#include<iostream>
using namespace std;//名空间

//管理员相关函数
void addbook()//进入添加书籍
{
	manage manage1;//实例化对象
	for (int temp=1;temp;)//循环添加书籍
	{
	manage1.add();//调用manage类中的add（）函数
	cout<<"是否继续添加书籍（Y：是，N：否）"<<endl;//判断是否循环
	char a;//定义变量
	cin>>a;
	if(a=='Y') temp=1;
	else if(a=='N') temp=0;
	else 
	{ 
		cout<<"输入错误!"<<endl; temp=1;//输入错误提示
	}

    }
}

void deletebook()//进入删除书籍
{
	manage manage6;//实例化对象
	for (int temp=1;temp;)//循环删除书籍
	{
	manage6.deleteBook();//调用manage类中的deleteBook()函数
	cout<<"是否继续删除书籍（Y：是，N：否）"<<endl;//判断是否循环
	char a;//定义变量
	cin>>a;
	if(a=='Y') temp=1;
	else if(a=='N') temp=0;
	else 
	{ 
		cout<<"输入错误!"<<endl; temp=1;//输入错误提示
	}

    }
}

void changebook()//修改书籍信息
{
	manage manage2;//实例化对象
    for (int temp=1;temp;)//循环修改书籍
    {
	manage2.revise();//调用manage类中revise（）函数
	cout<<"是否继续修改（Y：是，N：否）"<<endl;//循环判断
	char a;//定义变量
	cin>>a;
	if(a=='Y') temp=1;
	else if(a=='N') temp=0;
	else 
	{
		cout<<"输入错误!"<<endl; temp=1;//输入错误提示
	}
	}
}


void addReader()//增加读者函数
{
	manage manage3;//实例化对象
	for (int temp=1;temp;)//循环增加
	{
	manage3.addReader();//调用manage类中addReader（）函数
	cout<<"是否继续添加读者（Y：是，N：否）"<<endl;//循环判断
	char a;//定义变量
	cin>>a;
	if(a=='Y') temp=1;
	else if(a=='N') temp=0;
	else 
	{
		cout<<"输入错误!"<<endl; temp=1;//输入错误提示
	}
	}
}

void deleteReader()//删除读者函数
{
	manage manage7;//实例化对象
	for (int temp=1;temp;)//循环删除
	{
	manage7.deleteReader();//调用manage类中deleteReader（）函数
	cout<<"是否继续删除读者（Y：是，N：否）"<<endl;//循环判断
	char a;//定义变量
	cin>>a;
	if(a=='Y') temp=1;
	else if(a=='N') temp=0;
	else 
	{
		cout<<"输入错误!"<<endl; temp=1;//输入错误提示
	}
	}
}

void getManage()//管理员登陆函数
{
	manage manage4;//实例化对象
	for(int temp=1;temp;)//循环登陆
	{
	int b;//接受getManage()的返回值
	b=manage4.getManage();//调用manage类中的getManage()函数
	if(b==1)//登陆成功
	{
		while(true)
		{
		system("cls");//清除屏幕内容
		cout<<"***************************"<<endl;
		cout<<"欢迎进入图书管理系统！"<<endl;
		cout<<"请选择相应功能："<<endl;
		cout<<"1.增加读者"<<endl;
		cout<<"2.删除读者"<<endl;
		cout<<"3.增加书籍信息"<<endl;
		cout<<"4.删除书籍信息"<<endl;
		cout<<"5.修改书籍信息"<<endl;
		cout<<"6.退出"<<endl;
		int t;
		cin>>t;
		switch(t)
			{
			case 1:addReader();break;//调用addReader()函数
			case 2:deleteReader();break;//调用deleteReader()函数
			case 3:addbook();break;//调用addbook()函数
			case 4:deletebook();break;//调用deletebook()函数
			case 5:changebook();break;//调用changebook()函数
			case 6:
				cout<<"感谢您的使用！"<<endl;//退出
				system("pause");
				exit(0);
			
			default:
				cout<<"输入错误！"<<endl;//输入错误
			}

		}

	}

	else//登录失败判断是否再次登陆
	{
	cout<<"是否继续登陆（Y：是，N：否）"<<endl;//循环判断
	char a;//定义变量
	cin>>a;
	if(a=='Y') temp=1;
	else if(a=='N') temp=0;
	else 
	{
		cout<<"输入错误!"<<endl; temp=1;//输入错误提示
	}
	}
	}

}

void reviseInformation()//管理员修改信息函数
{
	manage manage5;//实例化对象
	for (int temp=1;temp;)//循环修改
	{
	manage5.reviseInformation();//调用manage类中的reviseInformation()函数
	cout<<"是否继续修改（Y：是，N：否）"<<endl;//循环判断
	char a;//定义变量
	cin>>a;
	if(a=='Y') temp=1;
	else if(a=='N') temp=0;
	else 
	{
		cout<<"输入错误!"<<endl; temp=1;//输入错误提示
	}
	}
}



//读者相关函数
void search()//查询函数
{
	reader reader3;//实例化对象
	for (int temp=1;temp;)//循环查询
	{
	reader3.search();//调用reader类中的search()函数
	cout<<"是否继续查询（Y：是，N：否）"<<endl;//循环判断
	char a;//定义变量
	cin>>a;
	if(a=='Y') temp=1;
	else if(a=='N') temp=0;
	else
	{
		cout<<"输入错误!"<<endl; temp=1;//输入错误提示
	}
    }
}

void borrowBook()//借书函数
{
	reader reader4;//实例化对象
	for (int temp=1;temp;)//循环借书
	{
	reader4.borrowBook();//调用reader类中的borrowBook()函数
	cout<<"是否继续借书（Y：是，N：否）"<<endl;//循环判断
	char a;//定义变量
	cin>>a;
	if(a=='Y') temp=1;
	else if(a=='N') temp=0;
	else 
	{
		cout<<"输入错误!"<<endl; temp=1;//输入错误提示
	}
	}
}


void reviseCode()//修改密码函数
{
	reader reader6;//实例化对象
	for (int temp=1;temp;)//循环修改密码
	{
	reader6.reviseCode();//调用reader类中的reviseCode()函数
	cout<<"是否继续修改（Y：是，N：否）"<<endl;//循环判断
	char a;//定义变量
	cin>>a;
	if(a=='Y') temp=1;
	else if(a=='N') temp=0;
	else
	{
		cout<<"输入错误!"<<endl; temp=1;//输入错误提示
	}
	}
}

void returnBook()//还书函数
{
	reader reader5;//实例化对象
	for (int temp=1;temp;)//循环还书
	{
	reader5.returnBook();//调用reader类中的returnBook()函数
	cout<<"是否继续还书（Y：是，N：否）"<<endl;//循环判断
	char a;//定义变量
	cin>>a;
	if(a=='Y') temp=1;
	else if(a=='N') temp=0;
	else 
	{
		cout<<"输入错误"<<endl; temp=1;//输入错误提示
	}
	}
}

void getStudent()//登录函数
{
	reader reader5;//实例化对象
	for (int temp=1;temp;)//循环登陆
	{
	int a;//接受getInformation()的返回值
	a=reader5.getInformation();//调用reader类中的getInformation()函数
	if(a==1)//登陆成功
	{
		while(true)
		{
		system("cls");//清除屏幕内容
		cout<<"***************************"<<endl;
		cout<<"欢迎进入图书管理系统！"<<endl;
		cout<<"请选择相应功能："<<endl;
		cout<<"1.查询书籍信息"<<endl;
		cout<<"2.借阅书籍"<<endl;
		cout<<"3.返还书籍"<<endl;
		cout<<"4.退出"<<endl;
		int t;
		cin>>t;
		switch(t)
			{
			case 1:search();break;//调用search()函数
			case 2:borrowBook();break;//调用borrowBook()函数
			case 3:returnBook();break;//调用returnBook()函数
			case 4:
				cout<<"感谢您的使用！"<<endl;//退出
				system("pause");
				exit(0);
			default:
				cout<<"输入错误！"<<endl;//输入错误
			}

		}

	}
	else
	{
	cout<<"是否继续输入（Y：是，N：否）"<<endl;//循环判断
	char a;
	cin>>a;
	if(a=='Y') temp=1;
	else if(a=='N') temp=0;
	else 
	{
		cout<<"输入错误!"<<endl; temp=1;//输入错误提示
	}
	}
	}
}


//菜单显示函数
void display_2()
{   
   
	while(true)
	{
        system("cls");//清除屏幕内容
		cout<<"***************************"<<endl;
		cout<<"欢迎进入图书管理系统！"<<endl;
		cout<<"1.登陆账号"<<endl;
		cout<<"2.修改管理员信息"<<endl;
		cout<<"3.退出"<<endl;
		int t;
	    cin>>t;
	    switch(t)
	    {
	     case 1:getManage();break;//调用getManage()函数
	     case 2:reviseInformation();break;//调用reviseInformation()函数
	     case 3:
			 cout<<"感谢您的使用！"<<endl;//退出
			 system("pause");
			 exit(0);
		 default :
		     cout<<"输入错误！"<<endl;//输入错误
	     }
	}
}




void display_3()
{
	while(true)
	{
		system("cls");//清除屏幕内容
		cout<<"***************************"<<endl;
		cout<<"欢迎进入图书管理系统！"<<endl;
		cout<<"1.登陆账号"<<endl;
		cout<<"2.修改读者信息"<<endl;
		cout<<"3.退出"<<endl;
		int t;
	    cin>>t;
	    switch(t)
	    {
	     case 1:getStudent();break;//调用getStudent()函数
	     case 2:reviseCode();break;//调用reviseCode()函数
		 case 3:
			 cout<<"感谢您的使用！"<<endl;//退出
	         system("pause");
			 exit(0);
	     default :
		      cout<<"输入错误！"<<endl;//错误提示
	    }

	}

}
	


void display_1()
{
	while(true)
	{
	system("cls");//清除屏幕内容
	cout<<"***************************"<<endl;
	cout<<"欢迎进入图书管理系统！"<<endl;
	cout<<"请选择以何种身份登录？"<<endl;
	cout<<"1.管理员"<<endl;
	cout<<"2.读者"<<endl;
	cout<<"3.退出"<<endl;
	int t;
	cin>>t;
	switch(t)
	{
	case 1:display_2();break;//调用display_2()函数
	case 2:display_3();break;//调用display_3()函数
	case 3:
		cout<<"感谢您的使用！"<<endl;//退出
		system("pause");
		exit(0);
	default :
		cout<<"输入错误！"<<endl;//错误提示
	}

	}

}



//主函数
int main()
{
	while(1)
	{
		display_1();//调用display_1()函数
		system("pause");
	}
	return 0;
}
