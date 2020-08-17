//#include<iostream>
//#include<string>
//using namespace std;
//
////int main() {	//利用范围for语句遍历字符串，逐个输出非标点字符
////	string s;
////	cout << "请输入一个字符串，最好含有某些标点符号： " << endl;
////	getline(cin, s);
////	for (auto c : s) {
////		if (!ispunct(c))		//！理解为不, 如果  不  是标点的话则返回1（则执行）
////			cout << c;
////	}
////	cout << endl;
////	return 0;
////}
//
//int main() {	//利用普通for循环，通过下标访问，把非标点字符拼接成一个新串后输出
//	string s, result;
//	cout << "请输入一个字符串，最好含有某些标点符号： " << endl;
//	getline(cin, s);
//	for (decltype(s.size()) i=0;i<s.size();++i) {	//decltype判断并返回操作类型
//		if (!ispunct(s[i]))		//！理解为不, 如果  不  是标点的话则返回1（则执行）
//			result += s[i];
//	}
//	cout << result << endl;
//	return 0;
//}
