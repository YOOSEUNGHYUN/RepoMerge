#include <iostream>

using namespace std;

int main()
{
	//char : 작은 문자형 표현할 때 쓰임 , 한가지 문자만 넣을 수 있음
	char b[] = { 'a', 'b', 'c', '\o' };
	// null 문자 '\0;
	// "" >> 큰따옴표에는 명시적으로 null문자가 포함되어있음 =>string
	cout << b << endl;
	
	return 0;
}


/*
* //bool : 0 혹은 1만 나타낸다. 0=false, 1=true
	bool a = 0;
	bool b = 1;
	bool c = 10;

	cout << a << " " << b << " " << c << endl;
	return 0;

*/ 
	
