/*
Question:
声明如下数组：
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
先查找4的位置，将数组a复制给数组b，然后将数组a的内容反转，
再查找4的位置，最后分别输出数组a和数组b的内容
*/

#include <iostream>
#include <iterator>
using namespace std;

void main() {
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 }, b[8];
	int *x = find(a, a + 8, 4);
	cout << "数组a查找4的位置为："
		<< x-a+1 << endl;
	
	copy(a, a + 8, b);		//将数组a复制给b
	
	reverse(a, a + 8);		//将a反转


	int *y = find(a, a + 8, 4);
	cout << "数组a反转后查找4的位置为："
		<< y - a + 1 << endl;

	cout << "数组a：";
	copy(a, a + 8, ostream_iterator< int >(cout, " "));
	cout << endl;
	cout << "数组b：";
	copy(b, b + 8, ostream_iterator< int >(cout, " "));
	cout << endl;

	system("pause");
}