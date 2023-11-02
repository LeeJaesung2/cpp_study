#include <iostream>
using namespace std;

void Adder(int &ref){
    ref++;
}

void Change(int &ref){
    ref *= (-1);
}

int main(void){
    int val = 10;
    cout <<val <<endl;

    Adder(val);
    cout <<val <<endl;

    Change(val);
    cout <<val <<endl;

    return 0;
}