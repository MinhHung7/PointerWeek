#include<iostream>
using namespace std;
void showMatrix(int &row, int &column, int **&p){
    cout<<"Nhap so hang: ";
    cin>>row;
    cout<<"Nhap so cot: ";
    cin>>column;

    p = new int*[row];
    for(int i=0;i<row;++i){
        p[i] = new int[column];
        for(int j=0;j<column;++j){
            if(i==0){
                if(j==0 || j==1) p[i][j] = 1;
                else p[i][j] = 2 * p[i][j-1];
            }
            else{
                if(j==0) p[i][j] = 2 * p[i-1][column-1];
                else p[i][j] = 2 * p[i][j-1];
            }
        }
    }
    for(int i=0;i<row;++i){
        for(int j=0;j<column;++j){
            cout<<p[i][j]<<" ";            
        }
        cout<<"\n";
    }
}
int main(){
    int row, column;
    int **p;
    showMatrix(row,column,p);
    for(int i=0;i<row;++i){
        delete[]p[i];
    }
    delete[]p;
    return 0;
}