//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {	//读入一组整数存入vector对象，将相邻整数的和输入
//	vector<int> vInt;
//	int iVal;
//	cout << "请输入一组数字： " << endl;
//	while (cin >> iVal) 
//		vInt.push_back(iVal);
//	if (vInt.cbegin() == vInt.cend()) {			//如果vInt为空  则cbegin和cend都返回尾后迭代器
//		cout << "没有任何元素" << endl;
//		return -1;
//	}
//	cout << "相邻两数的和依次是： " << endl;
//	for (auto it=vInt.begin();it!=vInt.cend()-1;it+=2) {		//这里结果是正确的 索引超出范围了 不懂为什么
//		cout << *it + *(it+1) << " ";
//		if ((it - vInt.end() + 1) % 10 == 0)
//			cout << endl;
//	}
//	if (vInt.size() % 2 != 0)	//如果元素个数是奇数，单独处理最后一个元素
//		cout << *(vInt.cend()-1);
//	return 0;
//}
//
////int main() {	//读入一组整数存入vector对象，求首尾和然后输出		
////	vector<int> vInt;
////	int iVal;
////	cout << "请输入一组数字： " << endl;
////	while (cin >> iVal)
////		vInt.push_back(iVal);
////	if (vInt.cbegin()==vInt.cend()) {			//如果vInt为空  则cbegin和cend都返回尾后迭代器
////		cout << "没有任何元素" << endl;
////		return -1;
////	}
////	auto beg = vInt.begin();
////	auto end = vInt.end();
////	cout << "首尾两数的和依次是： " << endl;
////	while (beg < end) {
////		cout << *beg + *(end-1) << " ";
////		++beg;
////		--end;
////	}
////	if (vInt.size() % 2 != 0)	//如果元素个数是奇数，单独处理最后一个元素(中间的那个元素)
////	cout << *(vInt.cbegin()+(vInt.cend()- vInt.cbegin())/2);
////	return 0;
////}