#include<iostream>
using namespace std;

int largest(int arr[])
{
	int a=arr[0];
	for (int i=1; i<9; i++)
	{
	if (a>arr[i])	a = a;
	else	a = arr[i];
	}
	return a;
}

int smallest(int arr[])
{
	int a=arr[0];
	for (int i=1; i<9; i++)
	{
	if (a<arr[i])	a = a;
	else	a = arr[i];
	}
	return a;
}

double mean(int arr[])
{
	double a = 0;
	for (int i=0; i<9; i++)
	{	a = a + arr[i];	}
	return a/9;
}

int median(int arr[])
{
	for (int i=0; i<9; i++)
	{
		for (int j=i; j<9; j++)
		{
		if (arr[i] > arr[j])
			{
			int a = arr[i];
			arr[i] = arr[j];
			arr[j] = a;
		}	}
	}
return arr[4];
}

int highest_frequency(int arr[])
{
//sorting
	for (int i=0; i<9; i++)
	{
		for (int j=i; j<9; j++)
		{
		if (arr[i] > arr[j])
			{
			int a = arr[i];
			arr[i] = arr[j];
			arr[j] = a;
		}	}
	}
//find max frequency
int maxF=1, countF=1, ElementF;
	for (int i=0; i<8; i++)
	{
	if(arr[i]==arr[i+1])	countF++;
	else
		{
		if(countF>maxF)
			ElementF = arr[i-1];
			maxF = countF;
			countF = 1;
		}
	}

return ElementF;
}

int main()
{
int arr[9] = {5,4,9,5,3,7,8,7,7};


cout << "My array = {5,4,9,5,3,7,8,7,7}" << endl;


cout << "Largest element = " << largest(arr) << endl;
cout << "Smallest element = " << smallest(arr) << endl;
cout << "Mean = " << mean(arr) << endl;
cout << "Median = " << median(arr) << endl;
cout << "Element with highest frequency = " << highest_frequency(arr) << endl;

return 0;
}
