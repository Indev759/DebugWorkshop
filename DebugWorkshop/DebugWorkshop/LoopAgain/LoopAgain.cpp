#include <iostream>

int main()
{
	int size = 0;

	int t1 = 0, t2 = 1;
	int nextTerm = 0;

	std::cout << "what is the size of the series? ";
	std::cin >> size;

	while (size >= 0)
	{
		std::cout << t1 << ", ";

		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		size--;
	}

	return 0;
}