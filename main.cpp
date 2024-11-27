#include <iostream>
#include <vector>
using namespace std;

void pr1(){
    int a[3][4];
    for(int i=0;i<3;i++){    for(int j=0;j<4;j++){    cin >> *(*(a + i) + j);}}
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){    cout << *(*(a + i) + j) << " ";}
        cout << endl;
    }
}

double probability(int *y,int *w){    return (7-max(*y, *w))/6.;}

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

void pr8() {
    int *p = new int[5]; //malloc a memory for array of 5 int
    for (int i = 0; i < 5; ++i){    *(p +i) = i + 1;}
    for (int i = 0; i < 5; ++i){    cout << *(p +i) << ' ';}
    cout << endl;
    // memory leak occurs here because we forgot to dealloc mem
    delete[] p;
}

void pr9() {
// int main(){
    int *p = new int[3];
    for (int i = 0; i < 3; ++i){    *(p +i) = i + 1;}
    int *p1 = new int[6];
    for (int i = 0; i < 3; ++i){    *(p1 +i) = *(p+i);}
    for (int i = 3; i < 6; ++i){    *(p1 +i) = i + 72;}
    delete[] p;
    for (int i = 0; i < 6; ++i){    cout << *(p1 +i) << ' ';}
    cout << endl;
    delete[] p1;
    // return 0;
}

void pr11() {
    vector<int> v;
    for (int i=0; i<5;i++){ v.push_back(i);}
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    for (int i=0; i<10;i++){ v.push_back(i);}
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    for (int i=0; i<5;i++){ v.push_back(i);}
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    for (int i=0; i<25;i++){ v.push_back(i);}
    cout << v.size() << endl;
    cout << v.capacity() << endl;
}

void pr12() {
    vector<int> v;
    for (int i=0; i<100;i++){ v.push_back(i);}
    for (int& i : v){ cout << i <<" ";} cout << endl;
    cout << "Size Before : "<< v.size() << endl;
    cout << "Cap Before : " << v.capacity() << endl;
    v.erase(v.begin() + 50, v.end());
    for (int& i : v){ cout << i <<" ";} cout << endl;
    cout << "Size After : "<< v.size() << endl;
    cout << "Cap After : " << v.capacity() << endl;
}

void pr13() {
    vector<int> v;
    for (int i=0; i<100;i++){ v.push_back(i);}
    for (int& i : v){ cout << i <<" ";} cout << endl;
    cout << "Size Before : "<< v.size() << endl;
    cout << "Cap Before : " << v.capacity() << endl;
    v.erase(v.begin(), v.begin()+50);
    for (int& i : v){ cout << i <<" ";} cout << endl;
    cout << "Size After : "<< v.size() << endl;
    cout << "Cap After : " << v.capacity() << endl;
    v.shrink_to_fit();
    cout << "Capacity after shrink_to_fit: " << v.capacity() << endl;
}

void pr14() {
    vector<int> v;
    for (int i = 0; i < 10; ++i){   v.push_back(i + 1);}
    v.resize(50);
    cout << "Size of vector after resizing: " << v.size() << endl;
    cout << "Capacity of vector after resizing: " << v.capacity() << endl;
    cout << "Estimated memory usage (in bytes): " << v.capacity() * sizeof(int) << " bytes" << endl;
}
void pr15() {
    vector<int> v(100);
    for (int i = 0; i < 100; ++i){  v[i] = i + 1;}
    for (int i = 0; i < v.size(); i += 2) {
        cout << "Before erasing element at index " << i << " with value " << v[i] << " : " << endl;
        v.erase(v.begin() + i);
        cout << "After erasing element at index " << i << " : " << endl;
        cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;
        --i;
    }
    v.shrink_to_fit();
    cout << "Final capacity after shrink_to_fit: " << v.capacity() << endl;
}

int main() {
    pr15();
    return 0;
}
