/*
string�����ַ������ƣ���ת
*/

#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <functional>

using namespace std;

//int main() {
//	string str1 = "we are here !", str2 = str1;				//ʹ��str1��ʼ��str2����������Ϊ�˱�֤str2���㹻�Ŀռ�洢str1
//	reverse(&str1[0], &str1[0] + 12);						//��str1��ת
//	cout << str1 << endl;
//
//	copy(&str1[0], &str1[0] + 12, &str2[0]);				//��str1���Ƹ�str2
//	cout << str2 << endl;
//
//	reverse_copy(&str2[0], &str2[0] + 12, ostream_iterator< char >(cout, "\n"));	//�������str2
//
//
//	system("pause");
//	return 0;
//}


/*
string�����ַ���ʹ�ó�Ա������ʾ�洢�ռ�
str.begin() ��ʾ�׸�Ԫ�صĵ�ַ
*/

//int main() {
//	string str1 = "wearehere!", str2(str1);
//	reverse(str1.begin(), str1.end());		//���ַ���Ԫ������
//	cout << str1 << endl;
//
//	copy(str1.begin(), str1.end(), str2.begin());	//str1��ȫ���Ƹ�str2
//	sort(str1.begin(), str1.end());					//str1Ĭ����������
//	cout << str1 << endl;
//	cout << str2 << endl;
//
//	reverse_copy(str1.begin(), str1.end(), str2.begin());	//������
//	cout << str2 << endl;
//
//	reverse(str2.begin() + 2, str2.begin() + 8);			//����Ԫ������
//	copy(str2.begin() + 2, str2.begin() + 8, ostream_iterator< char >(cout));		//��������Ĳ�������
//	cout << endl;
//
//	sort(str1.begin(), str1.end(), greater< char >());						//��������
//	cout << str1 << endl;
//
//	str1.swap(str2);
//	cout << str1 << " " << str2 << endl;
//
//	cout << ( *find(str1.begin(), str1.end(), 'e') == 'e' ) << " "
//		<< ( *find(str1.begin(), str1.end(), 'O') == 'O' ) << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//	string str[] = { "We are here!", "Where are you?", "welcome!" };
//	for (int i = 0; i < 3; i++) {
//		copy(str[i].begin(), str[i].end(), ostream_iterator< char >(cout));
//		cout << endl;
//	}
//
//	str[0].swap(str[1]);
//	str[0].swap(str[2]);
//	for (int i = 0; i < 3; i++) {
//		cout << str[i] << endl;				//�������string��������Ĳ������ݣ�����ʹ�� cout << str[i] ��������
//	}
//
//	system("pause");
//	return 0;
//}