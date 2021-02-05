#include <iostream>
#include <vector>

using namespace std;

void arrayFloatOutput(const vector<float> &a)
{
    for(int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void arrayIntOutput(const vector<int> &a)
{
    for(int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}


void arrayFloatInput(vector<float> &a)
{
    float x;
    while (cin >> x)
    {
        /* code */
        a.push_back(x);
    }
}

void arrayIntInput(vector<int> &a, int element[], int n)
{
    int i = 0;
    a.resize(0);
    while (i < n)
    {
        /* code */
        a.push_back(element[i]);
        i++;
    }
}

void arrayIntCat(vector<int> &dest, vector<int> &src)
{
    int size_1 = dest.size(), size_2 = src.size();
    int index = size_1, new_size = size_1 + size_2, i = 0;
    dest.resize(new_size);
    while(i < size_2)
    {
        dest[index] = src[i];
        index++;
        i++;
    }
}

void arrayIntCutFrom(vector<int> &a, int pos, vector<int> &b)
{
    int size = a.size();
    int j = pos;
    if(j < 0 || j >= pos)
        return;
    b.resize(0);
    while(j < size)
    {
        b.push_back(a[j]);
        j++;
    }
    a.resize(pos);
}

int main(void)
{
    vector<float> a;

    vector<int> b, c, d;

    int elements[] = {1, 2, 4, 5, 6, 7};

    cout << "Input an array, press Ctr X then enter to stop:" << endl;
    arrayFloatInput(a);
    cout << "Element(s) in the array:" << endl;
    arrayFloatOutput(a);

    arrayIntInput(b, elements, 6);
    arrayIntOutput(b);    
    arrayIntInput(c, elements, 6);
    arrayIntCat(c, b);
    arrayIntOutput(c);   

    arrayIntCutFrom(c, 4, d);
    arrayIntOutput(d);
    return 0;
}