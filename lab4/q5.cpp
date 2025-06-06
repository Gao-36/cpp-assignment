#include <iostream>

using namespace std;

class Number
{
private:
    int x, y, z;

public:
    Number(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    int getMax()
    {
        return (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
    }
};

int main()
{
    class Number n(4, 3, 10);
    int max = n.getMax();
    cout << max;
}