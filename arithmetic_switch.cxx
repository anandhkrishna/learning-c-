#include <iostream>
using namespace std;
int main()
{
	int x;
	cout <<"enter your option"<<endl;
	cout<<"1.addition\n2.subs\n3.muls\n4.div\n";
	cin >> x;
	int a,b,s=0;
	cin >>a>>b;
	switch(x)
	{
		case 1:
			s=a+b;
			cout << s;
			break ;
		case 2:
			s=a-b;
			cout << s;
			break;
		
		case 3:
			s=a*b;
			cout<< s;
			break;
		case 4: 
			s=a/b;
			 cout <<s;
			 break;
	}
	return 0;
	
	    
	         
	        
}