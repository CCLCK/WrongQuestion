#define _CRT_SECURE_NO_WARNINGS 1



//class ClassA
//{
//public:
//	ClassA()
//	{
//		cout << "ClassA()" << endl;
//	}
//	~ClassA()
//	{
//		cout << "~ClassA()" << endl;
//	}
//};
//int main()
//{
//	ClassA* pclassA = new ClassA[5];
//	cout << sizeof(ClassA) << endl;
//	delete pclassA;
//	/*delete[] pclassA;*/
//	return 0;
//}


#include<iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout << "A()" << endl;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
private:
	int b;
	int& c = b;
	const int d = 1;
};
int main()
{
	A* a = new A;
	//A aa;
	return 0;

}