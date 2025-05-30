void nBinaryTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        int temp=1;
        for(int j=1;j<=i;j++){
                if(i%2!=0 && j%2!=0){
                    cout << "1 ";
                }
                else if(i%2!=0 && j%2==0){
                    cout << "0 ";
                }

                else if(i%2==0 && j%2!=0){
                    cout << "0 ";
                }
                else{
                    cout << "1 ";
                }
        }
        cout << endl;
    }
}
