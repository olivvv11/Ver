#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char a;
    cout << "Enter a character: ";
    cin >> a;
    
    char b;
    cout << "Enter a another character: ";
    cin >> b;
    int al = int(a);
    int bl = int(b);

    if(al > bl) {
        int temp = bl;
        bl = al;
        al = temp;
        for(int i = al; i <= bl; i++) {
            char hellowww = i;
            cout << hellowww;
        }
    } else {
        for(int i = al; i <= bl; i++) {
            char hellowww = i;
            cout << hellowww;
        }
    }
	
	return 0;
}
