//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {	//����һ����������vector���󣬽����������ĺ�����
//	vector<int> vInt;
//	int iVal;
//	cout << "������һ�����֣� " << endl;
//	while (cin >> iVal) 
//		vInt.push_back(iVal);
//	if (vInt.cbegin() == vInt.cend()) {			//���vIntΪ��  ��cbegin��cend������β�������
//		cout << "û���κ�Ԫ��" << endl;
//		return -1;
//	}
//	cout << "���������ĺ������ǣ� " << endl;
//	for (auto it=vInt.begin();it!=vInt.cend()-1;it+=2) {		//����������ȷ�� ����������Χ�� ����Ϊʲô
//		cout << *it + *(it+1) << " ";
//		if ((it - vInt.end() + 1) % 10 == 0)
//			cout << endl;
//	}
//	if (vInt.size() % 2 != 0)	//���Ԫ�ظ����������������������һ��Ԫ��
//		cout << *(vInt.cend()-1);
//	return 0;
//}
//
////int main() {	//����һ����������vector��������β��Ȼ�����		
////	vector<int> vInt;
////	int iVal;
////	cout << "������һ�����֣� " << endl;
////	while (cin >> iVal)
////		vInt.push_back(iVal);
////	if (vInt.cbegin()==vInt.cend()) {			//���vIntΪ��  ��cbegin��cend������β�������
////		cout << "û���κ�Ԫ��" << endl;
////		return -1;
////	}
////	auto beg = vInt.begin();
////	auto end = vInt.end();
////	cout << "��β�����ĺ������ǣ� " << endl;
////	while (beg < end) {
////		cout << *beg + *(end-1) << " ";
////		++beg;
////		--end;
////	}
////	if (vInt.size() % 2 != 0)	//���Ԫ�ظ����������������������һ��Ԫ��(�м���Ǹ�Ԫ��)
////	cout << *(vInt.cbegin()+(vInt.cend()- vInt.cbegin())/2);
////	return 0;
////}