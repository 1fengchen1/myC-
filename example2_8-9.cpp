/*
��ϰ��string�ࡢ�����ʹ�ã�string��find��size��substr
string�����캯����������ʼ��
find���������м�����Ҫ���ַ�������������ֵ
size�����㲢�����ַ����ĳ���
substr�������ַ������Ӵ�
*/

#include <iostream>
#include <string>
using namespace std;

//void main() {
//	string str1 = "Who are you ?";
//	string str2 = "I am Pythonic";
//	cout << str1[0] << str1[11] << "," << str1 << endl;
//	cout << str2[0] << str2[13] << "," << str2 << endl;
//	cout << "please input a word:";
//	cin >> str1;
//	cout << "length of the " << str1 << " is " << str1.size() << "." << endl;
//
//	int i = str2.find("am", 0);													//��д�ڶ���������Ĭ����0
//	cout << i << endl;
//
//	string newstr = str2.substr(2, 2);											//��һ��������Ҫ��ȡ���Ӵ����ַ����е�λ�ã��ڶ�������ȡ�ĳ���
//	cout << newstr << endl;
//
//	system("pause");
//}


/*###############################################################################################*/

/*
������ʱ���ʽ��May 28, 2002��ת���ɹ���ʱ���ʽ��28 May 2002��
*/


//int main() {
//	cout << "��ʱ����������ʽ��ʾ��e.g.,December 25, 2002��:";
//	string Date;
//	getline(cin, Date, '\n');
//
//	int i = Date.find(" ");
//	string Month = Date.substr(0, i);
//
//	int k = Date.find(",");
//	string Day = Date.substr(i + 1, k - (i + 1));
//
//	string Year = Date.substr(k + 2, 4);
//
//
//	string NewDate = Day + " " + Month + " " + Year;
//
//	cout << "Oraginal date�� " << Date << endl;
//	cout << "Coverred Date�� " << NewDate << endl;
//
//	system("pause");
//	return 0;
//}
