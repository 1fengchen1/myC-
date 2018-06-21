/*
question：定义函数up(ch),如字符变量ch是小写字母就转换成大写字母并通过up返回，否则字符ch不改变，
要求在短小而完全的程序中显示这个程序是怎样被调用的
*/

#include <iostream>

//using namespace std;
//
//char up(char);
//
//char up(char c) {
//	if (c >= 'a' && c <= 'z')
//		return (c - 32);
//	else
//		return c;
//}
//
//int main() {
//	int i;
//	char c[15] = { 'A', 'v', 'e', 't', 'E','T', '%', '&', '4', 'Z', '@', '^' };
//	for (i = 0; i < 12; i++) {
//		cout << up(c[i]) << "  ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}