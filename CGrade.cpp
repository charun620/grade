#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
 
	cout << "Enter Number :";
	cin >> n;
	if ((n >= 0)&& (n <= 59))
	{
		cout << "you got F";
	}
	else if (n >= 60 && n <= 69)
	{
		cout << "you got D\nyou survived to F" << endl;
	} 
	else if (n >= 70 && n <= 79)
	{
		cout << "you got C\nTry a little  bit" << endl;
	}
	else if (n >= 80 && n <= 89)
	{
		cout << "you got B\ngoodwork" << endl;
	}
	else if (n >= 90 && n <= 100)
	{
		cout << "you got A\ncongratulations" << endl;
	}
	  cout << "End" << endl;
	
	return (0);
}
