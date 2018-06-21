/*
question:编写一个求方程ax^2+bx+c=0的根的程序，用3个函数分别求当b^2-4ac大于零，等于零，小于零时的根。
要求从主函数输出a,b,c的值并输出结果
*/

#include <iostream>
#include <math.h>

using namespace std;

//void gen1(int, int, int);
//void gen2(int, int, int);
//void gen3(int, int, int);
//
//void gen1(int a, int b, int c) {
//	double x1, x2, temp;
//	temp = b * b - 4 * a*c;
//	x1 = (-b + sqrt(temp)) / (2 * a*1.0);
//	x2 = (-b - sqrt(temp)) / (2 * a*1.0);
//	cout << "两个不相等的实根" << endl;
//	cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
//}
//
//void gen2(int a, int b, int c) {
//	double x1, x2, temp;
//	temp = b * b - 4 * a*c;
//	x1 = (-b + sqrt(temp)) / (2 * a*1.0);
//	x2 = x1;
//	cout << "两个不相等的实根" << endl;
//	cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
//}
//
//void gen3(int a, int b, int c) {
//	double temp, real1, real2, image1, image2;
//	temp = -(b * b - 4 * a*c);
//	real1 = -b / (2 * a*1.0);
//	real2 = real1;
//	image1 = sqrt(temp) / (2 * a*1.0);
//	image2 = sqrt(temp) / (2 * a*1.0);
//	cout << "两个虚根" << endl;
//	cout << "x1 = " << real1 << " +" << image1 << "i" << endl;
//	cout << "x2 = " << real2 << " +" << image2 << "i" << endl;
//
//}
//
//int main() {
//	int a, b, c;
//	double temp;
//	cout << "输入a,b,c的值：" << endl;
//	cin >> a >> b >> c;
//	cout << "方程式为：" << a << "x*x+"
//		<< b << "x+" << c << endl;
//	
//	temp = b * b - 4 * a*c;
//	if (temp > 0)
//		gen1(a, b, c);
//	else if (temp == 0)
//		gen2(a, b, c);
//	else (temp < 0);
//		gen3(a, b, c);
//
//	system("pause");
//	return 0;
//}