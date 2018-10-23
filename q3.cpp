#include<iostream>
using namespace std;

void f(int arr[],int k)
{
//sorting the array in increasing order
for (int i=0; i<10; i++)
	{
		for (int j=i; j<10; j++)
		{
		if (arr[i] > arr[j])
			{
			int a = arr[i];
			arr[i] = arr[j];
			arr[j] = a;
		}	}
	}

cout << "The K^th largest number is " << arr[10-k] << endl;
cout << "The K^th smallest number is " << arr[(k-1)] << endl;

}


int main()
{

int arr[10] = {8,7,2,5,6,4,9,2,3,0};

cout << "Array = {8,7,2,5,6,4,9,2,3,0}" << endl;

cout << "Enter a number K to find the K^th largest and K^th smallest number in the array: ";
int k;
cin >> k;

f(arr,k);

return 0;
}
