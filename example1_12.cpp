/*
setfill('*')  �����*����
setw(n)  ���n����ʾλ���ٲ������ã���Ӱ��ʹ�á�ʹ������ַ�ʱ��n����ʾλ����1ʱ���ŷ���������á�Ҫ��ʾ15��*��n��Ҫ��16
setiosflags(ios_base::right)����flagָ���ı�־λ:������ݰ�������ұ߶���
resetiosflags()
*/

#include <iostream>
#include <iomanip>

using namespace std;

//void main() {
//	cout << setfill('*')
//		<< setw(0) << 25 << endl							//25
//		<< setw(1) << 25 << endl							//25
//		<< setw(2) << 25 << endl							//25
//		<< setw(3) << 25 << endl							//*25
//		<< setw(4) << 25 << endl;							//**25
//
//	cout << setw(15) << setfill('*') << "*" << endl;		//�ȼ��ڣ� cout << setw(16) << setfill('*') << "*" << endl;
//
//	cout << setiosflags(ios_base::right)
//		<< setw(5) << 1										//****1
//		<< setw(5) << 2										//****1****2
//		<< setw(5) << 3 << endl;							//****1****2****3
//
//	cout << resetiosflags(ios_base::right);					//���flagָ���ı�־λ,Ҫ���ı�־λ���������
//	cout << setiosflags(ios_base::left)
//		<< setw(5) << 1										//1****
//		<< setw(5) << 2										//1****2****
//		<< setw(5) << 3 << endl;							//1****2****3****
//
//
//	system("pause");
//}

