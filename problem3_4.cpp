/*
question:��дһ�����ַ��Ͳ���C�����Ͳ���N�ĺ�����������ʾ�����ַ�C��ɵ������Ρ�
�䷽ʽΪ��1����1���ַ�C����2����2���ַ�C�ȵȡ�
*/
#include <iostream>
#include <string>
using namespace std;

void triangle(char symbol);

void triangle(char symbol) {
	int number;
	string t;
	string row;
	cout << "����Ҫ���ɼ��������Σ�" << endl;
	cin >> number;

	if (number == 0) {
		cout << "��" << endl;
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
