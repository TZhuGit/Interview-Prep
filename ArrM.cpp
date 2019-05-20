#include <iostream> 
#include <math.h> 
#include <unordered_set>
#include <stack>  
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

    public: int countUnique(int arr[], int n) { 
        unordered_set<int> s; 
        for (int i = 0; i < n; i++) {
            s.insert(arr[i]);
        } 
  
        int count = pow(s.size(), 2); 
        return count; 
    } 

    public: void next_greater(int nums[], int n){
        stack<int> data_stack;
    
        data_stack.push(nums[0]);
    
        for (int i=1; i<n; i++){
            int next_element = nums[i];
    
            if (data_stack.empty() == false){
                int array_element = data_stack.top();
                data_stack.pop();
    
            while (array_element < next_element){
                    cout << array_element << ": " << next_element
                        << endl;
                    if (data_stack.empty() == true)
                    break;
                    array_element = data_stack.top();
                    data_stack.pop();
                }
    
            if (array_element > next_element)
                    data_stack.push(array_element);
            }
    
            data_stack.push(next_element);
        }
 
    }
}; 

int main() { 

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

    int arr[] = { 1, 2, 2, 4, 2, 5, 3, 5 }; 
    int na = sizeof(arr) / sizeof(arr[0]); 
  
    cout << aM.countUnique(arr, na) << endl; 


    int nums[] = {4, 1, 5, 9, 12, 9, 22, 45, 7};
    int nextG = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < nextG; i++) 
    cout << nums[i] <<" ";
    cout << "\nNext Greater Element:\n";
    aM.next_greater(nums, nextG);
} 
