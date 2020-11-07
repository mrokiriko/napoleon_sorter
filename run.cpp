#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    
    cout << "how many items are in your array?" << endl;
    
    cin >> n;
    
    if (n > 0) {
        cout << "now type in " << n << " array elements:" << endl;
    }
    
    int a[n];
 
    for (int i = 0; i < n; i++) {
        cout << "- enter "<< i + 1 << " integer ";
        
        cin >> a[i];
        
        if (cin.fail()) {
            cout << "this is not a correct integer, try again" << endl;
            cin.clear();
            cin.ignore(256,'\n');
            i--;
        }

    }
    
    int b[n];
    
    int r = 0, l = n - 1;
    
    sort(a, a + n);
    
    for (int i = 0; i < n; i++) {
        
        if (a[i] % 2 == 0) {
            b[r] = a[i];
            r++;
        } else {
            b[l] = a[i];
            l--;
        }
        
    }
    
    
    cout << "output: [";
    
    
    if (n > 0) {
        
        for (int i = 0; i < n - 1; i++) {
            cout << b[i] << ", ";
        }
        
        cout << b[n - 1];
        
    }    
    
    cout << "]" << endl;
    
    return 0;
}