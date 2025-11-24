# include <iostream>
using namespace std;
//Verilmis ededin sade olub,olmadigini yoxlayan function//
 void yoxlama(int a){
 int i,m;
 i=2;
 m=0;
 for  (i;i<a/2;i++){if (a%i==0){ m=m+1;}
 } if ( m!=1){  cout << "sade  "<< a ;}
   else {cout << "sade deyil "<< a;} }
int main(){
 int a;
 cout<<"ededi daxil edin:";
 cin >> a ;
 yoxlama(a);
	
	
	
	
	
}
