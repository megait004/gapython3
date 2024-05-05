#include<iostream>
#include<math.h>
using namespace std;
//// cách này sử dụng hàm void thì không cần kiểu trả về.
//void ptbac2(int a,int b,int c){
//	double delta ,x1 ,x2;
//	delta= b*b-4*a*c;
//	if(delta<0){
//		cout << "Pt vo nghiem" <<endl;
//	}
//	else if(delta>0){
//		cout << "pt co hai nghiem pb " << endl;
//		cout <<"x1 = " << (-b+sqrt(delta))/(2*a) <<endl;
//		cout <<"x2 = " << (-b-sqrt(delta))/(2*a) << endl;
//	}
//	else if(delta==0){
//		cout << "pt co nghiem kep" << " ";
//		cout << "x1 = x2 = " << -b/(2*a);
//	}
//}
//
//
//
// int main (){
// 	ptbac2(1,2,3);
// 	ptbac2(-1,2,3);
// 	ptbac2(1,2,1);
// 	
// }
	
// sử dùng hàm int có kiểu trả về 

double ptbac2(double a ,double b,double c){
	double delta ,x1,x2,kq,kq1,kq2;
	delta=b*b-4*a*c;
	if(delta==0){
		cout << "pt co nghiem kep x1=x2=";
		kq=-b/(2*a);
		cout <<kq;
		cout << endl;
	}
	else if(delta<0){
		cout <<"pt vo nghiem";
	}
	else if(delta>0){
		cout << "pt co 2 nghiem pb";
		x1=(-b+sqrt(delta))/(2*a);
		cout << endl;
		x2=(-b-sqrt(delta))/(2*a);
		cout << "x1=" << x1 << " " <<  "x2=" << x2;
	}
	return kq,x1,x2;
}


 int main(){
 	 ptbac2(1,2,1);
 	 ptbac2(-1,2,3);
 }































