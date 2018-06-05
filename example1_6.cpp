/*
泛型算法用于普通数组
要输出数组的内容、对数组进行升序排列、翻转数组的内容、复制数组的内容等操作，需要包含头文件<algorithm>
对数组进行降序和检索，需要包含头文件<functional>
*/
#include <iostream>
#include <iterator>														//ostream_iterator使用时要调用
#include <algorithm>													//reverse_copy使用时要调用
using namespace std;

//void main() {
//	double a[] = {1.1, 4.4, 3.3, 2.2}, b[4];
//	copy(a, a + 4, ostream_iterator< double >(cout, " "));					//正向输出数组a，以空格隔开
//	cout << endl;
//	
//	reverse_copy(a, a + 4, ostream_iterator< double >(cout, " "));			//逆向输出数组a，以空格隔开
//	cout << endl;
//	
//	copy(a, a + 4, b);														//将a[0]-a[3]复制到数组b
//	copy(b, b + 4, ostream_iterator< double >(cout, " "));					//将数组b正向输出，以空格隔开
//
//	sort(a, a + 4);
//	copy(a, a + 4, ostream_iterator< double >(cout, " "));					//对数组进行升幂排序
//	cout << endl;
//		
//	reverse_copy(a, a + 4, b);												//将a的内容按逆向复制给数组b
//	copy(b, b + 4, ostream_iterator< double >(cout, " "));					//输出数组b
//	cout << endl;
//
//	system("pause");	//方便观察结果
//	
//}



