//#include<iostream>
//#include<string>
//using namespace std;
//
////int main() {			//连接多个字符串
////	char cont = 'y';
////	string s, result;
////	cout << "请输入第一个字符串：" << endl;
////	while (cin >> s) {
////		result += s;		//拼接
////		cout << "是否继续（y or n）?" << endl;
////		cin >> cont;
////		if (cont == 'y' || cont == 'Y')
////			cout << "请输入下一个字符串：" << endl;
////		else
////			break;
////	}
////	cout << "拼接后的字符串是：" << result << endl;
////	return 0;
////}
//
//int main() {			//连接多个字符串并用空格分隔
//	char cont = 'y';
//	string s, result;
//	cout << "请输入第一个字符串：" << endl;
//	while (cin >> s) {					
//		if (!result.size())			//size函数返回字符串的长度 这句话的意思是如果长度为0 也就是result没有赋值（空字符串长度0，字节长度不为零）的情况下 执行下面的语句
//			result += s;			//第一个拼接的字符串之前不加空格
//		else
//			result = result + " " + s;
//		cout << "是否继续（y or n）?" << endl;
//		cin >> cont;
//		if (cont == 'y' || cont == 'Y')
//			cout << "请输入下一个字符串：" << endl;
//		else
//			break;
//	}
//	cout << "拼接后的字符串是：" << result << endl;
//	return 0;
//}
