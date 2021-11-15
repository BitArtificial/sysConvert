#include<iostream>
using namespace std;

void integer(int x,int n=2){
	if(x<n){
		cout<<x;
		return;
	}
	integer(x/2,n);
	cout<<x%n;
}
void fraction(double x,int n=2,int bits=8){//bits is the total length
	cout<<".";
	for(int i=0;i<bits;i++){
		x*=n;
		cout<<int(x);
		x-=int(x);
		if(x==0){
			return;
		}
	}	
}
void sysConvert(double x,int n=2,int bits=8){
	//both cotained the integer and fraction parts
	int x_int=int(x);
	double x_fra=x-x_int;
	integer(x_int,n);
	fraction(x_fra,n,bits);
}
int main(){
//	integer(15);
//	fraction(0.123,2,8);
	sysConvert(15.123);
	return 0;
}
