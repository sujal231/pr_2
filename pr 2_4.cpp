#include<iostream>
using namespace std;
void table(int);
int main()
{
	int n;
	cout<<"Enter Number ";
	cin>>n;
	
	table(n);
	
    return 0; 
}
void table(int n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		cout<<n<<"X"<<i<<"="<<i*n<<endl;
	}
}
