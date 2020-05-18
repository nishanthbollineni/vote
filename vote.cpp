#include <iostream>
#include <string>
using namespace std;

int main()
{

	string SN;
	string Nationality;
	int Age;
	cout<< "Enter Student Name:" <<endl;
	cin >> SN;
	cout<<"Enter Nationality:"<<endl;
	cin >> Nationality;
	cout<<"Enter Age:"<<endl;
	cin>>Age;
	if(Age >18 && Nationality == "Indian")
	{
		cout<<"You can Vote ";
	}else
	{
		cout<< "You can not Vote" << endl;
	}
	system("PAUSE");

}
