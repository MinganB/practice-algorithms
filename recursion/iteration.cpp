#include <iostream>
using namespace std;

int main() {
    int n, factoral;
    
    cout << "Enter an integer to find the factoral: ";
    cin >> n;
    factoral = n;
    
    for (int i = 1; i < n; i++)
        factoral *= (n - i);
    
    cout << "The factoral is " << factoral << endl;
    
	return 0;
}
