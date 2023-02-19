#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int t;
    int n;
    
    int i;
    
    cin >> t;
    
    for(int ii = 1; ii <= t; ii++)
    {
    
        cin >> n;
        
        int arr[n];
        
        for(i=0; i<n; i++)
            cin >> arr[i];
        
        int max = arr[0] + arr[n-1];
        
        for(int _ = 1; _<= n; _++) // n Right Rotations
        {
            // Right Rotating
            int x = arr[n-1];
            for(i = n-1; i>= 1; i--)
            {
                arr[i] = arr[i-1];
            }
            arr[0] = x;
            
            int elem = arr[0] + arr[n-1];
            if (elem > max)
                max = elem;
            
        }
        
        cout << max << endl;
    
    }
    
	return 0;
}
