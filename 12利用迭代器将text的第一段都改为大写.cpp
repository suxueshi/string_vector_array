//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int main() {		//��Ϊ��Ҫ����vector��������ݣ�����ʹ�õĵ�����Ӧ����begin��end������cbegin��cend
//	vector<string> text;
//	string s;		//����getline��ȡһ�λ���ֱ�ӻس�����һ���մ�����ʾ�������
//	while (getline(cin, s))//����������������ġ�a aa aaa�����Ǵ��ո��һ���ַ��� ���Ե�һ������ֻ����һ��
//		text.push_back(s);
//	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
//		//���õ���������ȫ���ַ����������մ�ֹͣѭ��
//		//*it=toupper(*it) ��仰�Ǵ���� ��Ϊtoupperֻ�ܸı䵥���ַ�
//		//�������it�������ַ����ͣ���text����Ķ�����ʵ��itrator��������ֱ��ʹ��toupper(*it)
//		for (auto it2 = it->begin(); it2 != it->end(); ++it2)
//			//���õ���������  ��ǰ�ַ��� 
//			*it2 = toupper(*it2);
//		cout << *it << endl;	//�����ǰ�ַ���
//	}
//	return 0;
//}