#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    for(int _=1; _<=t; _++)
    {
        int x;
        cin >> x;
        char ch;
        int chef = 0;
        int carl = 0;
        for(int i=0; i<14; i++)
        {
            cin >> ch;
            switch(ch)
            {
                case 'C':
                    carl+=2;
                    break;
                case 'N':
                    chef+=2;
                    break;
                case 'D':
                    chef++;
                    carl++;
                    break;
            }
        }
        int ans;
        if (carl > chef)
        {
            ans = 60*x;
        }
        else if (carl < chef)
        {
            ans = 40*x;
        }
        else
        {
            ans = 55*x;
        }
        
        cout << ans << endl;
        
    }
    
	return 0;
}
