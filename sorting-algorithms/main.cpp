#include <iostream>
using namespace std;

void bubbleSort() {
    int n;
    int totalInnerLoops = 0, totalOuterLoops = 0;
    
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
            totalInnerLoops++;
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
    cout << endl << "Total Inner Loops: " << totalInnerLoops;
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
    int unsortedListStartLoc = 0; //wall
    int sortPasses = 0, totalInnerLoops = 0;
    
    while(unsortedListStartLoc < n - 1) {
        int smallest = INT_MAX;
        int smallestLoc = 0;
        
        for(int i = unsortedListStartLoc; i < n - 1; i++) {
            if(sortList[i] < smallest) {
                smallest = sortList[i];
                smallestLoc = i;
            }
            totalInnerLoops++;
        }
        
        int k = sortList[unsortedListStartLoc];
        sortList[unsortedListStartLoc] = smallest;
        sortList[smallestLoc] = k;
        unsortedListStartLoc++;
        sortPasses++;
    }
    
    //display the sorted list
    cout << endl << "Sorted list:";
    for(int i = 0; i < n; i++)
        cout << " " << sortList[i];
    
    cout << endl << "Sort Passes: " << sortPasses;
    cout << endl << "Total Inner Loops: " << totalInnerLoops;
}

void insertionSort() {
    
}

int main() {
    cout << "Choose a sort type to run:" << endl;
    cout << "1) Selection Sort" << endl;
    cout << "2) Bubble Sort" << endl;
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
