/*
�����ķ���ֵ�������ǳ������顢����������κ�����
����ֻ�ܷ��ص�ַ
����������ָ�Ķ������������ڣ����ܽ��������ڲ�������Ϊ�����ķ���ֵ
*/


/*
example3_8
��������
*/
#include <iostream>
#include <string>

using namespace std;

//int a[] = { 2,4,6,8,10,12 };			//ȫ������
//int & index(int i);						//�������õĺ�������
//
//int & index(int i) {
//	return a[i];						//����ָ���±��������������
//}
//
//int main() {
//	index(3) = 16;						//��a[3]��Ϊ16
//	cout << index(3) << endl;			//16
//	cout << a[3] << endl;				//16
//
//	system("pause");
//	return 0;
//}


/*
example3_8
����ָ�룺�����ķ���ֵ�Ǵ洢ĳ�����������ڴ��ַ
������ʽ�����ͱ�ʾ�� *������ �������б�
question��ʹ�ú���input����һ����������һ��ָ�룬Ȼ����������main����������ʾ����
*/

//float * input(int & );					//��������ָ��ĺ���
//
//int main() {
//	int num;
//	float * data;
//	data = input(num);					//����һ��ָ��
//	if (data)							//data��Ϊ�գ������ָ����
//		for (int i = 0; i < num; i++){	//ʹ��ָ����±���ʽ
//			cout << data[i] << " ";		//ѭ�����
//		}
//	cout << *data << endl;
//
//	delete data;						//�ͷ��ڴ�:���������input��������ô�ͷ��ڴ�Ҳ����������
//
//
//	system("pause");
//	return 0;
//}
//
//float * input(int &n) {
//	cout << "Input number��";			//ѯ��������������
//	cin >> n;							
//	if (n <= 0) return NULL;			//��������������˳�
//	float *buf = new float[n];			//���������������ռ�
//	if (buf == 0) return NULL;			//û�����뵽���˳�
//	for (int i = 0; i < n; i++) {
//		cin >> buf[i];					//����Ԫ��
//	}
//
//	return buf;
//
//}

/*
example3_10
���ض���
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
�����ķ���ֵ��Ϊ�����Ĳ���
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