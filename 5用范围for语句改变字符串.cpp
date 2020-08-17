//#include<iostream>
//#include<string>
//using namespace std;
//
////int main() {		//使用范围for语句将字符串内的所有字符用X代替
////	string s;
////	cout << "请输入一个字符串，可以包括空格： " << endl;
////	getline(cin, s);
////	for (auto& c : s)		//对s的各个字符进行引用 改变该引用就能改变所绑定的s的字符
////		c = 'X';
////	cout << s << endl;
////	return 0;
////}
//
////int main() {		//将循环控制变量的类型设为char会发生什么，也就是auto自动推断类型于直接指定的类型异同
////	string s;
////	cout << "请输入一个字符串，可以包括空格： " << endl;
////	getline(cin, s);
////	for (char &c : s)		//对s的各个字符进行引用 改变该引用就能改变所绑定的s的字符
////		c = 'X';
////	cout << s << endl;
////	return 0;			//结果是不会产生什么影响 auto出来的也是char类型
////}
//
////int main() {		//使用while循环和传统的for循环重写上述程序 并分析优缺点
////	string s;
////	cout << "请输入一个字符串，可以包括空格： " << endl;
////	getline(cin, s);
////	int i = 0;
////	while (s[i] != '\0') {		//对s的各个字符进行引用 改变该引用就能改变所绑定的s的字符
////		s[i] = 'X';
////		++i;
////	}
////	cout << s << endl;
////	return 0;
////}
//
//int main() {		//使用传统for语句将字符串内的所有字符用X代替
//	string s;
//	cout << "请输入一个字符串，可以包括空格： " << endl;
//	getline(cin, s);
//	for (unsigned int i = 0; i < s.size(); ++i)		//对s的各个字符进行引用 改变该引用就能改变所绑定的s的字符
//		s[i] = 'X';
//	cout << s << endl;
//	return 0;						//遍历字符串且不在意顺序的话 范围for循环更加简洁直观
//}