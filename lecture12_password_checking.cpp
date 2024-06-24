// Password checking criteria. using while

//#include <iostream>
//using namespace std;
//int main(){
//	int password;
//	cout<<"Enter password : ";
//	cin>>password;
//	
//	while(password<999999){
//		cout<<"Your password is not matched to given criteria,plzz try again"<<endl;
//		cout<<"Enter password : ";
//		cin>>password;
//	}
//	cout<<"Password criteria is matched"<<endl;
//	return 0;
//}


// Password checking criteria. using while

#include<iostream>
using namespace std;
int main()
{
	int password;
	
	do{
		cout<<"Enter Password : ";
		cin>>password;
		if(password<999999){
			cout<<"Your password is not matched to given criteria,plzz try again"<<endl;
		}
	}
	while(password<999999);	
	cout<<"Password criteria is matched"<<endl;
	
}
