#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)

{
	int number[5];
	int *ptr =number; 
	
	cout<<"Enter 5 numbers that you want:"<< endl;
	cin>>number[0]>>number[1]>>number[2]>>number[3]>>number[4];
	
	cout<<"Your numbers are:"<< endl;
	for(int i = 0;i < 5; i++)
	{
		cout<< *ptr << endl;
		ptr++;
	} 
       return 0;
}

