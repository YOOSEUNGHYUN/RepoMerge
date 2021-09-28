#include <iostream> // . 없는건 cpp표준
#include <windows.h> //<<윈도우 헤더파일임 ,h는 헤더파일 

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
	//수업이라서 쓰는거지 상용 프로그램에 사용하면 바로 해킹당함.
	system( "cls" ); //콘솔창 clear, 시스템 메인 함수 호출한다. command 
	cout << "그린다." << endl;
}
