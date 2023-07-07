# Problem: Solve and explain these questions
```cpp
int* a[50];               //1
int* (a[50]);             //2
int* (*a[50]);            //3
int (*a)();               //4 
int (*a[50])();           //5
int* (*(*a[50])())();     //6
int (*b())();             //7
int (*c())[];             //8 
int (*(*d ())[])();       //9
int* (*(*e ())[])();      //10
```
## Solve
### 1 
```cpp
int* a[50];
```
Tạo một mảng gồm 50 con trỏ
