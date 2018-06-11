/*
example3_1
函数的参数传递方式：传值、传引用
传值：对象的值(所有数据成员)、对象的地址值（对象的首地址值）
对象、对象指针、对象引用可以作为函数参数。
*/


/*
对象作为函数参数：不会改变原来对象的数据(不会改变函数外的数据)
*/

#include <iostream>
#include <string>
using namespace std;

//void swap(string, string);						//函数原型声明，使用string类的对象
//
//int main() {
//	string str1("现在"), str2("过去");			//声明变量
//	swap(str1, str2);							//使用传值方式传递str1和str2的数据成员值
//	cout << "返回后：str1 = " << str1 << ","		//返回后：str1 = 现在,str2 = 过去
//		<< "str2 = " << str2 << endl;
//
//	system("pause");
//	return 0;
//}
//
//void swap(string s1, string s2) {
//	string temp = s1; 
//	s1 = s2;
//	s2 = temp;
//	cout << "交换为：str1 = " << s1 <<  ","		//交换为：str1 = 过去,str2 = 现在
//		<< "str2 = " << s2 << endl;
//}


/*
example3_2
对象指针作为函数参数：形参是对象指针，实参是对象的地址
改变形参的值，就是改变实参的值
*/

//void swap(string *, string *);
//
//int main() {
//	string str1("现在"), str2("过去");			//声明对象str1
//	swap(&str1, &str2);							//使用传地址方式传递str1和str2的地址值
//	cout << "返回后：str1 = " << str1 << '\t'	//返回后：str1 = 过去     str2 = 现在
//		<< "str2 = " << str2 << endl;
//
//	system("pause");
//	return 0;
//}
//
//void swap(string *s1, string *s2) {
//	string temp = *s1;
//	*s1 = *s2;
//	*s2 = temp;
//	cout << "交换为：str1 = " << *s1 << '\t'	//交换为：str1 = 过去     str2 = 现在
//		<< "str2 = " << *s2 << endl;
//
//}

/*
example3_3
对象指针作为参数：数组名字作为参数
数组名就是数组的指针名
*/

//void swap(int[]);
//
//int main() {
//	int a[] = { 3, 8 };
//	swap(a);
//	cout << "返回后：a = " << a[0] << '\t'		//返回后：a = 8   b = 3
//		<< "b = " << a[1] << endl;
//
//	system("pause");
//	return 0;
//}
//
//void swap(int a[]) {							//使用数组名作为函数的参数就等价于使用对象的指针作为函数的参数
//	int temp = a[0] ;
//	a[0] = a[1];
//	a[1] = temp;
//	cout << "交换为：a = " << a[0] << '\t'		//交换为：a = 8   b = 3
//		<< "b = " << a[1] << endl;
//
//}


/*
example3_4
对象的引用作为函数的参数：实参对象名传给形参对象名，形参对象名就是实参对象名
改变形参的值就是改变是实参的值
*/


//void swap(string &, string &);
//
//int main() {
//	string str1("现在"), str2("过去");
//	swap(str1, str2);
//	cout << "返回后：str1 = " << str1 << '\t'		//返回后：str1 = 过去     str2 = 现在
//		<< "str2 = " << str2 << endl;
//
//	system("pause");
//	return 0;
//}
//
//void swap(string &s1, string &s2) {
//	string temp = s1;
//	s1 = s2;
//	s2 = temp;
//	cout << "交换为：str1 = " << s1 << '\t'			//交换为：str1 = 过去     str2 = 现在
//		<< "str2 = " << s2 << endl;
//}


/*
example3_5
通过间接引用的方法使用数组
question：求10个学生成绩的平均值，并统计其中不及格的人数，要求用一个函数实现，
并返回这两个数据给调用函数，并且函数的形参使用引用来实现
*/


//void avecount(double (&b)[12], int n) {
//	double ave(0);
//	int count(0);
//	for (int j = 0; j < n - 2; j++) {
//		ave = ave + b[j];
//		if (b[j] < 60) count ++;
//	}
//
//	b[n - 2] = ave / (n - 2);
//	b[n - 1] = count;
//}
//
//int main() {
//	double b[12] = { 12,34,56,78,90,98,76,85,64,43 };
//	double (&a)[12] = b;									//间接引用数组
//	avecount(a, 12);	
//	cout << "平均成绩为：" << a[10] << "分，不及格人数有" << int(a[11]) << "人。" << endl;		//平均成绩为：63.6分，不及格人数有4人。
//
//	system("pause");
//	return 0;
//}

/*
example3_6
默认参数：默认参数是在函数原型中说明的，默认参数可以多余1个，但必须放在参数序列的后部
*/

//void Display(string s1, string s2="", string s3="");			//函数原型声明设置默认参数
//
//int main() {
//	string str1("现在"), str2("过去"), str3("将来");			
//	Display(str1);												//现在
//	Display(str1, str2, str3);									//现在、过去、将来
//	Display(str3, str1);										//将来、现在
//	Display(str2, str3);										//过去、将来
//
//	system("pause");
//	return 0;
//
//}
//
//void Display(string s1, string s2, string s3) {
//	if (s2 == "" && s3 == "")		cout << s1 << endl;
//	else if (s3 == "" && s2 != "")	cout << s1 << "、" << s2 << endl;
//	else							cout << s1 << "、" << s2 << "、" << s3 << endl;
//}


/*
使用const保护数据
*/


//void change(const string &);
//
//void change(const string &s) {
//	string s2 = s + "No!";
//	cout << s2 << endl;					//Can you change it ? No!
//}
//
//int main() {
//	string str("Can you change it?");
//	change(str);
//	cout << str << endl;				//Can you change it ?
//
//	system("pause");
//	return 0;
//}

