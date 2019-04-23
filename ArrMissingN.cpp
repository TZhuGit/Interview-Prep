#include<iostream> 
using namespace std; 
//Make filename
//./filename to run
class arrayMethods 
{ 
    public : int getMissingNo (int a[], int n) 
    { 
        int i, total; 
        //Formula for calculating sum of consecutive numbers between 1 - N
        total = (n + 1) * (n + 2) / 2;  
        cout << "Sum of consecutive numbers: " + std::to_string (total) << endl;
        //O(n) each number in array is subtracted from total 
        for ( i = 0; i< n; i++) {
            total -= a[i]; 
            cout << "Total: " + std::to_string (total) + " Current: " + std::to_string (a[i]) << endl;
        }
        return total; 
    } 
}; 

int main() 
{ 
    arrayMethods aM; 
    int a[] = {1, 2, 3, 5, 6, 7}; 
    int miss = aM.getMissingNo(a, 6); 
    cout <<  miss << endl; 
} 
