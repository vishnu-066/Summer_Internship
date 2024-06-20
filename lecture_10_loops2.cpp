#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	i=0;j=0;k=0;
	cout<<i<<" "<<j<<" "<<k<<endl;
	j=++k;k=j++;
	cout<<i<<" "<<j<<" "<<k<<endl;
	i=--j;j=--k;k=--i;
	cout<<i<<" "<<j<<" "<<k<<endl;
	return 0;
}


//-----------------------------------------------------------------------------

#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<=100;i=i+2){
		cout<<i/2<<" ";
	}
	return 0;
}

