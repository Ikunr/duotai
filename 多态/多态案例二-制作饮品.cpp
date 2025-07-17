//#include <iostream>
//using namespace std;
//
//// 抽象类
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
//		cout << "倒入农夫山泉" << endl;
//	}
//	virtual void infusion()
//	{
//		cout << "加入咖啡 " << endl;
//	}
//	virtual void pourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	virtual void addOther() 
//	{
//		cout << "加入糖和奶" << endl;
//	}
//};
//
//class Tea : public Abstract
//{
//public:
//	virtual void boil()
//	{
//		cout << "倒入农夫山泉" << endl;
//	}
//	virtual void infusion()
//	{
//		cout << "加入茶叶 " << endl;
//	}
//	virtual void pourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	virtual void addOther()
//	{
//		cout << "加入柠檬" << endl;
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