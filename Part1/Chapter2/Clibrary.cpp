#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    char arr1[] = "Hello ";
    char arr2[] = "world!";
    char arr3[100];

    cout << arr1 << endl;

    cout << "length: " << strlen(arr1) << endl;

    strcat(arr1, arr2);
    cout << arr1 << endl;

    strcpy(arr3, arr1);
    cout << arr3 << endl;

    if(strcmp(arr3, "Hello world") != 0){
        cout << "diff" << endl;
    }
    
}


