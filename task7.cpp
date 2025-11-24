# include <iostream>
using namespace std;
//daxil edilmis ededin bolenlerini tapan fuction//
int bolenler(int a){

	for (int i=1;i<=a;i++){
		
		if (a%i==0){
			cout<<i<<","<<endl;
		}		
		else{cout<<"";
		}
	}
	
	
}





int main(){
	int a;
	cout<<"ededi daxil edin:";
	cin>>a;
	 bolenler(a);
	
	
}
