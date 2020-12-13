#include <iostream>
using namespace std;

int getFactoral(int n) {
    if(n == 0) return 1;
    
    int factoral = n * getFactoral(n - 1);
    return factoral;
}

int main() {
    int n, factoral;
    
    cout << "Enter an integer to find the factoral: ";
    cin >> n;
    
    factoral = getFactoral(n);
    
    cout << "The factoral is " << factoral << endl;
    
	return 0;
}
