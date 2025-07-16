#include <iostream>
using namespace std;

class Abstract
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};

class AddCalculation : public Abstract
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

class SubCalculation : public Abstract
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

class MutCalculation : public Abstract
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test01()
{
	Abstract *abs = new AddCalculation;
	abs->m_Num1 = 10;
	abs->m_Num2 = 10;
	cout<< abs->m_Num1 << " + " << abs->m_Num2 << " = " << abs->getResult() << endl;

	delete abs;
	abs = new SubCalculation;
	abs->m_Num1 = 30;
	abs->m_Num2 = 10;
	cout << abs->m_Num1 << " - " << abs->m_Num2 << " = " << abs->getResult() << endl;
	delete abs;

	abs = new MutCalculation;
	abs->m_Num1 = 100;
	abs->m_Num2 = 100;
	cout << abs->m_Num1 << " * " << abs->m_Num2 << " = " << abs->getResult() << endl;
}




int main()
{
	test01();
	
	system("pause");
	return 0;
}