#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void DIVFOUR()
{
    int n(0);
    int k(0);
    cin >> n;
    vector<int> numbers(n,0);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
    for (int i(0); i<n; i++)
    for (int j(i+1); j<n; j++)
    for (int q(j+1); q<n; q++)
        if ((numbers[i]+numbers[j]+numbers[q])%4==0)
            k=k+1;
    cout << k;


}
 int main()
{
    DIVFOUR();

}

