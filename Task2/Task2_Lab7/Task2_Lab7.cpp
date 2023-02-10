
#include <iostream>

using namespace std;

class Rational
{
    int numerator_ = 0;
    int denominator_ = 1;

public:
    int Numerator() const
    {
        return numerator_;
    }

    int Denominator() const
    {
        return denominator_;
    }

    void print()
    {
        printf("%d/%d\n", numerator_, denominator_);
    }

    Rational()
    {

    }

    Rational(int num)
    {
        numerator_ = num;
    }

    Rational(int num, int den)
    {
        numerator_ = num;
        denominator_ = den;

        while (num > 0 && den > 0)
        {
            if (num > den)
                num %= den;
            else
                den %= num;
        }

        if (den < 0)
        {
            numerator_ = -num;
            denominator_ = -den;
        }

        double c = num + den;

        numerator_ /= c;
        denominator_ /= c;
    }
};

int main()
{
    Rational zero;
    zero.print();

    Rational drob{ 7 };
    drob.print();

    Rational nod{ 6, 15 };
    nod.print();

    Rational nod2{ 8, -6 };
    nod2.print();
}