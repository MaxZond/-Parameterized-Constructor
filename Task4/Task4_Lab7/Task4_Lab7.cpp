#include <iostream>
#include <cmath>

using namespace std;

class Point
{
	double m_a = 0;
	double m_b = 0;

public:
	void print()
	{
		cout << "Point(" << m_a << ", " << m_b << ")" << endl;
	}

	const double Num() const
	{
		return m_a;
	}

	const double Drob() const
	{
		return m_b;
	}

	Point() = default;

	Point(double first, double second)
	{
		m_a = first;
		m_b = second;
	}
};

double distanceTo(Point a, Point b)
{
	return sqrt((a.Num() - b.Num()) * (a.Num() - b.Num()) + (a.Drob() - b.Drob()) * (a.Drob() - b.Drob()));
}

int main()
{
	Point first;
	Point second(2.0, 5.0);

	first.print();
	second.print();

	cout << "Distance between two points: " << distanceTo(first, second);
	return 0;
}