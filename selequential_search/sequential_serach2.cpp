#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int array[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, };
	int input;
		
	cout << "input a number in 3141592653 :\n";
	cin >> input;
	
	int find = 0;
	int ans = 0;
	while(ans<10)
	{
		if (array[ans] == input)
		{
			cout<<input<< "in"<< ans<<"\n";
			ans++;
			find++;
		}
		else
		{
			ans++;
		}
	}
	if (find == 0)
		{
		cout<<input<<"is not in array";
		}
	else
		{
		cout<<input<<"find "<<find<<" time(s) in array";
		}
		return 0;

}
