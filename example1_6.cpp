/*
�����㷨������ͨ����
Ҫ�����������ݡ�����������������С���ת��������ݡ�������������ݵȲ�������Ҫ����ͷ�ļ�<algorithm>
��������н���ͼ�������Ҫ����ͷ�ļ�<functional>
*/
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

void main() {
	double a[] = {1.1, 4.4, 3.3, 2.2}, b{4};
	copy(a, a + 4, ostream_iterator< double >(cout, " "));					//�����������a���Կո����
	cout << endl;
	reverse_copy(a, a + 4, ostream_iterator<double>(cout, " "));				//�����������a���Կո����
	cout << endl;

	
}

/*
copy(a, a + 4, ostream_iterator< double >(cout, " "));					//�����������a���Կո����
cout << endl;
reverse_copy(a, a+4, ostream_iterator<double>(cout, " "));				//�����������a���Կո����
cout << endl;
copy(a, a + 4, b);														//ԭ�����Ƶ�����b
copy(b, b + 4, ostream_iterator<double>(cout, " "));					//�����������b���Կո����
cout << endl;
*/

