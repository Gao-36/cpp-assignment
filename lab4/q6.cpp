#include <iostream>
using namespace std;
class Swapper{
private:
    int x, y;
public:
    Swapper(int a, int b){
        x = a;
        y = b;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    void swap(){
        int temp = x;
        x = y;
        y = temp;
    }
};
int main(){
    class Swapper s(4, 7);
    cout << "x: " << s.getX() << " y: " << s.getY() << endl;
    s.swap();
    cout << "Swapped x: " << s.getX() << " y: " << s.getY() << endl;
}