#include<iostream>
using namespace std;
class leap
{
public:
int i;
void get()
{
	cin>>i;
	
}
void display()
{
	if(i%4==0)
	cout<<"leap year";
	else
	cout<<"not a leap year";
	
}
};
int main()
{
	leap l;
	l.get();
	l.display();
	return 0;
}
