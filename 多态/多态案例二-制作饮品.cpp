//#include <iostream>
//using namespace std;
//
//// ������
//class Abstract
//{
//public:
//	virtual void boil() = 0;
//	virtual void infusion() = 0;
//	virtual void pourInCup() = 0;
//	virtual void addOther() = 0;
//
//	void makeDrinking()
//	{
//		boil();
//		infusion();
//		pourInCup();
//		addOther();
//	}
//};
//
//class coffer : public Abstract
//{
//public:
//	virtual void boil()
//	{
//		cout << "����ũ��ɽȪ" << endl;
//	}
//	virtual void infusion()
//	{
//		cout << "���뿧�� " << endl;
//	}
//	virtual void pourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	virtual void addOther() 
//	{
//		cout << "�����Ǻ���" << endl;
//	}
//};
//
//class Tea : public Abstract
//{
//public:
//	virtual void boil()
//	{
//		cout << "����ũ��ɽȪ" << endl;
//	}
//	virtual void infusion()
//	{
//		cout << "�����Ҷ " << endl;
//	}
//	virtual void pourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	virtual void addOther()
//	{
//		cout << "��������" << endl;
//	}
//
//};
//
//void doDrinking(Abstract* abs)
//{
//	abs->makeDrinking();
//}
//
//void test01()
//{
//	doDrinking(new coffer);
//	cout << "---------------------------------" << endl;
//	doDrinking(new Tea);
//
//
//	cout << "---------------------------------" << endl;
//	Abstract* abs = new coffer;
//	abs->makeDrinking();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}