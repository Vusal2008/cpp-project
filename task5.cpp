# include <iostream>

using namespace std;

// EDEDLERIN EDEDIORTASINI TAPAN FUNCTION//
double edediOrta(double a,double b,double c){
	
	int ed=(a+b+c)/3;
	
	return ed;
	
}



int main(){
	double a,b,c;
	cout<<"ededleri daxil edin:"<<endl;
	
	cin>>a;
	cin>>b;
	cin>>c;
	
	cout<<"ededi orta:"<<edediOrta(a,b,c)<<endl;

}
	
	
	
	


