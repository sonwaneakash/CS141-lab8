#include<iostream>
using namespace std;

int f(int arr[])
{
for(int i=0;i<10;i++)
{	arr[i] = i + 1;	}//Assign

int sum = 0;
for(int i=0;i<10;i++)
{	sum = sum + arr[i];	}//Sum

return sum;
}

int main()
{
int arr[10];

cout << f(arr) << endl;

return 0;
}
