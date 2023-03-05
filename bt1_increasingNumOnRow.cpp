#include<iostream>
using namespace std;
void enterMatrix(int &row, int &column, int **&p){
    cout<<"Nhap so hang: ";
    cin>>row;
    cout<<"Nhap so cot: ";
    cin>>column;

    p = new int*[row];
    for(int i=0;i<row;++i){
        *p = new int[column];
        for(int j=0;j<column;++j){
            cout<<"Nhap phan tu ["<<i<<"]["<<j<<"]: ";
            int x; cin>>x;
            *(*p)++ = x;
        }
        *p-=column;
        p++;
    }
    p-=row;
}
bool checkIncreOnRow(const int&row, const int&column, int**&p){
    if(column==1) return true;
    for(int i=0;i<row;++i){
        int flag = true;
        for(int j=1;j<column;++j){
            if(p[i][j] < p[i][j-1]){
                flag = false;
                break;
            }
        }
        if(flag) return true;
    }
    return false;
}
int main(){
    int row, column;
    int **p;
    enterMatrix(row,column,p);
    if(checkIncreOnRow(row,column,p)){
        cout<<"Co hang tang dan!!";
    }
    else cout<<"Khong co hang tang dan!!";
    for(int i=0;i<row;++i){
        delete[] p[i];
    }
    delete[]p;
    return 0;
}