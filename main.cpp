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

double probability(int *y,int *w) {
    return (7-max(*y, *w))/6.;
}

void pr2() {
    cout << "hello world" << endl;
}

void pr4test() {
    srand(time(0));
    int n;   cout << "Enter the number of test: "; cin >> n;
    cout << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Test #" << i + 1 << ":" << endl;
        int A = rand() % 6 + 1; int B = rand() % 6 + 1;
        cout << "A roll: " << A << ", B roll: " << B << endl;
        cout << "Probability that Dilya wins: " << probability(&A, &B) << endl;
        cout << "---------------------------------" << endl;
    }
}

int main() {
    pr4test();
    return 0;
}