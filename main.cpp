#include <iostream>
using namespace std;

void pr1(){
    int a[3][4];
    for(int i=0;i<3;i++){    for(int j=0;j<4;j++){    cin >> *(*(a + i) + j);}}
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){    cout << *(*(a + i) + j) << " ";}
        cout << endl;
    }
}

double probability(int *y,int *w) {
    return (7-max(*y, *w))/6.;
}

void pr2() {
    int a[2][3];
    for(int i=0;i<2;i++){    for(int j=0;j<3;j++){    cin >> *(*(a + i) + j);}}
    *(*(a + 1) + 2) = 100;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){    cout << *(*(a + i) + j) << " ";}
        cout << endl;
    }
}
void pr4test() {
    srand(time(0));
    int n;   cout << "Enter the number of test: "; cin >> n;
    cout << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Test #" << i + 1 << ":" << endl;
        int A = rand() % 6 + 1; int B = rand() % 6 + 1;
        cout << "A roll: " << A << ", B roll: " << B << endl;
        cout << "Probability that D wins: " << probability(&A, &B) << endl;
        cout << "---------------------------------" << endl;
    }
}

void pr6() {
    int* p = new int(42);
    // int* p = new int[5]; malloc a memory for array of 5 int
    cout << *p << endl;
    delete p;
    cout << *p << endl; // rand value
    p = nullptr;
}

void pr7() {
    int *p = new int[5]; //malloc a memory for array of 5 int
    for (int i = 0; i < 5; ++i){    *(p +i) = i * 1;}
    cout << endl;
    // memory leak occurs here because we forgot to dealloc mem
    // delete[] p; //
}

int main() {
    pr6();
    return 0;
}