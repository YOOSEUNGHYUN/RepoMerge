#include <iostream>

using namespace std;

int main()
{
	//char : ���� ������ ǥ���� �� ���� , �Ѱ��� ���ڸ� ���� �� ����
	char b[] = { 'a', 'b', 'c', '\o' };
	// null ���� '\0;
	// "" >> ū����ǥ���� ��������� null���ڰ� ���ԵǾ����� =>string
	cout << b << endl;
	
	return 0;
}


/*
* //bool : 0 Ȥ�� 1�� ��Ÿ����. 0=false, 1=true
	bool a = 0;
	bool b = 1;
	bool c = 10;

	cout << a << " " << b << " " << c << endl;
	return 0;

*/ 
	
