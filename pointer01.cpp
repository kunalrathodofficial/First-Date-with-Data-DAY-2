#include<iostream>
using namespace std;
int main(){
	
	int x=1080;
	cout<<&x<<endl;
    int*p;//defining a variable
    p=&x;
    cout<<x<<endl;//value of a variable
    cout<<p<<endl;//address of a variable
	cout<<*p;//value of pointer
	return 0;
	
}
