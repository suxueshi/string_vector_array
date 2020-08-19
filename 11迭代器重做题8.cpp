//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int main() {			//迭代器是访问容器元素的通用机制，类似于指针，也能进行对象的间接访问
//	vector<int> v1;		//本题只需要输出vector对象的内容而无须对其进行改变 所以使用cbegin和cend 而非begin和end
//	vector<int> v2(10);
//	vector<int> v3(10, 42);
//	vector<int> v4{ 10 };
//	vector<int> v5{ 10,42 };
//	vector<string> v6{ 10 };
//	vector<string> v7{ 10,"hi" };
//
//	cout << "v的元素个数是： " << v3.size() << endl;
//	if (v3.cbegin() !=v3.cend()) {			//当vector含有元素时逐个输出
//		cout << "v1的元素分别是： " << endl;
//		for (auto it = v3.cbegin(); it != v3.cend(); it++)			//使用范围for循环遍历每一个元素
//			cout << *it << " ";
//		cout << endl;
//	}
//	//就改了v3吧 其他改法一样懒得改了
//
//	return 0;
//}