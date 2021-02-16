#include <iostream>

using namespace std;

int main()
{
	int num, simp = 2;
	bool isPrime = false;
	cout << "Enter a number: ";
	cin >> num;
	while (num >= 3 && isPrime == false)
	{
		num--;
		for (int i = 2; i <= num / 2; i++)
		{
			if (num % i == 0)
			{
				isPrime = false;
				break;
			}
			isPrime = true;
			simp = num;
		}
	}
	cout << "\nPrevious simple number is: " << simp << endl;
}