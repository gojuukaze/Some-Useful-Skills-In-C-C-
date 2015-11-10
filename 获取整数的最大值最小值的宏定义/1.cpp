#include<iostream>
using namespace std;
#define MAX_INT ((unsigned)(-1)>>1)
#define MIN_INT (~MAX_INT)
int main()
{

        cout << MAX_INT << endl;
        cout << (int)MIN_INT << endl;
        return 0;
}