#include <iostream>
#include <string.h>
using namespace std;
struct name{
	int num;
	string name;
	char cha;
	void fun()
	{
		cout<<num<<name<<cha<<"\t";
	}
	
}seeni;
class seen{
	int num;
	char c;
	string name;
	
};
int main(){
	name se;
	se.name="vasan132";
seeni.num=10;
seeni.name="seenivasan";
seeni.cha='T';
seeni.fun();
cout<<seeni.num<<seeni.fun()<<seeni.cha;	
}
