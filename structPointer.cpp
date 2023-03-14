#include<iostream>
using namespace std;
struct HocSinh{
    string *name;
    int *age;
    double *mark;
};
int main(){
    HocSinh* x = new HocSinh;
    cout<<"Nhap ten hoc sinh: ";
    x->name = new string;
    getline(cin, *x->name);
    cout<<"Nhap tuoi hoc sinh: ";
    x->age = new int;
    cin>>*x->age;
    cout<<"Nhap diem hoc sinh: ";
    x->mark = new double;
    cin>>*x->mark;

    cout<<"Ten hoc sinh la: "<<*x->name<<"\n";
    cout<<"Tuoi hoc sinh la: "<<*x->age<<"\n";
    cout<<"Diem hoc sinh la: "<<*x->mark<<"\n";

    return 0;
}