/*
对一维数组进行局部操作
*/

#include <iostream>			//cout cin copy
#include <iterator>
#include <algorithm>
#include <functional>

using namespace std;

//void main() {
//	double a[] = { 1.1, 4.4, 3.3, 2.2 }, b[8] = { 8 };
//
//	copy(a + 2, a + 4, ostream_iterator< double >(cout, " "));					//输出a[2]、a[3]
//	cout << endl;
//
//	reverse_copy(a + 1, a + 4, ostream_iterator< double >(cout, "  "));			//输出a[3]-a[1]
//	cout << endl;
//
//	copy(a, a + 4, &b[4]);														//将a数组复制到b数组的尾部
//	copy(b, b + 8, ostream_iterator< double >(cout, " "));						//输出b[0]-b[7]
//	cout << endl;
//
//	sort(a + 1, a + 3);															//对数组a[1]-a[2]进行升幂操作
//	copy(a, a + 4, ostream_iterator< double >(cout, " "));						//输出数组a
//	cout << endl;
//
//	sort(b, b + 6, greater< double >());										//对数组b[0]-b[5]进行降幂排序
//	copy(b, b + 8, ostream_iterator< double >(cout, " "));						//输出数组b
//	cout << endl;
//
//
//	system("pause");
//}






