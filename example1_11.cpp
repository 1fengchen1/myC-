/*
setprecision( int n) 显示小数位数：1代表显示整数数字，2代表消失小数后面一位，0等于不设，由系统决定
cout << dec 命令执行后，将保持八进制输出
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.141593;

//void main() {
//	cout << PI << endl
//		<< setprecision(0) << PI << endl
//		<< setprecision(1) << PI << endl
//		<< setprecision(2) << PI << endl
//		<< setprecision(3) << PI << endl
//		<< setprecision(7) << PI << endl;
//	
//	int b = 100;
//	cout << "Dec:" << dec << b << endl
//		<< "Hex:" << hex << b << endl
//		<< "Oct:" << oct << b << endl;
//
//	cin >> b;
//	cout << b << endl;
//	cout << dec << setiosflags(ios_base::showpos) << b << endl;			//将输出设置为正文前面显示“+”号，这个设置保持到使用语句
//	cout << "Input b=";
//	cin >> b;
//	cout << b << endl;
//	cout << resetiosflags(ios_base::showpos);							//清楚该设置标志
//	cout << b << endl;
//	
//	system("pause");
//
//}