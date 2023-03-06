#include<iostream>
using namespace std;
void enterArray(int &n, int *&p){
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    p = new int[n];
    for(int i=0;i<n;++i){
        cout<<"Nhap phan tu thu "<<i<<": ";
        cin>>*(p+i);
    }
}
void reverseArray(int&n, int *&p){
    int i=0, j = n-1;
    while(i<j){
        int temp = p[i];
        p[i] = p[j];
        p[j] = temp;
        ++i;
        --j;
    }
}
void show(const int&n, int *&p){
    for(int i=0;i<n;++i){
        cout<<p[i]<<" ";
    }
}
int main(){
    int n;
    int *p;
    enterArray(n,p);
    reverseArray(n,p);
    show(n,p);
    delete[]p;
    
    return 0;
}
