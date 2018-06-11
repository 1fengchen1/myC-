/*
练习complex类的使用：real--实部、image--虚部
complex是模板类，可以定义多种数据类型的复数
使用方法：complex <数据类型> 对象名 (实部值, 虚部值)
*/

#include <iostream>
#include <string>
#include <complex>

using namespace std;

//int main() {
//	complex <int> num1(2, 3);
//	complex <float> num2(3.5, 4.8);
//	string str1("real is：");
//	string str2 = "image is：";
//	cout << str1 << num1.real() << ", " << num1.imag() << endl;			//复数.real() 返回实数；复数.image()返回虚数
//	cout << str2 << num2.real() << ", " << num2.imag() << endl;
//
//	system("pause");
//	return 0;
//}