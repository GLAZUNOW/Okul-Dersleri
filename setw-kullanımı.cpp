#include <iostream>
#include <cmath>

using namespace std;

int main (){
	float tp;
	for (int i=1;i<1000;i++)
	{
		tp=tp+pow(0.3,i);
	}
	cout<<setw(65)<<tp<<endl;
}
