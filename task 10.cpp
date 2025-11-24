# include <iostream>
using namespace std;
// ededin musbet,menfi yoxsa sifr oldugunu yoxlayan function//
int Eded(int a){
	
	if(a>0){cout<<"eded musbetdir.";
	}else if(a<0){cout<<"eded menfidir.";
	}else if(a==0){cout <<"eded sifirdir.";
	}

	
}
 int main(){
 	
 	int a;
 	cout <<" ededi daxil edin";
 	cin>>a;
 	Eded(a);
 }

