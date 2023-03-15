#include<iostream>
using namespace std;
typedef int (*funcPointer) (int a, int b);
int add(int a, int b){
    return a+b;
}
int mul (int a, int b){
    return a*b;
}
int cal(int m, int n, funcPointer p){
    return p(m,n);
}
int main(){
    // int x = 9;
    // int y = 10;
    // funcPointer p = add;
    // cout<<cal(x,y,p)<<"\n";
    // p = mul;
    // cout<<cal(x,y,p)<<"\n";
    // if(p==&mul){
    //     cout<<"Mul function";
    // }
    int a[3] = {1,2,3};
    int *pointer = a;
    cout<<pointer[0]<<"\n";
    int (*pointer2)[10] = &a; //Wrong
    cout<<*pointer2[0]<<"\n";
    return 0;
}