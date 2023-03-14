#include<iostream>
using namespace std;
int ham(int a, int b){
    return a+b;
}
int main(){
    int (*p)(int,int);
    p = ham;
    cout<<(*p)(2,3);

    return 0;
}