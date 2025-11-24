# include <iostream>
using namespace std;
// saniyeni saata ve deqiqeye ceviren function//
void time( int a){
	 int minute=a/60;
	 int second=a%60;
	 int minute1=minute%60;
	 if(minute>60)
	 {
	 cout<<minute1<<"deqiqe"<<endl;
	 }
	 
	else{
	 cout<<minute<<"deqiqe"<<endl;}
	
	cout<<second<<"saniye"<<endl;
	}

void time2(int a){
	int hour=a/3600;
	if(hour>0)
	{
	cout<<hour<<"saat";
	}
	else
	{
	cout<<hour<<"0"<<"saat";
	}
}


int main()
{ 
     int a;
	cout<<"saniyeni daxil edin:"<<endl;
	cin>>a;
	time(a);
	time2(a);
}
