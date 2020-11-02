#include<iostream>
using namespace std;
int main()
{
	int i;
	while(cin >> i)
	{
		int x = i - (i/1000)*100;
		int y = i - (i/2000)*200;
		//cout << x << " " << y << endl;
		if(x < y)
			cout << x << " " << 1 << endl;
		else
			cout << y << " " << 0 << endl;
	}
	return 0;
    }
