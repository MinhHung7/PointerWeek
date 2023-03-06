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
void replaceNega(const int& row, const int& column, int **&p){
    int flag;
    bool checkExistPosi = false;
    if(p[0][0] < 0){
        for(int i=0;i<row;++i){
            for(int j=0;j<column;++j){
                if(p[i][j] > 0){
                    flag = p[i][j];
                    checkExistPosi = true;
                    break;
                }
            }
            if(checkExistPosi) break;
        }
    }
    if(!checkExistPosi){
        cout<<"Mang khong co so duong!!\n";
    }
    else{
        for(int i=0;i<row;++i){
            for(int j=0;j<column;++j){
                if(p[i][j]>0){
                    flag = p[i][j];
                }
                else if(p[i][j]<0){
                    p[i][j] = flag;
                }
            }
        }
    }
    
}
void showMatrix(const int& row,  const int&column, int **&p){
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
    enterMatrix(row,column,p);
    replaceNega(row,column,p);
    showMatrix(row,column,p);
    return 0;
}