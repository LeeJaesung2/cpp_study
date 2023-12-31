#include <iostream>
using namespace std;

void SwapPointer(int *(&ptr1), int *(&ptr2)){
    int *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

}

int main(void){
    int num1 = 10;
    int *ptr1 = &num1;
    int num2 = 20;
    int *ptr2 = &num2;
    cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
    cout << "ptr1 : " << ptr1 << ", *ptr1 : " << *ptr1 << endl;
    cout << "ptr2 : " << ptr2 << ", *ptr2 : " << *ptr2 << endl;

    SwapPointer(ptr1, ptr2);

    cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
    cout << "ptr1 : " << ptr1 << ", *ptr1 : " << *ptr1 << endl;
    cout << "ptr2 : " << ptr2 << ", *ptr2 : " << *ptr2 << endl;
    return 0;
}