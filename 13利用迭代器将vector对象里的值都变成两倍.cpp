//#include<iostream>
//#include<vector>
//#include<ctime>
//using namespace std;
////int main() {		//我写的青春版
////	vector<int> vInt(10, 10);
////	for (auto i = vInt.begin(); i != vInt.end(); ++i) {
////	cout << (*i *= 2) << " ";
////	}
////	return 0;
////}
//
//int main() {		//标准答案的plus版本
//	vector<int> vInt;
//	srand((unsigned)time(NULL));	//生成随机数种子
//	for (int t = 0; t < 10; ++t)
//		vInt.push_back(rand() % 1000);
//	cout << "随机生成的10个数字是： " << endl;
//	for (auto i = vInt.begin(); i != vInt.end(); ++i) {
//		cout << (*i) << " ";
//	}
//	cout << endl;
//	cout << "翻倍后的10个数字是： " << endl;
//	for (auto i = vInt.begin(); i != vInt.end(); ++i) {
//		cout << (*i *= 2) << " ";
//	}
//	return 0;
//}