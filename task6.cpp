# include <iostream>
using namespace std;
//3 edetden boyuyunu tapan fuction//


void comparison2(int a,int b, int c){
	
	if (a>b,a>c)
	{
	cout<<a;
	}else if(a>b,a>c)
	{
		cout<<a;
	}else if(a<b,a>c)
	{
		cout<<b;
	}else if(b>a,b<c)
	{
		cout<<c;
	}else if(a==c)
	{
	cout<<c;
	}
	else if(a==b)
	{
	cout<<b;
	}
	else if(b==c){cout<<c;
	}
	
	
}


int main(){
	
	int a;
	cout<<"1 ci ededi daxil edin:";
	cin>>a;
	int b;
	cout<<"2 ci ededi daxil edin:";
	cin>>b;
	int c;
	cout<<"3 cu ededi daxil edin:";
	cin>>c;
	
	comparison2(a,b,c);
}
