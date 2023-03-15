#include<iostream>
using namespace std;
void foo(int **g, int **&h){
    (**g)++;
    (*g)++;
    g++;
    (**h)++;
    (*h)++;
    h++;
}
int main(){
    // int a[10];
    // cout<<a[0]<<"\n"<<a[1]<<"\n";
    // int *p = a;
    // int **q = &p;
    // int **r = &p;
    // foo(q,r);
    // cout<<a[0]<<"\n"<<a[1]<<"\n";
    int a[10];
    int *p = new int;
    p = &a; //Wrong
    return 0;
}