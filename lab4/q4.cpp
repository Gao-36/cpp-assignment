#include <iostream>

using namespace std;

class Number
{
private:
    int x, y;

public:
    Number(int a, int b)
    {
        x = a;
        y = b;
    }
    int getMax()
    {
        return (x > y) ? x : y;
    }
};

int main()
{
    class Number n(10, 15);
    int max = n.getMax();
    cout << max;
}