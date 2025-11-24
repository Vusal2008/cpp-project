# include <iostream>
using namespace std ;

void  comparison(int a,int b){
	
	if(a>b){
		cout<<"boyuk olan eded:"<<a;
	}
	else if (a==b){
		cout<<"ededler beraberdir"<<endl;
	}
	else if (a<b){
		
		cout<<"boyuk olan eded:"<<b;
	}
}

int main(){
int a;
cout<<"1-ci ededi daxil edin";
cin>>a;
int b;	
cout<<"2-ci ededi daxil edin";
cin>>b;
	
	comparison(a,b);
	
}
