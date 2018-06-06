/*
setfill('*')  填充用*代替
setw(n)  域宽n比显示位数少不起作用，不影响使用。使用填充字符时，n比显示位数大1时，才发生填充作用。要显示15个*，n就要是16
setiosflags(ios_base::right)设置flag指定的标志位:输出数据按输出域右边对齐
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
//	cout << setw(15) << setfill('*') << "*" << endl;		//等价于： cout << setw(16) << setfill('*') << "*" << endl;
//
//	cout << setiosflags(ios_base::right)
//		<< setw(5) << 1										//****1
//		<< setw(5) << 2										//****1****2
//		<< setw(5) << 3 << endl;							//****1****2****3
//
//	cout << resetiosflags(ios_base::right);					//清除flag指定的标志位,要更改标志位必须先清除
//	cout << setiosflags(ios_base::left)
//		<< setw(5) << 1										//1****
//		<< setw(5) << 2										//1****2****
//		<< setw(5) << 3 << endl;							//1****2****3****
//
//
//	system("pause");
//}

