#include <iostream>

using namespace std;

class cNgay
{
private:
    int ngay, thang , nam ;
public:
    cNgay();
    cNgay (int, int);
    cNgay (int, int, int);
    friend istream& operator>> (istream& ,cNgay&);
    friend ostream& operator<< (ostream& , const cNgay);
    bool operator< (cNgay);

};
cNgay::cNgay()
{
        ngay = 1;
        thang =  1;
        nam = 1 ;

}
cNgay::cNgay(int x, int y )
{
    nam = x;
    ngay = y ;
    thang = y;

}
cNgay::cNgay(int x , int y , int z)
{
    ngay = z;
    thang = y ;
    nam = x;
}

istream& operator>>(istream& is , cNgay& ng)
{
    cout << " nhap nam : ";
    is >> ng.nam;
    cout << " nhap thang : ";
    is >> ng.thang;
    cout << " nhap ngay :";
    is >> ng.ngay;
    return is;
}

ostream& operator<< (ostream& os ,const cNgay ng)
{
    os << "ngay : " << ng.ngay << " thang : " << ng.thang << " nam :" << ng.nam << endl;
    return os;
}
bool cNgay::operator<(cNgay x)
{
    if(nam <= x.nam)
    {
        if(nam < x.nam)
            return true;
        else
        {
            if(thang <= x.thang)
            {
                if(thang < x.thang)
                    return true;
                else
                {
                    if(ngay < x.ngay)
                        return true;

                }
            }
        }
    }
    return false;
}
int main()
{
    cNgay ng1;
    cNgay ng2(2017,1);
    cNgay ng3(2017,1,7);
    cin >> ng1;
    cout << ng1;
     if(ng1 < ng2)
        cout << "ngay 1 truoc ngay 2 " << endl;
    else
        cout << " ngay 1 khong truoc ngay 2 " << endl;

}
