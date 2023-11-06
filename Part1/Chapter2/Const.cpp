#include <iostream>
using namespace std;

int main(void){
    const int num = 12;
    const int * ptr = &num;
    cout << ptr << " || " << *ptr << endl;
    const int &ref = *ptr;;
    cout << &ref << " || " << ref << endl;
    return 0;
}
