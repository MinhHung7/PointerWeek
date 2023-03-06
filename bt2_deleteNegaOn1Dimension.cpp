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
void deleteNega(int&n, int *&p){
    for(int i=n-1;i>=0;--i){
        if(p[i] < 0){
            for(int j=i+1;j<n;++j){
                p[j-1] = p[j];
            }
            --n;
        }
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
    deleteNega(n,p);
    show(n,p);
    delete[]p;
    return 0;
}