/*
函数重载产生多态性：函数的参数个数问题，函数名字可以相同，取决于参数的个数
*/

#include <iostream>						//包含头文件
using namespace std;					//使用命名空间

//int max(int, int);						//2个整形参数的函数原型
//int max(int, int, int);					//3个整形参数的函数原型
//
//
//void main()								//主函数类型为void
//{
//	cout << max(35, 45) << "," << max(10, 20, 30) << endl;
//}
//
//int max(int m1, int m2)
//{ return (m1 > m2) ? m1 : m2; }
//
//
//int max(int m1, int m2, int m3)
//{
//	int t = max(m1, m2);
//	return max(t, m3);
//}
