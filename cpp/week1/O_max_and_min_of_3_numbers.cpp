#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // 1 2 3
    int minValu  = a, maxValue = a;
    if(b < minValu) minValu = b;
    if(c < minValu) minValu = c;

    if(b > maxValue) maxValue = b;
    if(c > maxValue) maxValue = c;

    cout<<"Min = "<<minValu<<endl;
    cout<<"Max = "<<maxValue<<endl;
}