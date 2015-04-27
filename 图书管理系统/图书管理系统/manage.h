#pragma once
#ifndef MANAGE_H
#define MANAGE_H
#include<iostream>//使用标准输入输出流
#include<fstream>//使用文件流
#include<sstream>//使用string流
using namespace std;//使用名空间
class manage
{
private:
	string number;//登录号码
	string code;//密码
public:
	manage();//默认构造函数
	int getManage();//声明登录函数
	void reviseInformation();//声明修改信息函数
	void deleteBook();//声明删除书籍函数
    void add(); //申明添加书籍函数
	void revise();//声明修改书籍信息函数
	void addReader();//声明增加读者函数
	void deleteReader();//声明删除读者函数
	~manage();//析构函数
};
#endif
