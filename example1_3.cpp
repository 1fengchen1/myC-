/*
一个基本类型数据的指针申请和删除方法:
指针名 = new 结构名
delete 指针名
*/

#include <iostream>					//包含头文件
using namespace std;				//使用命名空间

/*
void main()
{
	double *p;						//声明double型指针
	p = new double[3];				//分配3个double型数据的存储空间
	for (int i = 0; i < 3; i++)		//定义对象i的初值为0
		cin >> *(p + i);			//将输入数据存入指定地址
	for (int i = 0; i < 3; i++)
		cout << *(p + i) << " ";	//将地址里的内容输出
	delete p;
}
*/