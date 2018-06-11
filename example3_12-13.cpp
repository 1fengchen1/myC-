/*
example3.12
函数的多态性：一个函数名，具有多种功能
*/

#include <iostream>
using namespace std;

//double max(double, double);
//int max(int, int);
//char max(char, char);
//int max(int, int, int);
//
//int main() {
//	cout << max(2.5, 17.54) << " " << max(65, 8) << " " << max('w', 'p') << endl;
//	cout << "max(5, 9, 4)" << " " << max(5, 9, 4) << " max(5, 4, 9)" << " " << max(5, 4, 9) << endl;
//
//	system("pause");
//	return 0;
//}
//
//double max(double m1, double m2) {
//	return (m1 > m2) ? m1 : m2;
//}
//
//int max(int m1, int m2) {
//	return (m1 > m2) ? m1 : m2;
//}
//
//char max(char m1, char m2) {
//	return (m1 > m2) ? m1 : m2;
//}
//
//int max(int m1, int m2, int m3) {
//	int t = max(m1, m2);
//	return max(t, m3);
//}


/*
example3.13
question:设计一个求整数之和的函数，4个以内的整数
使用默认参数方法
*/

//int add(int m1 = 0, int m2 = 0, int m3 = 0, int m4 = 0) {
//	return m1 + m2 + m3 + m4;
//}
//
//int main() {
//	cout << add(1, 3) << "," << add(1, 3, 5) << "," << add(1, 3, 5, 7);
//
//	system("pause");
//	return 0;
//}