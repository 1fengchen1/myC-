/*
string对象字符串复制，反转
*/

#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <functional>

using namespace std;

//int main() {
//	string str1 = "we are here !", str2 = str1;				//使用str1初始化str2，这样做是为了保证str2有足够的空间存储str1
//	reverse(&str1[0], &str1[0] + 12);						//将str1反转
//	cout << str1 << endl;
//
//	copy(&str1[0], &str1[0] + 12, &str2[0]);				//将str1复制给str2
//	cout << str2 << endl;
//
//	reverse_copy(&str2[0], &str2[0] + 12, ostream_iterator< char >(cout, "\n"));	//反向输出str2
//
//
//	system("pause");
//	return 0;
//}


/*
string对象字符串使用成员函数表示存储空间
str.begin() 表示首个元素的地址
*/

//int main() {
//	string str1 = "wearehere!", str2(str1);
//	reverse(str1.begin(), str1.end());		//将字符串元素逆向
//	cout << str1 << endl;
//
//	copy(str1.begin(), str1.end(), str2.begin());	//str1完全复制给str2
//	sort(str1.begin(), str1.end());					//str1默认升幂排列
//	cout << str1 << endl;
//	cout << str2 << endl;
//
//	reverse_copy(str1.begin(), str1.end(), str2.begin());	//逆向复制
//	cout << str2 << endl;
//
//	reverse(str2.begin() + 2, str2.begin() + 8);			//部分元素逆向
//	copy(str2.begin() + 2, str2.begin() + 8, ostream_iterator< char >(cout));		//输出逆向后的部分内容
//	cout << endl;
//
//	sort(str1.begin(), str1.end(), greater< char >());						//降幂排序
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
//		cout << str[i] << endl;				//除非输出string对象数组的部分内容，否则使用 cout << str[i] 方法更简单
//	}
//
//	system("pause");
//	return 0;
//}