#include <iostream>
#include <string.h>
using namespace std;
struct name{
	int num;
	string name;
	char cha;
	void fun()
	{
		cout<<"structers";
	}
	
}seeni;

int main(){
seeni.num=10;
seeni.name="seenivasan";
seeni.cha='T';
cout<<seeni.num<<seeni.name<<seeni.cha;	
}
