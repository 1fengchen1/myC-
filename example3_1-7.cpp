/*
example3_1
�����Ĳ������ݷ�ʽ����ֵ��������
��ֵ�������ֵ(�������ݳ�Ա)������ĵ�ֵַ��������׵�ֵַ��
���󡢶���ָ�롢�������ÿ�����Ϊ����������
*/


/*
������Ϊ��������������ı�ԭ�����������(����ı亯���������)
*/

#include <iostream>
#include <string>
using namespace std;

//void swap(string, string);						//����ԭ��������ʹ��string��Ķ���
//
//int main() {
//	string str1("����"), str2("��ȥ");			//��������
//	swap(str1, str2);							//ʹ�ô�ֵ��ʽ����str1��str2�����ݳ�Աֵ
//	cout << "���غ�str1 = " << str1 << ","		//���غ�str1 = ����,str2 = ��ȥ
//		<< "str2 = " << str2 << endl;
//
//	system("pause");
//	return 0;
//}
//
//void swap(string s1, string s2) {
//	string temp = s1; 
//	s1 = s2;
//	s2 = temp;
//	cout << "����Ϊ��str1 = " << s1 <<  ","		//����Ϊ��str1 = ��ȥ,str2 = ����
//		<< "str2 = " << s2 << endl;
//}


/*
example3_2
����ָ����Ϊ�����������β��Ƕ���ָ�룬ʵ���Ƕ���ĵ�ַ
�ı��βε�ֵ�����Ǹı�ʵ�ε�ֵ
*/

//void swap(string *, string *);
//
//int main() {
//	string str1("����"), str2("��ȥ");			//��������str1
//	swap(&str1, &str2);							//ʹ�ô���ַ��ʽ����str1��str2�ĵ�ֵַ
//	cout << "���غ�str1 = " << str1 << '\t'	//���غ�str1 = ��ȥ     str2 = ����
//		<< "str2 = " << str2 << endl;
//
//	system("pause");
//	return 0;
//}
//
//void swap(string *s1, string *s2) {
//	string temp = *s1;
//	*s1 = *s2;
//	*s2 = temp;
//	cout << "����Ϊ��str1 = " << *s1 << '\t'	//����Ϊ��str1 = ��ȥ     str2 = ����
//		<< "str2 = " << *s2 << endl;
//
//}

/*
example3_3
����ָ����Ϊ����������������Ϊ����
���������������ָ����
*/

//void swap(int[]);
//
//int main() {
//	int a[] = { 3, 8 };
//	swap(a);
//	cout << "���غ�a = " << a[0] << '\t'		//���غ�a = 8   b = 3
//		<< "b = " << a[1] << endl;
//
//	system("pause");
//	return 0;
//}
//
//void swap(int a[]) {							//ʹ����������Ϊ�����Ĳ����͵ȼ���ʹ�ö����ָ����Ϊ�����Ĳ���
//	int temp = a[0] ;
//	a[0] = a[1];
//	a[1] = temp;
//	cout << "����Ϊ��a = " << a[0] << '\t'		//����Ϊ��a = 8   b = 3
//		<< "b = " << a[1] << endl;
//
//}


/*
example3_4
�����������Ϊ�����Ĳ�����ʵ�ζ����������βζ��������βζ���������ʵ�ζ�����
�ı��βε�ֵ���Ǹı���ʵ�ε�ֵ
*/


//void swap(string &, string &);
//
//int main() {
//	string str1("����"), str2("��ȥ");
//	swap(str1, str2);
//	cout << "���غ�str1 = " << str1 << '\t'		//���غ�str1 = ��ȥ     str2 = ����
//		<< "str2 = " << str2 << endl;
//
//	system("pause");
//	return 0;
//}
//
//void swap(string &s1, string &s2) {
//	string temp = s1;
//	s1 = s2;
//	s2 = temp;
//	cout << "����Ϊ��str1 = " << s1 << '\t'			//����Ϊ��str1 = ��ȥ     str2 = ����
//		<< "str2 = " << s2 << endl;
//}


/*
example3_5
ͨ��������õķ���ʹ������
question����10��ѧ���ɼ���ƽ��ֵ����ͳ�����в������������Ҫ����һ������ʵ�֣�
���������������ݸ����ú��������Һ������β�ʹ��������ʵ��
*/


//void avecount(double (&b)[12], int n) {
//	double ave(0);
//	int count(0);
//	for (int j = 0; j < n - 2; j++) {
//		ave = ave + b[j];
//		if (b[j] < 60) count ++;
//	}
//
//	b[n - 2] = ave / (n - 2);
//	b[n - 1] = count;
//}
//
//int main() {
//	double b[12] = { 12,34,56,78,90,98,76,85,64,43 };
//	double (&a)[12] = b;									//�����������
//	avecount(a, 12);	
//	cout << "ƽ���ɼ�Ϊ��" << a[10] << "�֣�������������" << int(a[11]) << "�ˡ�" << endl;		//ƽ���ɼ�Ϊ��63.6�֣�������������4�ˡ�
//
//	system("pause");
//	return 0;
//}

/*
example3_6
Ĭ�ϲ�����Ĭ�ϲ������ں���ԭ����˵���ģ�Ĭ�ϲ������Զ���1������������ڲ������еĺ�
*/

//void Display(string s1, string s2="", string s3="");			//����ԭ����������Ĭ�ϲ���
//
//int main() {
//	string str1("����"), str2("��ȥ"), str3("����");			
//	Display(str1);												//����
//	Display(str1, str2, str3);									//���ڡ���ȥ������
//	Display(str3, str1);										//����������
//	Display(str2, str3);										//��ȥ������
//
//	system("pause");
//	return 0;
//
//}
//
//void Display(string s1, string s2, string s3) {
//	if (s2 == "" && s3 == "")		cout << s1 << endl;
//	else if (s3 == "" && s2 != "")	cout << s1 << "��" << s2 << endl;
//	else							cout << s1 << "��" << s2 << "��" << s3 << endl;
//}


/*
ʹ��const��������
*/


//void change(const string &);
//
//void change(const string &s) {
//	string s2 = s + "No!";
//	cout << s2 << endl;					//Can you change it ? No!
//}
//
//int main() {
//	string str("Can you change it?");
//	change(str);
//	cout << str << endl;				//Can you change it ?
//
//	system("pause");
//	return 0;
//}

