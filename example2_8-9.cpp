/*
练习对string类、对象的使用：string、find、size、substr
string：构造函数，用来初始化
find：在主串中检索需要的字符串，返回序列值
size：计算并返回字符串的长度
substr：返回字符串中子串
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
//	int i = str2.find("am", 0);													//不写第二个参数，默认是0
//	cout << i << endl;
//
//	string newstr = str2.substr(2, 2);											//第一个参数：要截取的子串在字符串中的位置；第二个：截取的长度
//	cout << newstr << endl;
//
//	system("pause");
//}


/*###############################################################################################*/

/*
将美国时间格式【May 28, 2002】转换成国际时间格式【28 May 2002】
*/


//int main() {
//	cout << "将时间用美国格式表示（e.g.,December 25, 2002）:";
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
//	cout << "Oraginal date： " << Date << endl;
//	cout << "Coverred Date： " << NewDate << endl;
//
//	system("pause");
//	return 0;
//}
