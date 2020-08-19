//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	vector<unsigned> vUs(11);		//该vector对象记录各分数段的人数，初始值均为0	100是单独一组的
//	auto it = vUs.begin();
//	int n=0;
//	int iVal;
//	cout << "请输入一组成绩（0-100）：" << endl;
//	while (cin >> iVal) 
//		if (iVal < 101)
//		{
//			++* (it + iVal / 10);	//利用迭代器定位到对应元素，加1
//			++n;
//		}
//	cout << "您总共输入了 " << n << " 个成绩" << endl;
//	cout << "各分数段的人数分布是（成绩从低到高）：" << endl;
//	for (it = vUs.begin(); it != vUs.end(); it++)
//		cout << *it <<" ";
//	cout << endl;
//	return 0;
//}