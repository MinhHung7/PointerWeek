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
### 2
```cpp
int *(a[50]);
```
Tạo một mảng gồm 50 con trỏ
### 3
```cpp
int* (*a[50]);
```
Tạo một mảng gồm 50 con trỏ trỏ tới con trỏ (Mảng gồm 50 con trỏ cấp 2)
### 4
```cpp
#include<iostream>
#include<time.h>
using namespace std;

int add ()
{
	return 5;
}

int main ()
{
	int (*a)();
	a = &add;
	cout << (*a)();

	return 0;
}
```
Tạo một con trỏ trỏ tới một hàm **không tham số** trả về kiểu dữ liệu **int**
### 5
```cpp
#include<iostream>
#include<time.h>
using namespace std;

int add ()
{
	return 5;
}

int main ()
{
	int (*a[50])();
	for (int i = 0; i < 50; ++i)
	{
		a[i] = &add;
		cout << (*a[i])() << "\n";
	}
	return 0;
}
```
Tạo một mảng gồm 50 con trỏ trỏ tới hàm **không tham số** và trả về kiểu dữ liệu **int**
### 6
### 7
```cpp
```
### 8


