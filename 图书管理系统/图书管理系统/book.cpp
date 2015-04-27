#include "book.h"
book::book()//构造函数
	{ 
	    bookName="未赋值";
	    bookISBN=NULLID;
	}

string book::getName()const//获得书名
{
	return bookName;
}

string book::getbookAuthor()const//获得作者
	{
		return bookAuthor;
    }

string book::getbookISBN()const//获得ISBN
	{
		return bookISBN;
	}

string book::gettype()const//获得类型
	{
		return type;
	}

string book::getbookPress()const//获得出版社
	{
		return bookPress;
	}

int book::getbookStatue()const//获得状态
	{
		return bookStatue;
	}

void book::setName(string a)//设定书名
	{
		bookName=a;
	}

void book::setAuthor(string b)//设定作者
	{
		bookAuthor=b;
	}

void book::setISBN(string c)//设定ISBN码
	{
		bookISBN=c;
    }

void book::settype(string d)//设定书项
	{
		type=d;
	}

void book::setPress(string e)//设定出版社
	{
		bookPress=e;
	}

void book::setStatue(int f=0)//设定状态
	{
		bookStatue=f;
	}
	
void book::readBookInformation()//读入书籍信息函数
	{
    cout<<"请输入书名："<<endl;//读入书名
	cin>>bookName;
	
    cout<<"请输入作者名："<<endl;//读入作者名
    cin>>bookAuthor;

	cout<<"请输入ISBN码："<<endl;//读入ISBN码
	cin>>bookISBN;

	cout<<"请输入类别："<<endl;//读入类别
	cin>>type;

	cout<<"请输入出版社："<<endl;//读入出版社
	cin>>bookPress;

	cout<<"请输入状态：(0代表在馆，1代表借出)"<<endl;//读入状态
	cin>>bookStatue;
	}

void book::printBookInformation()//输出书籍信息函数
	{
		cout<<"书名："<<bookName<<endl;//输出书名
		cout<<"作者："<<bookAuthor<<endl;//输出作者
		cout<<"ISBN码："<<bookISBN<<endl;//输出ISBN码
		cout<<"类别："<<type<<endl;//输出类别
		cout<<"出版社："<<bookPress<<endl;//输出出版社
		changeStatue();//调用状态改变函数
	}

void book::changeStatue()//判断状态
	{
	if(bookStatue==0)
		{
			cout<<"状态：在馆"<<endl;//输出状态
		}
		else
		{
			cout<<"状态：借出"<<endl;//输出状态
		}
		
	}

book::~book()
	{
    }