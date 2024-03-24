#include<iostream>
#include<string>
using namespace std;
int clen(int);
void space(int);
int main()
{
	int n;
	cout<<"Enter a month :  "<<endl;
	cin>>n;
	switch (n)
	{
		case 1 :
			cout<<"****** January ****"<<endl;
			clen(31);
			break;
		case 2 :
			cout<<"****** February ****"<<endl;
			clen(28);
			break;
		case 3 :
			cout<<"****** March ****"<<endl;
			clen(31);
			break;
		case 4 :
			cout<<"****** April ****"<<endl;
			clen(30);
			break;
		case 5 :
			cout<<"****** May ****"<<endl;
			clen(31);
			break;
		case 6 :
			cout<<"****** June ****"<<endl;
			clen(30);
			break;
		case 7 :
			cout<<"****** July ****"<<endl;
			clen(31);
			break;
		case 8 :
			cout<<"****** August ****"<<endl;
			clen(31);
			break;
		case 9 :
			cout<<"****** September ****"<<endl;
			clen(30);
			break;
		case 10 :
			cout<<"****** October ****"<<endl;
			clen(31);
			break;
		case 11 :
			cout<<"****** November ****"<<endl;
			clen(30);
			break;
		case 12 :
			cout<<"****** December ****"<<endl;
			clen(31);
			break;
			
		default :
			cout<<"invalid";
	}
	cout<<"\n"<<endl;
	return 0;
}


int clen(int x)
{
	int nn, loop, i,j,c ;
	string arr[7]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday","Saturday"};
	nn=x;
	string sp="";
	cout<<endl;
	i=0;
	c=0;
	for(loop=1;loop<=nn;loop++)
	{
		for(j=c;j<7;j++)
        {
        	cout<<"\t      ";
        			cout<<(j<7?arr[j]:sp);
        			c++;
		}
		space(i);
	    cout<<"\t \t"<<loop;
		if(loop%7==0)
		{
			cout<<"\n"<<endl;			
		}
		i++;

	}
	return 0;
}
 
void space(int c)
{
	if(c==0)
	{
		cout<<endl;
	}
}
