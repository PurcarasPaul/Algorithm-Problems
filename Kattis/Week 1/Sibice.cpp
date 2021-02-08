#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N, W, H,a;
    double x;
    cin >> N >> W >> H;
    x = sqrt((W * W) + (H * H));
    for (int i = 1;i <= N;i++)
    {
        cin >> a;
        if (x>=a)
            cout << "DA"<<endl;
        else if(x<a) cout << "NE"<<endl;
    }
}