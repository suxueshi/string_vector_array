//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int main() {		//因为需要更改vector对象的内容，所以使用的迭代器应该是begin和end，而非cbegin和cend
//	vector<string> text;
//	string s;		//利用getline读取一段话，直接回车产生一个空串，表示段落结束
//	while (getline(cin, s))//我们正常键盘输入的“a aa aaa”都是带空格的一个字符串 所以第一个遍历只遍历一次
//		text.push_back(s);
//	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
//		//利用迭代器遍历全部字符串，遇到空串停止循环
//		//*it=toupper(*it) 这句话是错误的 因为toupper只能改变单个字符
//		//现在这个it并不是字符类型，是text里面的对象（其实是itrator），不能直接使用toupper(*it)
//		for (auto it2 = it->begin(); it2 != it->end(); ++it2)
//			//利用迭代器遍历  当前字符串 
//			*it2 = toupper(*it2);
//		cout << *it << endl;	//输出当前字符串
//	}
//	return 0;
//}