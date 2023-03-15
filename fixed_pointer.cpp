#include<iostream>
using namespace std;
int main(){
    int a[3][4] = {{1,2,3},
                    {4,5,6}};
    a[0][0] = 10;
    *a[0] = 20;
    **a = 30;
    for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    int (*p)[4] = a;
    cout<<*(*(p+1)+2);
    return 0;
}