/*
�����㷨������ͨ����
Ҫ�����������ݡ�����������������С���ת��������ݡ�������������ݵȲ�������Ҫ����ͷ�ļ�<algorithm>
��������н���ͼ�������Ҫ����ͷ�ļ�<functional>
*/
#include <iostream>
#include <iterator>														//ostream_iteratorʹ��ʱҪ����
#include <algorithm>													//reverse_copyʹ��ʱҪ����
using namespace std;

//void main() {
//	double a[] = {1.1, 4.4, 3.3, 2.2}, b[4];
//	copy(a, a + 4, ostream_iterator< double >(cout, " "));					//�����������a���Կո����
//	cout << endl;
//	
//	reverse_copy(a, a + 4, ostream_iterator< double >(cout, " "));			//�����������a���Կո����
//	cout << endl;
//	
//	copy(a, a + 4, b);														//��a[0]-a[3]���Ƶ�����b
//	copy(b, b + 4, ostream_iterator< double >(cout, " "));					//������b����������Կո����
//
//	sort(a, a + 4);
//	copy(a, a + 4, ostream_iterator< double >(cout, " "));					//�����������������
//	cout << endl;
//		
//	reverse_copy(a, a + 4, b);												//��a�����ݰ������Ƹ�����b
//	copy(b, b + 4, ostream_iterator< double >(cout, " "));					//�������b
//	cout << endl;
//
//	system("pause");	//����۲���
//	
//}



