/*
�ṹ�壺���ݳ�Ա����Ա����
*/

#include <iostream>

using namespace std;

//struct Point {										//����ṹ��
//
//	double x, y;									//���ݳ�Ա
//
//	void Setxy(double a, double b) {				//��Ա����������double���͵Ĳ���
//		x = a;
//		y = b;
//	}
//	void Display() {								//��Ա����û�в���
//		cout << x << "\t" << y << endl;
//	}
//};
//
//
//void main() {
//	Point a;										//����ṹ��Ķ���a
//	a.Setxy(10.6, 18.5);							//���ʶ����Setxy()����
//	a.Display();
//	cout << a.x << "\t" << a.y << endl;
//
//	system("pause");
//}


/*
�ṹ�壺���ݳ�Աʹ��private�ؼ��ֶ��壬���Ƿ�װ����Ҫ���þ�Ҫ�õ����캯��
���캯�������������Ǻͽṹ������ͬ�����캯��ר�����ڳ�ʼ������
���캯��ʹ�÷��������캯���� ������ (��ʼ������)
��struct�滻��class����һ����׼�࣬main������ʹ�÷�����struct��һ������Ϊ������һ����
*/

//struct Point {										//����ṹ��
//
//	private:
//		double x, y;									//���ݳ�Ա
//
//	public:
//		Point() {}										//�޲������캯��
//		Point(double a, double b) {
//			x = a;
//			y = b;
//		}
//		void Setxy(double a, double b) {				//��Ա����������double���͵Ĳ���
//			x = a;
//			y = b;
//		}
//		void Display() {								//��Ա����û�в���
//			cout << x << "\t" << y << endl;
//		}
//
//};


//void main() {
//	Point a;										//����ṹ��Ķ���a
//	Point b(11.1, 22.2);										//�������b����ֵ
//	a.Setxy(10.6, 18.5);							//���ʶ����Setxy()����
//	a.Display();
//	b.Display();
//
//	system("pause");
//}
//
