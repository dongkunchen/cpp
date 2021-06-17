#include <iostream>
using namespace std;

class CPU
{
public:
	virtual void calculate() = 0;
};

class VideoCard
{
public:
	virtual void display() = 0;
};

class Memory 
{
public:
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	void work()
	{
		m_cpu->calculate();

		m_vc->display();

		m_mem->storage();
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:

	CPU * m_cpu;
	VideoCard * m_vc;
	Memory * m_mem;
};

class IntelCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel的CPU開始計算了" << endl;
	}
};

class IntelVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel的顯卡開始顯示了" << endl;
	}
};

class IntelMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel的內存開始存儲了" << endl;
	}
};

class LenovoCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的CPU開始計算了" << endl;
	}
};

class LenovoVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的顯卡開始顯示了" << endl;
	}
};

class LenovoMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的內存開始存儲了" << endl;
	}
};

void test03()
{
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;

	Computer* computerl = new Computer(intelCpu, intelCard, intelMem);
	computerl->work();
	delete computerl;

	cout << "-------------------" << endl;
	cout << "第二台電腦開始工作" << endl;

	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "-------------------" << endl;
	cout << "第三台電腦開始工作" << endl;

	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;

}

int main3() {

	test03();

	system("pause");

	return 0;
}