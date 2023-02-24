#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    for(int _=0; _<t; _++)
    {
        int n;
        cin >> n;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        
        int holidays = n + 8; // Festivals + Weekends
        for(const auto &date : v)
        {
            if (date%7 == 6 || date%7 == 0)
            {
                holidays--;
            }
        }
        
        cout << holidays << endl;
    }
    
	return 0;
}
