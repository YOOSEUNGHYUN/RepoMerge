#include <iostream>

using namespace std;

/*
int main()
{
	//���� ���̸� ���ϴ� ���α׷�
	//������ * ������ * ����
	const float PIE = 3.1415926535;
	int r = 3;
	float s = r * r * PIE;

	//1. �ٲ� �ʿ䰡 ���� ��
	//2. �ٲ��� �ȵǴ� ��
	//=���

	int r2 = 3;
	float s2 = r2 * r2 * 3.14;

	cout << s << endl;

	return 0;
}
*/

int main()
{	//�������� ��ȯ
	/*
	 1. Ư�� ���������� ������ ���� �ٸ� ���������� ���� �������� ��
	 2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	 3. �Լ��� �Ű������� ������ ��
	*/
	int a = 3.141592;
	cout << a << endl;

	//���������� �������� ��ȯ
	//typeName(a) (typeName)a
	char ch = 'M';
	cout << static_cast<int>(ch) << endl;

	//C++
	//static_cast<typeName> 

	return 0;
}