////标准库sting的输入运算符自动忽略开头的空白（包括空格符，换行符，制表符等），从第一个真正的字符开始读起，直到遇见下一个空白为止
////getline函数会在最终的字符串中保留输入时的空白符，直到遇见换行符为止，此时换行符也被读进来，但是并不存储在最后的字符串中。
//
////示例如下
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//	string word, line;
//	cout << "请选择读取字符串的方式： 1表示逐词读取，2表示整行读取" << endl;
//	char ch;
//	cin >> ch;
//	if (ch == '1') {
//		cout << "请输入字符串： welcome to C++ family!" << endl;
//		cin >> word;
//		cout << "系统读取的有效字符串是：" << endl;
//		cout << word << endl;
//		return 0;
//	}
//	cin.clear();
//	cin.sync();// 清空输入缓冲区   如果标示符没有改变那么即使清除了数据流也无法输入。所以两个要联合起来使用
//	if (ch == '2') {														
//		cout << "请输入字符串： welcome to C++ family!" << endl;
//		getline(cin, line);						//这里输入2之后一个回车程序就结束了 相当于getline读到了一个空字符串
//		cout << "系统读取的有效字符串是：" << endl;
//		cout << line << endl;
//		return 0;
//	}
//	cout << "您的输入有误！";
//	return -1;
//}