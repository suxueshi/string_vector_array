//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//int main() {
//	vector<string> vString;		//Ԫ������Ϊstring��vector����
//	string s;
//	char cont = 'y';
//	cout << "�������һ���ʣ� " << endl;
//	while (cin >> s) {
//		vString.push_back(s);		//��vector���������Ԫ��
//		cout << "��Ҫ������y/n��?" << endl;
//		cin >> cont;
//		if (cont != 'y' && cont != 'Y')
//			break;
//		cout << "��������һ���ʣ�" << endl;
//	}
//	cout << "ת����Ľ���� " << endl;
//	for (auto& mem : vString) {		//ʹ�÷�Χforѭ������vString�е�ÿ��Ԫ��
//		for (auto& c : mem)			//ʹ�÷�Χforѭ��������mem�е�ÿ���ַ�
//			c = toupper(c);			//��дΪ��д��ĸ��ʽ
//		cout << mem << endl;
//	}
//	return 0;
//}