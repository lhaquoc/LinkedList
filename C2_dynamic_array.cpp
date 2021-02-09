#include <iostream>
#include <vector>

using namespace std;

void arrayInput(vector<float> &a)
{
    int n;
    cin >> n;
    if (n < 1)
    {
        return;
    }
    a.resize(n);
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
}

// Define dynamic array input
void arrayFloatInput(vector<float> &a)
{
    float x;
    while (cin >> x)
    {
        a.push_back(x);
    }
}

void arrayFloatOutput(vector<float> &a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
}

int main(void)
{
    vector<float> a;
    cout << "Input the number of elements:" << endl;
    arrayInput(a);
    cout << "Element(s) in array:" << endl;
    arrayFloatOutput(a);
    return 0;
}