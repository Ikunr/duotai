#include <iostream>
using namespace std;

// CPU
class CPU
{
public:
	virtual void calculate() = 0;
};

// 显卡
class VideoCard
{
public:
	virtual void display() = 0;
};

// 内存条
class Memory
{
public:
	virtual void storage() = 0;
};

class InterCpu : public CPU
{
	void calculate()
	{
		cout << "Inter的CPU开始计算了" << endl;
	}
};

class InterCard : public VideoCard
{
public:
	void display()
	{
		cout << "Inter的显卡正在显示" << endl;
	}
};

class InterMemory : public Memory
{
public:
	void storage()
	{
		cout << "Inter的内存条正在存储" << endl;
	}
};

class LenovoCpu : public CPU
{
	void calculate()
	{
		cout << "Lenovo的CPU开始计算了" << endl;
	}
};

class LenovoCard : public VideoCard
{
public:
	void display()
	{
		cout << "Lenovo的显卡正在显示" << endl;
	}
};

class LenovoMemory : public Memory
{
public:
	void storage()
	{
		cout << "Lenovo的内存条正在存储" << endl;
	}
};

class Computer
{
public:
	Computer(CPU* cpu, VideoCard* card, Memory* memory)
	{
		m_cpu = cpu;
		m_card = card;
		m_memory = memory;
	}
	~Computer()
	{
		if (m_cpu)
		{
			delete m_cpu;
			m_cpu = nullptr;
		}
		if (m_card)
		{
			delete m_card;
			m_card = nullptr;
		}
		if (m_memory)
		{
			delete m_memory;
			m_memory = nullptr;
		}
	}

	void doWork()
	{
		m_cpu->calculate();
		m_card->display();
		m_memory->storage();
	}

private:
	CPU * m_cpu;
	VideoCard * m_card;
	Memory * m_memory;
};

void test01()
{
	CPU* interCpu = new InterCpu;
	VideoCard* interCard = new InterCard;
	Memory* interMemory = new InterMemory;
	

	Computer *computer = new Computer(interCpu, interCard, interMemory);
	computer->doWork();
	delete computer;

	cout << "--------------------------------------" << endl;
	CPU* lenovoCpu = new LenovoCpu;
	VideoCard* lenovoCard = new LenovoCard;
	Memory* lenovoMemory = new LenovoMemory;
	
	Computer* computer2 = new Computer(lenovoCpu, lenovoCard, lenovoMemory);
	computer2->doWork();
	delete computer2;
}


int main()
{
	test01();
	system("pause");
	return 0;
}