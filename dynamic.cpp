#include <iostream>
using namespace std;
void func()
{
    int *ptr = new int;
    *ptr = 5;
    cout << *ptr;
    delete ptr;
}
int main()
{
    func();
    return 0;
}