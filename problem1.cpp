#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	
	for (int i = 3; i < 1000; i++)
	{
		if (i % 3 == 0)
		{
			sum = sum + i;
		}	
		else if (i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	
	cout << "Sum : " << sum << endl;
	
}