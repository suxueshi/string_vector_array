//#include<iostream>
//#include<vector>
//using namespace std;
//
////int main() {	//����һ����������vector���󣬽����������ĺ�����
////	vector<int> vInt;
////	int iVal;
////	cout << "������һ�����֣� " << endl;
////	while (cin >> iVal) 
////		vInt.push_back(iVal);
////		if (vInt.size() == 0) {
////			cout << "û���κ�Ԫ��" << endl;
////			return -1;	
////		}
////	cout << "���������ĺ������ǣ� " << endl;
////	for (int i = 0; i < static_cast<int>(vInt.size()) - 1; i += 2) {		// static_cast<int> ǿ��ת��Ϊint���� Ҳ����ǰ����decltype��vInt.size()��ȥ�ƶ�i
////		cout << vInt[i] + vInt[i + 1] << " ";
////		if ((i + 2) % 10 == 0)
////			cout << endl;
////	}
////	if (vInt.size() % 2 != 0)	//���Ԫ�ظ����������������������һ��Ԫ��
////		cout << vInt[vInt.size() - 1];
////	return 0;
////}
//
//int main() {	//����һ����������vector��������β��Ȼ�����
//	vector<int> vInt;
//	int iVal;
//	cout << "������һ�����֣� " << endl;
//	while (cin >> iVal)
//		vInt.push_back(iVal);
//	if (vInt.size() == 0) {
//		cout << "û���κ�Ԫ��" << endl;
//		return -1;
//	}
//	cout << "��β�����ĺ������ǣ� " << endl;
//	for (decltype(vInt.size()) i = 0; i < vInt.size() / 2; ++i) {		// static_cast<int> ǿ��ת��Ϊint���� Ҳ����ǰ����decltype��vInt.size()��ȥ�ƶ�i
//		cout << vInt[i] + vInt[vInt.size() - i - 1] << " ";
//		if ((i + 1) % 5 == 0)
//			cout << endl;
//	}
//	if (vInt.size() % 2 != 0)	//���Ԫ�ظ����������������������һ��Ԫ��(�м���Ǹ�Ԫ��)
//		cout << vInt[vInt.size() / 2];
//	return 0;
//}