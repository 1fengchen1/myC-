/*
函数的返回值：可以是除了数组、函数以外的任何类型
数组只能返回地址
函数返回所指的对象必须继续存在，不能将函数的内部对象作为函数的返回值
*/


/*
example3_8
返回引用
*/
#include <iostream>
#include <string>

using namespace std;

//int a[] = { 2,4,6,8,10,12 };			//全局数组
//int & index(int i);						//返回引用的函数声明
//
//int & index(int i) {
//	return a[i];						//返回指定下标的整数数组内容
//}
//
//int main() {
//	index(3) = 16;						//将a[3]改为16
//	cout << index(3) << endl;			//16
//	cout << a[3] << endl;				//16
//
//	system("pause");
//	return 0;
//}


/*
example3_8
返回指针：函数的返回值是存储某种类型数据内存地址
定义形式：类型表示符 *函数名 （参数列表）
question：使用函数input输入一组数并返回一个指针，然后由主函数main将这组数显示出来
*/

//float * input(int & );					//声明返回指针的函数
//
//int main() {
//	int num;
//	float * data;
//	data = input(num);					//返回一个指针
//	if (data)							//data不为空，输出所指内容
//		for (int i = 0; i < num; i++){	//使用指针的下标形式
//			cout << data[i] << " ";		//循环输出
//		}
//	cout << *data << endl;
//
//	delete data;						//释放内存:主程序调用input函数，那么释放内存也有主程序负责
//
//
//	system("pause");
//	return 0;
//}
//
//float * input(int &n) {
//	cout << "Input number：";			//询问输入数据数量
//	cin >> n;							
//	if (n <= 0) return NULL;			//输入个数不合理退出
//	float *buf = new float[n];			//根据输出数量申请空间
//	if (buf == 0) return NULL;			//没有申请到则退出
//	for (int i = 0; i < n; i++) {
//		cin >> buf[i];					//输入元素
//	}
//
//	return buf;
//
//}

/*
example3_10
返回对象
*/

//string input(const int);
//
//string input(const int n) {
//	string s1, s2;
//	for (int i = 0; i < n; i++) {
//		cin >> s1;
//		s2 = s2 + s1 + " ";
//	}
//	return s2;
//}
//
//int main() {
//	int n;
//	cout << "Input n =";
//	cin >> n;
//	string str = input(n);
//	cout << str << endl;
//
//	system("pause");
//	return 0;
//}


/*
example3_11
函数的返回值作为函数的参数
*/

//int max(int, int);
//
//int max(int m1, int m2) {
//	return (m1 > m2) ? m1 : m2;
//}
//
//int main() {
//	cout << max(55, max(25, 49)) << endl;
//
//	system("pause");
//	return 0;
//}