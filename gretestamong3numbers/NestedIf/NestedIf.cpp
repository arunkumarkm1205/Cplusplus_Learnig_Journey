#include <iostream>

int main()
{
	int a, b, c;
	std::cout << "enter three numbers" << std::endl;
	std::cin >> a >> b >> c;
	if (a == b == c)
		std::cout << "all veriable are equal" << std::endl;
	else
	{
		if (a > b && a > b)
			std::cout << "a";
		else
		{
			if (b > c)
				std::cout << "b";
			else
				std::cout << "c";

		}
	}
    return 0;

}
