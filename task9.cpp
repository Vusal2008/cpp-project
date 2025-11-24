# include <iostream>
using namespace std;
//daxil edilmis edede qeder butun reqemlerin cemini tapan function//
int eded(int a){
	int b=0;
    
 for(int i = 1;i<=a;i++){
 	b=i+b;	
 }
 cout<<"cem:"<<b<<endl;
}

int main(){
	
	int a;
	cout<<"ededi daxil edin:";
	cin>>a;
	eded(a); 
	
}
