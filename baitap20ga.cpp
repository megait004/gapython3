#include<iostream>
using namespace std;

void tinhbt(int a,int b){
	char ktu;
	cout << "moi nhap vao so a:";
	cin >>a ;
	cout << "moi nhap vao so b:";
	cin >> b;
	cout << "moi ban chon ky tu(+,-,*,/)";
	cin >> ktu;
	if(ktu=='+'){
		cout << a+b;
	}
	else if(ktu=='-'){
		cout <<a-b;
	}
	else if(ktu=='/'){
		cout<<a/b;
		
	}
	else if(ktu=='*'){
		cout << a*b;
	}
}







int main(){
	int a ,b;
	char ktu;
	tinhbt(a,b);
	cout << endl;
	tinhbt(a,b);
	cout << endl;
	tinhbt(a,b);
	cout << endl;
	tinhbt(a,b);

}