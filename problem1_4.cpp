/*
Question:
�����������飺
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
�Ȳ���4��λ�ã�������a���Ƹ�����b��Ȼ������a�����ݷ�ת��
�ٲ���4��λ�ã����ֱ��������a������b������
*/

#include <iostream>
#include <iterator>
using namespace std;

void main() {
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 }, b[8];
	int *x = find(a, a + 8, 4);
	cout << "����a����4��λ��Ϊ��"
		<< x-a+1 << endl;
	
	copy(a, a + 8, b);		//������a���Ƹ�b
	
	reverse(a, a + 8);		//��a��ת


	int *y = find(a, a + 8, 4);
	cout << "����a��ת�����4��λ��Ϊ��"
		<< y - a + 1 << endl;

	cout << "����a��";
	copy(a, a + 8, ostream_iterator< int >(cout, " "));
	cout << endl;
	cout << "����b��";
	copy(b, b + 8, ostream_iterator< int >(cout, " "));
	cout << endl;

	system("pause");
}