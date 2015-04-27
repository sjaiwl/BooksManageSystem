#pragma once
#ifndef READER_H
#define READER_H
#include<iostream>//使用标准输入输出流
#include<fstream>//使用文件流
#include<sstream>//使用string流
using namespace std;//使用名空间
class reader
{
private:
    string name;//姓名
    string number;//学号
    string code;//密码
public:
	reader(void);

	void setName(string n);//设定姓名
	void setNumber(string nu);//设定学号
	void setCode(string c);//设定密码

	string getName()const;//获得姓名
	string getNumber()const;//获得学号
	string getCode()const;//获得密码

	int getInformation();//验证学生信息
	void reviseCode();//修改密码
	void search();//声明查询函数
	void borrowBook();//声明借书函数
	void returnBook();//声明还书函数

	~reader(void);
};
#endif

