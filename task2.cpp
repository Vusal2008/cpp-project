# include <iostream>
# include  <cmath>
using namespace std;
//ededin reqemlerinin cemini tapan fuction//
 int reqem(int a){
	int i;
	i = 1;
	int cem =0;
  while(i!=0){
  	
  	i=a%10;
  	cem=cem+i;
  	a=a/10;
  	
  }
	
	cout<<cem;
	
}



int main(){
	double a;
	cout<<"ededi daxil edin:";
	cin>>a;
	 reqem(a);
	
}
