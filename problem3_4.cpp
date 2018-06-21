/*
question:编写一个有字符型参数C和整型参数N的函数，让它显示出由字符C组成的三角形。
其方式为第1行有1个字符C，第2行有2个字符C等等。
*/
#include <iostream>
#include <string>
using namespace std;

void triangle(char symbol);

void triangle(char symbol) {
	int number;
	string t;
	string row;
	cout << "输入要生成几行三角形：" << endl;
	cin >> number;

	if (number == 0) {
		cout << "零" << endl;
	}
	else if (number == 1) {
		cout << system << endl;
	}
	else{
		for (int i = 0; i < number; i++) {
			row = symbol * (i + 1);
			t += row;
		}
		cout << t << endl;
	}
		

	

	cout << t;
}


int main() {

	char symbol('C');
	triangle(symbol);

	system("pause");
	return 0;
}
