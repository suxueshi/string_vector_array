//#include<iostream>
//#include<vector>
//using namespace std;
//
////int main() {	//读入一组整数存入vector对象，将相邻整数的和输入
////	vector<int> vInt;
////	int iVal;
////	cout << "请输入一组数字： " << endl;
////	while (cin >> iVal) 
////		vInt.push_back(iVal);
////		if (vInt.size() == 0) {
////			cout << "没有任何元素" << endl;
////			return -1;	
////		}
////	cout << "相邻两数的和依次是： " << endl;
////	for (int i = 0; i < static_cast<int>(vInt.size()) - 1; i += 2) {		// static_cast<int> 强制转换为int类型 也可以前面用decltype（vInt.size()）去推断i
////		cout << vInt[i] + vInt[i + 1] << " ";
////		if ((i + 2) % 10 == 0)
////			cout << endl;
////	}
////	if (vInt.size() % 2 != 0)	//如果元素个数是奇数，单独处理最后一个元素
////		cout << vInt[vInt.size() - 1];
////	return 0;
////}
//
//int main() {	//读入一组整数存入vector对象，求首尾和然后输出
//	vector<int> vInt;
//	int iVal;
//	cout << "请输入一组数字： " << endl;
//	while (cin >> iVal)
//		vInt.push_back(iVal);
//	if (vInt.size() == 0) {
//		cout << "没有任何元素" << endl;
//		return -1;
//	}
//	cout << "首尾两数的和依次是： " << endl;
//	for (decltype(vInt.size()) i = 0; i < vInt.size() / 2; ++i) {		// static_cast<int> 强制转换为int类型 也可以前面用decltype（vInt.size()）去推断i
//		cout << vInt[i] + vInt[vInt.size() - i - 1] << " ";
//		if ((i + 1) % 5 == 0)
//			cout << endl;
//	}
//	if (vInt.size() % 2 != 0)	//如果元素个数是奇数，单独处理最后一个元素(中间的那个元素)
//		cout << vInt[vInt.size() / 2];
//	return 0;
//}