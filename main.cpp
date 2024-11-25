#include <iostream>
using namespace std;

void pr1(){
    int a[3][4];
    for(int i=0;i<3;i++){    for(int j=0;j<4;j++){    cin >> *(&a[0][0] + i * 4 + j);}}
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){    cout << *(&a[0][0] + i * 4 + j) << " ";}
        cout << endl;
    }
}

void pr2() {

}

int main() {
    pr1();
    return 0;
}