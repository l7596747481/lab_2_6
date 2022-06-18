#include "RightAngled.h"

#include <sstream>

using namespace std;

int RightAngled::count = 0;
int RightAngled::Pair::count = 0;

RightAngled::RightAngled()
	:pair(Pair())
{
	RightAngled::count++;
}

RightAngled::RightAngled(Pair v)
	: pair(v)
{
	RightAngled::count++;
}

RightAngled::RightAngled(const RightAngled& v)
	: pair(v.pair)
{
	RightAngled::count++;
}

RightAngled::~RightAngled()
{ 
	RightAngled::count--;
}


RightAngled& RightAngled::operator = (const RightAngled& v)
{
	pair = v.pair;

	return *this;
}

RightAngled::operator string () const
{
	stringstream ss;
	ss << "Pair :\n" << pair << '\n';

	return ss.str();
}

ostream& operator <<(ostream& out, const RightAngled& a)
{
	return out << string(a);
}

istream& operator >>(istream& in, RightAngled& a)
{

	in >> a.pair;
	return in;
}

double RightAngled::Hypotenuse()
{
	double a = pair.GetFirst();
	double b = pair.GetSecond();

	return sqrt(a * a + b * b);
}

double RightAngled::Area() const
{
	return pair.Product() / 2;
}

int RightAngled::getCount()
{
	return RightAngled::count;
}

RightAngled::Pair::Pair()
	: first(0), second(0)
{
	RightAngled::Pair::count++;
}

RightAngled::Pair::Pair(const double f, const double s)
	: first(f), second(s)
{
	RightAngled::Pair::count++;
}

RightAngled::Pair::Pair(const Pair& v)
	: first(v.first), second(v.second)
{
	RightAngled::Pair::count++;
}

RightAngled::Pair::~Pair()
{
	RightAngled::Pair::count--;
}

RightAngled::Pair& RightAngled::Pair::operator = (const Pair& v)
{
	first = v.first;
	second = v.second;

	return *this;
}

RightAngled::Pair::operator string () const
{
	stringstream ss;
	ss << "first = " << first << '\n';
	ss << "second = " << second << '\n';

	return ss.str();
}

ostream& operator <<(ostream& out, const RightAngled::Pair& a)
{
	return out << string(a);
}

istream& operator >>(istream& in, RightAngled::Pair& a)
{
	double f, s;
	cout << "first = "; in >> f;
	cout << "second = "; in >> s;
	a.SetFirst(f);
	a.SetSecond(s);
	return in;
}

RightAngled::Pair& RightAngled::Pair::operator ++()
{
	++first;
	return *this;
}

RightAngled::Pair& RightAngled::Pair::operator --()
{
	--first;
	return *this;
}

RightAngled::Pair RightAngled::Pair::operator ++(int)
{
	Pair t(*this);
	second++;
	return t;
}

RightAngled::Pair RightAngled::Pair::operator --(int)
{
	Pair t(*this);
	second--;
	return t;
}

double RightAngled::Pair::Product() const
{
	return first * second;
}

int RightAngled::Pair::getCount()
{
	return RightAngled::Pair::count;
}