/*
初次认识C++函数和对象
*/


#include <iostream>								//包含头文件
using namespace std;							//使用命名空间

//int result(int, int);							//result函数原型声明
//
//const int k = 2;								//定义常量
//
//struct Point {									//定义结构体point
//	int x, y;
//};

/*****************************

函 数：result
参 数：整形对象a和b
返回值：整形对象

*****************************/

//int result(int a, int b)				
//{
//	return a + b;								//返回a + b
//}

//****************************
/*
int main()										//主程序为整数类型
{												//主程序开始
	int z(0), b(50);							//初始化整数对象
	Point a;									//定义结构对象a
	cout << "输入两个整数（以空格区分）：";		//输出提示信息
	cin >> a.x >> a.y;							//接受输入数值
	z = (a.x + a.y)*k;							//计算结果
	z = result(z, b);							//计算结果
	cout << "计算结果如下：" << endl;			//输出信息并换行
	cout << "((" << a.x << "+" << a.y			//输出信息
		<< ")*" << k << ")+" << b				//输出信息
		<< "=" << z								//输出结果
		<< endl;								//换行

	return z;									//主函数main的返回值
}												//主函数结束

*/