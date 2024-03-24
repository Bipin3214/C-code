#include<iostream>
using namespace std;
void find_force()
{
	float force,mass,acceleration;
	cout<<"force\n\n"<<endl;
	cout<<"enter the value of mass(m):";
	cin>>mass;
	cout<<endl;
	cout<<"enter the value of acceleration(a):";
	cin>>acceleration;
	cout<<endl;
	force=mass*acceleration;
	cout<<endl;
	cout<<"force(f)is"<<force<<"N\n"<<endl;
	
}
void find_mass()
{

	float force,mass,acceleration;
	cout<<"mass\n\n"<<endl;
	cout<<"enter the value of force(f):";
	cin>>force;
	cout<<endl;
	cout<<"enter the value of acceleration(a):";
	cin>>acceleration;
	cout<<endl;
	force=force/acceleration;
	cout<<endl;
	cout<<"mass(m)  is"<<mass<<"N\n"<<endl;
	
}
void find_acceleration()
{
float force,mass,acceleration;
cout<<"acceleration\n\n"<<endl;
	cout<<"enter the value of force(f):";
	cin>>force;
	cout<<endl;
	cout<<"enter the value of mass(m):";
	cin>>mass;
	cout<<endl;
	acceleration=force/mass;
	cout<<endl;
	cout<<"acceleration(a) is"<<acceleration<<"m/s^-2\n"<<endl;
}
int main()
{
	start:
		char choice;
		cout<<"which one do you want to determine ?\n"<<endl;
		cout<<"1) force(f)"<<endl;
			cout<<"2) mass(m)"<<endl;
				cout<<"3) accleration(a)\n"<<endl;
				cout<<">>>";
				cin>>choice;
				cout<<"\n"<<endl;
				if(choice=='1'||choice=='f'|| choice=='f')
				{
					find_force();
				}
				else if(choice=='2'||choice=='m'|| choice=='m')
				{
				   find_mass();
				}
				else if(choice=='3'||choice=='a'|| choice=='a')
				{
					find_acceleration();
				}
				else
				{
					goto start;
				}
				return 0;
}
