#include<iostream>
using namespace std;
int swap(int *array1,int *array2,int size);
main ()
{
	int array1[100];
	int array2[100];
	int size,z;
	cout<<"Enter array size";
	cin>>size;
	for(z=0;z<size;z++)
	{
		cout<<"Enter number:-"<<endl;
		cin>>array1[z];
	}
	for(z=0;z<size;z++)
	{
		cout<<array1[z]<<endl;
	}
	for(z=0;z<size;z++)
	{
		cout<<"Enter number:-"<<endl;
		cin>>array2[z];
	}
	for(z=0;z<size;z++)
	{
		cout<<array2[z]<<endl;
	}
    int swap(int array1,int array2,int size);
	cout<<"swaping ";
	cout<<"swap1"<<endl;
	for(z=0;z<size;z++)
	{
		cout<<array1[z]<<endl;
	}
	cout<<"swap2"<<endl;
	for(z=0;z<size;z++)
	{
		cout<<array2[z]<<endl;
	}
	return 0;
}
inline int swap(int *array1,int *array2,int size)
{
	int z,c=0;
	for(z=0;z<size;z++)
	{
		c          = array1[z];
		array1[z]  = array2[z];
		array2[z]  = c;
	}
			
}
