#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int  a, b, sum, num;

	a= atoi(argv[1]);
	b = atoi(argv[2]);

	if (a >=b)
	{
		cerr << "Error!" << endl;
		return 1;
	}

	num = a;
	sum = 0;
	while (num <=b)
	{
		sum += num;
		num += 1;
	}
	
	cout << "Sum: " << sum << endl;

	return 0;
}
