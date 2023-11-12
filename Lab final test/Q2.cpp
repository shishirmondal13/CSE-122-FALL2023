#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int denom)
    {
        if (typeid(num) != typeid(int) || typeid(denom) != typeid(int))
        {
            throw invalid_argument("Numerator and denominator must be int");
        }

        if (denom == 0)
        {
            throw invalid_argument("Denominator can not be zero");
        }

        numerator = num;
        denominator = denom;
    }

    void reduce()
    {
        int divisor = gcd(numerator, denominator);
        numerator /= divisor;
        denominator /= divisor;
    }

    string toString()
    {
        return to_string(numerator) + "/" + to_string(denominator);
    }

    Fraction add(const Fraction &other)
    {
        int resultNumerator = numerator * other.denominator + other.numerator * denominator;
        int resultDenominator = denominator * other.denominator;

        Fraction result(resultNumerator, resultDenominator);
        result.reduce();
        return result;
    }
};

int main()
{
    int num1, denom1, num2, denom2;

    cout << "Enter the first fraction numerator and denominator : ";
    cin >> num1 >> denom1;

    cout << "Enter the second fraction numerator and denominator : ";
    cin >> num2 >> denom2;

    try
    {
        Fraction frac1(num1, denom1);
        Fraction frac2(num2, denom2);

        Fraction result = frac1.add(frac2);
        cout << "Result: " << result.toString() << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
