#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter size of list: ";
    cin >> n;
    
    int A[n];
    cout << "Enter space seperated list: ";
    for(int i = 0; i < n; i++)
        cin >> A[i];
    
    int searchValue;
    cout << "SEARCH VALUE: ";
    cin >> searchValue;
    
    int stepsTaken = 0;
    for(int i = 0; i < n; i++) {
        if(A[i] == searchValue) {
            stepsTaken++;
            cout << "Location: " << i + 1;
            cout << endl << "Steps taken: " << stepsTaken;
            return 0;
        }
    }
    
    cout << "No such value found in list.";
	return 0;
}
