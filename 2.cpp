#include<iostream>
using namespace std;
int main()
{
	int i;
	string j;
	while(cin >> i >> j)
	{
		int max = 0;
		int winner = j.length();
		int b = j.length()/i;
		for(int a = j.length() - 1; a >= 0; a-=i, b--)
		{
			int num = 0;
			num = num + j[a] - 48;
			//cout << num << endl;
			for(int b = 1; b < i && a-b >= 0; b++)
			{
				num = num + j[a - b] - 48;
			}
			if(max <= num)
			{
				max = num;
				winner = (j.length()/i) - (b-1);
			}
			//cout << winner  << " " << max << endl;
		}
		cout << winner  << " " << max << endl;
	}
	return 0;
    }
