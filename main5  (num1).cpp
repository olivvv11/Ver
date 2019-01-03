#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
    char c;
    cout << "Enter a character: ";
    cin >> c;
    for(int i = 0; i < 10; i++) {
     cout << c << " ";
    }
    
	return 0;
}
