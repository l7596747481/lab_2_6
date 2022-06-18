#include "RightAngled.h"

int main()
{
	RightAngled::Pair c(5, 6);
	cout << c;
	RightAngled::Pair a;
	cin >> a;
	cout << "\nProduct = " << a.Product() << "\n\n";
	cout << "Size of class = " << RightAngled::Pair::getCount() << '\n';

	cout << ++a << '\n';
	cout << --a << '\n';
	cout << a++ << '\n';
	cout << a-- << "\n\n";

	RightAngled b;
	cin >> b;
	cout << "\nArea of triangle = " << b.Area() << '\n';
	cout << "Hypotenuse of triangle = " << b.Hypotenuse() << '\n';
	cout << b;
	cout << "Size of class = " << RightAngled::getCount();


	cin.get();
	cin.get();
	return 0;
}