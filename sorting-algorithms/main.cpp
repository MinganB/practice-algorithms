#include <iostream>
using namespace std;

void bubbleSort() {
    int n;
    
    cout << "Enter size of list to sort: ";
    cin >> n;
    int sortList[n];
    
    cout << "Enter list of elements to sort seperated by spaces: ";
    for(int i = 0; i < n; i++)
        cin >> sortList[i];
    
    //Bubble sort algorithm
    int unsortedListStartLoc = 0; //wall
    int sortPasses = 0;
    
    while(unsortedListStartLoc < n - 1) {
        bool exchangeMade = false;
        
        for(int i = n - 1; i > unsortedListStartLoc; i--) {
            if(sortList[i] < sortList[i - 1]) {
                int smallest = sortList[i];
                sortList[i] = sortList[i - 1];
                sortList[i - 1] = smallest;
                exchangeMade = true;
            }
        }
        
        sortPasses++;
        if(!exchangeMade)
            break;
        
        unsortedListStartLoc++;
    }
    
    //display the sorted list
    cout << endl << "Sorted list:";
    for(int i = 0; i < n; i++)
        cout << " " << sortList[i];
    
    cout << endl << "Sort Passes: " << sortPasses;
}

void selectionSort() {
    int n;
    
    cout << "Enter size of list to sort: ";
    cin >> n;
    int sortList[n];
    
    cout << "Enter list of elements to sort seperated by spaces: ";
    for(int i = 0; i < n; i++)
        cin >> sortList[i];
    
    //Selection sort algorithm
    int unsortedStart = 0; //wall
    int sortPasses = 0;
    
    while(unsortedStart < n - 1) {
        int currentMin = sortList[unsortedStart], currentMinLoc = unsortedStart;
        for(int i = unsortedStart; i < n; i++) {
            if(sortList[i] < currentMin) {
                currentMin = sortList[i];
                currentMinLoc = i;
            }
        }
        
        int t = sortList[unsortedStart];
        sortList[unsortedStart] = currentMin;
        sortList[currentMinLoc] = t;
        
        unsortedStart++;
        sortPasses++;
    }
    
    //display the sorted list
    cout << endl << "Sorted list:";
    for(int i = 0; i < n; i++)
        cout << " " << sortList[i];
    
    cout << endl << "Sort Passes: " << sortPasses;
}

void insertionSort() {
    int n;
    
    cout << "Enter size of list to sort: ";
    cin >> n;
    int sortList[n];
    
    cout << "Enter list of elements to sort seperated by spaces: ";
    for(int i = 0; i < n; i++)
        cin >> sortList[i];
    
    int sortPasses = 0;
    
    //Insertion sort algorithm
    int unsortedListStartLoc = 1;
    while(unsortedListStartLoc < n) {
        for(int i = unsortedListStartLoc; i > 0; i--) {
            if(sortList[i] < sortList[i - 1]) {
                int t = sortList[i - 1];
                sortList[i - 1] = sortList[i];
                sortList[i] = t;
            }
        }
        
        sortPasses++;
        unsortedListStartLoc++;
    }
    
    //display the sorted list
    cout << endl << "Sorted list:";
    for(int i = 0; i < n; i++)
        cout << " " << sortList[i];
    
    cout << endl << "Sort Passes: " << sortPasses;
}

int main() {
    cout << "Choose a sort type to run:" << endl;
    cout << "1) Selection Sort" << endl;
    cout << "2) Bubble Sort" << endl;
    cout << "3) Insertion Sort" << endl;
    cout << "Sort type: ";
    
    int sortType;
    cin >> sortType;
    
    if(sortType == 1)
        selectionSort();
    else if(sortType == 2)
        bubbleSort();
    else
        insertionSort();
    
	return 0;
}
