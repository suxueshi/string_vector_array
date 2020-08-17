//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//int main() {
//	vector<string> vString;		//元素类型为string的vector对象
//	string s;
//	char cont = 'y';
//	cout << "请输入第一个词： " << endl;
//	while (cin >> s) {
//		vString.push_back(s);		//向vector对象中添加元素
//		cout << "您要继续吗（y/n）?" << endl;
//		cin >> cont;
//		if (cont != 'y' && cont != 'Y')
//			break;
//		cout << "请输入下一个词：" << endl;
//	}
//	cout << "转换后的结果： " << endl;
//	for (auto& mem : vString) {		//使用范围for循环遍历vString中的每个元素
//		for (auto& c : mem)			//使用范围for循环语句遍历mem中的每个字符
//			c = toupper(c);			//改写为大写字母形式
//		cout << mem << endl;
//	}
//	return 0;
//}