#include <iostream>
#include <math.h>
using namespace std;

class PhanSo
{
protected:
    int tu;
    int mau;
public:
    PhanSo()
    {
        tu = 0 ;
        mau = 1;
    }
    PhanSo(int x, int y )
    {
        tu = x;
        mau = y;
    }
    PhanSo(int x)
    {
        tu = x;
        mau = 1;
    }
    void RutGon();
    void xuat();
    PhanSo operator+(const PhanSo&);
};
void PhanSo ::RutGon()
{
    int ucln;
    int a = abs(tu);
    int b = abs(mau);
    if( a == 0 || b == 0)
        ucln = a+b;
    else
    {
        while(a != b)
        {
            if( a > b )
            {
                a -= b;
            }
            else
            {
                b -= a;
            }
        }
        ucln = a;
    }
    tu /= ucln;
    mau /= ucln;

}
PhanSo PhanSo :: operator+ (const PhanSo& x)
{
    PhanSo temp;
    temp.tu = tu * x.mau + mau * x.tu;
    temp.mau = mau * x.mau;
    temp.RutGon();
    return temp;
}
void PhanSo ::xuat()
{
    cout << tu << "/" << mau;
}
int main()
{
    PhanSo a;
    PhanSo b(1,2);
    PhanSo c(3);
    a = b + c;
    a.xuat();
    return 0;
}
