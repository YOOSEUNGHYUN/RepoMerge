#include <iostream> // . ���°� cppǥ��
#include <windows.h> //<<������ ��������� ,h�� ������� 

using namespace std;

void Input();
void Process();
void Render(); 

char Key;

bool bGameState = true;

int main()
{
	
	while (bGameState)  
	{
		Input();
		Process();
		Render();
	}

	return 0;
}

void Input()
{
	cin >> Key;
}

void Process()
{
	if (Key == 'q' || Key == 'Q')
	{ 
		bGameState = false;
	}
}

void Render()
{
	//�����̶� ���°��� ��� ���α׷��� ����ϸ� �ٷ� ��ŷ����.
	system( "cls" ); //�ܼ�â clear, �ý��� ���� �Լ� ȣ���Ѵ�. command 
	cout << "�׸���." << endl;
}
