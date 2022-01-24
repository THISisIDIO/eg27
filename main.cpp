#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void DIVFOUR()
{
    int n(0);
    int k(0);
    int n4(0);
    int n2(0);
    int n02(0);
    int n04(0);
    cin >> n;
    vector<int> numbers(n,0);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
    for (int i(0); i<n; i++)
    {
        if (numbers[i]%4==0)
            n4+=1;
        if (numbers[i]%2==0 and numbers[i]%4!=0)
            n2+=1;
    }
    for (int i(0); i<n; i++)
    for (int j(i+1); j<n; j++)
    {
        if ((numbers[i]%2!=0 and numbers[j]%2!=0) and (numbers[i]+numbers[j])%4!=0)
            n02+=1;
        if ((numbers[i]%2!=0 and numbers[j]%2!=0)  and (numbers[i]+numbers[j])%4==0)
            n04+=1;
    }

    cout << ((n4*(n4-1)*(n4-2))/3)+((n2*(n2-1)*n4)/2)+(n02*n2)+(n04*n4);


}
 int main()
{
    DIVFOUR();

}
