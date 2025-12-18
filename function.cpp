#include <iostream>
using namespace std;

int maxeded(int a, int b) {
	if(a>b){
		return a;
	}
    else{
    	return b;
	}
}

long long faktorial (int f){
	if (f==0 || f==1){
		return 1;
	}
	long long result =1;
	for(int i=2;i<=f;i++){
		result *=i;
	}
	return result;
}


int main(){
	int x,y;
	cout<<"iki eded daxil edin:";
	cin>>x>>y;
	cout<<"Max"<<maxeded(x,y)<<endl;
	
	int n;
	cout<<"Faktorialini hesablamaq istediyiniz ededi daxil edin:";
	cin>>n;
	cout<<n<<"!="<<faktorial (n)<<endl;
	
	return 0;
}
