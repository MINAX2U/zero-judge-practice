#include <iostream>

using namespace std;

int main()
{
 int n =0;
 double arr[5];
 double d, r =0; //d = 等差的公差, r = 等比的公差

 cin >>n;

 for (int i=0; i<n; i++)
 {
     for (j=0; j<4; j++)
     {
         cin >> arr[j];
     }
    //等差
    if (arr[1]-arr[0]==arr[2]-arr[1])
    {
        d = arr[1] - arr[0];
        arr[4] = arr[3] +d;

        for( int j=0; j<5; j++)
        {
            cout <<arr[j] << ' ';
        }
        cout << endl;
    }

    else //等比
    {
        r = arr[1] / arr[0];
        arr[4] = arr[3] * r;

        for (int j=0; j<5; j++)
        {
            cout <<arr[j] << ' ';
        }
        cout <<endl;
    }
 }

 return 0;
}