#include<iostream> 
using namespace std; 
//Make filename
//./filename to run
class arrayMethods 
{ 
    public : int getMissingNo (int a[], int n) { 
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

    public: char *removeDuplicate(char str[], int n) { 
        int index = 0;    
        for (int i=0; i<n; i++) { 
            int j;   
            for (j=0; j<i; j++)  
                if (str[i] == str[j]) 
                break; 
            if (j == i) 
                str[index++] = str[i]; 
        }
        return str; 
    } 
}; 

int main() 
{ 
    arrayMethods aM; 
    int a[] = {1, 2, 3, 5, 6, 7}; 
    int miss = aM.getMissingNo(a, 6); 
    cout <<  miss << endl; 

   char str[]= "geeksforgeeks"; 
   int n = sizeof(str) / sizeof(str[0]); 
   cout << sizeof(str) << endl;
   cout << sizeof(str[0]) << endl;
   cout << n << endl;
   cout << aM.removeDuplicate(str, n) << endl;
} 
