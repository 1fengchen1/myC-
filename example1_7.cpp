/*
���齵�����򡢲��ҡ��������
*/

#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>												//greater��Ҫ����İ�

using namespace std;

//void main() {
//	double a[] = { 1.1, 4.4, 3.3, 2.2 };
//	sort(a, a + 4);													//��������
//	copy(a, a + 4, ostream_iterator< double>(cout, " "));			//���
//	cout << endl;
//
//	sort(a, a + 4, greater< double >());							//��������
//	copy(a, a + 4, ostream_iterator< double >(cout, " "));			
//	cout << endl;
//
//	double *x = find(a, a + 4, 4.4);								//����
//	if (x == a + 4)		cout << "û��ֵΪ4.4������Ԫ��";
//	else				cout << "��ֵΪ" << *x << "������Ԫ��";
//	cout << endl;
//
//	x = find(a, a + 4, 8);											//x ��double���͵�ָ��
//	if (x == a + 4)		cout << "û��ֵΪ8������Ԫ��";
//	else				cout << "��ֵΪ" << *x << "������Ԫ��";
//	cout << endl;
//
//	system("pause");
//}
