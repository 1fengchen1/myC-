/*
Question:编写完整的程序，它读入15个float值，用指针把他们存放在一个存储块里，
	然后输出这些值和最小的值
*/

#include <iostream>
#include <algorithm>
using namespace std;

//void main() {
//	float *p = new float[15];
//	cout << "输入15个float类型的值；" << endl;
//	for (int i = 0; i < 15; i++) {
//		*(p + i) = i;
//	}
//
//	sort(p, p + 15);
//
//	int sum = 0;
//	for (int i = 0; i < 15; i++) {
//		cout << *(p + i) << ", ";
//		sum += *(p + i);
//	}
//
//	cout << endl;
//	cout << "和是：" << sum << endl;
//	cout << "最小的是：" << *p << endl;		//p是指向数组的首个地址；p[0]和*p都是指向数组的第一个数值
//	cout << p[0] << endl << p[2] << endl;
//	system("pause");
//}

