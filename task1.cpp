# include <iostream>
using namespace std;
//Ededin faktoriyalini tapan fuction//
void factorial(int a)
{	 
	 int faktoriyal=1;
   for(int i=2;i<=a;i++)
   {
     	faktoriyal*=i;
   	
   }
   cout<<"ededinFaktoriyali:"<<faktoriyal<<endl;
   	
}

int main(){
	int a;
	    cout<<"ededi daxil edin:";
	    
		cin>>a;
		
	factorial(a);	
	
	
	
}
