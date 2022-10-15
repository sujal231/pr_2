#include<iostream>
using namespace std;
int fact(int n);
int main() {
  int n;
  cout << "Enter value:- ";
  cin >> n;
  cout << "Factorial of " << n << " = " << fact(n);
}

int fact(int n) {
  if(n==0)
  {
    return 1;
  }
  else
  {
  	return n*fact(n-1);
  }
}
