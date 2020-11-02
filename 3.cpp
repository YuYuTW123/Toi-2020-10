#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long s, e, a;
	while(cin >> s >> e >> a)
	{
		long long b = 0;
		for(b = 1; (a > 0) && (s < e);b++ )
		{
			//cout << b << " " << s << " " << e << " " << a << endl;
			if(b%11 == 0)
			{
				a--;
				if(a == 0)
					break;
			}
			if(b%10 == 0 || b%10 == 9)
			{
				continue;
			}
			else if(b%3 == 0)
			{
				s += floor(s/3);
			}
			else
			{
				s += floor(s/10);
			}
		}
		if(s >= e)
		{
			cout << b << endl;
		}
		else
		{
			cout << "unsalable" << endl;
		}
	}
	return 0;
    }
