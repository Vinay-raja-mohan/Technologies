#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        int a = 1, b = 1;
    int result;
        cin >> n;
        if(n==1 || n==2){
                cout << 1;
        }
        else{
                for (int i = 3; i <= n; ++i) {
                        result = a + b; 
                        a = b; 
                        b = result;
    }
    cout <<  result; 
        }

   
}
