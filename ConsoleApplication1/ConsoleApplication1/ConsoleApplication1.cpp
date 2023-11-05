#include <iostream>
#include <cmath>


using namespace std;
double r(const double x);
int main()
{
    double hp, hk, z;
    int n;
    cout << "hp = "; cin >> hp;
    cout << "hk = "; cin >> hk;
    cout << "n = "; cin >> n;
    double dh = (hk - hp) / n;
    double h = hp;
    while (h <= hk)
    {
        z = r(1 + pow(h, 2) - 2 * h) + 2 * r(1 + r(pow(h, 2)) - 2 * pow(r(1), 2));
        cout << h << " " << z << endl;
        h += dh;
    }
    return 0;
}
double r(const double x)
{
    if (abs(x) >= 1)
        return (1-pow(sin(x),2))/pow(exp(1),x);
    else
    {
        double S = 0;
        int j = 0;
        double a = x;
        S = a;
        do
        {
            j++;
            double R = x/((2*j+1)*2*j);
            a *= R;
            S += a;
        } while (j < 7);
        double S1 = (1 / (1 + x)) * S;
        return S1;
    }
}
