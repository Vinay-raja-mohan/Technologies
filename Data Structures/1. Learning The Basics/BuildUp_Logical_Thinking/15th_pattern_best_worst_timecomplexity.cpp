void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        char temp='A';
        for(int j=1;j<=n-i+1;j++){
            cout << temp << " ";
            temp++;
        }
        cout << endl;
    }
}
