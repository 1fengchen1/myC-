/*
结构体：数据成员、成员函数
*/

#include <iostream>

using namespace std;

//struct Point {										//定义结构体
//
//	double x, y;									//数据成员
//
//	void Setxy(double a, double b) {				//成员函数有两个double类型的参数
//		x = a;
//		y = b;
//	}
//	void Display() {								//成员函数没有参数
//		cout << x << "\t" << y << endl;
//	}
//};
//
//
//void main() {
//	Point a;										//定义结构体的对象a
//	a.Setxy(10.6, 18.5);							//访问对象的Setxy()函数
//	a.Display();
//	cout << a.x << "\t" << a.y << endl;
//
//	system("pause");
//}


/*
结构体：数据成员使用private关键字定义，就是封装，想要调用就要用到构造函数
构造函数：函数名就是和结构体名相同。构造函数专门用于初始化对象。
构造函数使用方法：构造函数名 对象名 (初始化参数)
将struct替换成class就是一个标准类，main函数的使用方法和struct的一样，因为功能是一样的
*/

//struct Point {										//定义结构体
//
//	private:
//		double x, y;									//数据成员
//
//	public:
//		Point() {}										//无参数构造函数
//		Point(double a, double b) {
//			x = a;
//			y = b;
//		}
//		void Setxy(double a, double b) {				//成员函数有两个double类型的参数
//			x = a;
//			y = b;
//		}
//		void Display() {								//成员函数没有参数
//			cout << x << "\t" << y << endl;
//		}
//
//};


//void main() {
//	Point a;										//定义结构体的对象a
//	Point b(11.1, 22.2);										//定义对象b并赋值
//	a.Setxy(10.6, 18.5);							//访问对象的Setxy()函数
//	a.Display();
//	b.Display();
//
//	system("pause");
//}
//
