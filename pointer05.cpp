[10:34 am, 09/11/2022] Kunal Rathod: #include<iostream>
using namespace std;
struct data{
	int x;
	char c;
	float f;
	void printer(){
		cout<<x<<endl;
		cout<<c<<endl;
		cout<<f<<endl;
	}
	
};
int main(){
   struct data d;
   d.x=3;
   d.c='d';
   d.f=1.77;
   d.printer();
	return 0;
	
}
[10:34 am, 09/11/2022] Kunal Rathod: #include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
