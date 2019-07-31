#include<iostream>
#include<vector> 
using namespace std;

/*void rotateMatrix(int mat[][N]) 
{ 
    cin>>N;
    // Consider all squares one by one 
    for (int x = 0; x < N / 2; x++) 
    { 
        // Consider elements in group of 4 in  
        // current square 
        for (int y = x; y < N-x-1; y++) 
        { 
            // store current cell in temp variable 
            int temp = mat[x][y]; 
  
            // move values from right to top 
            mat[x][y] = mat[y][N-1-x]; 
  
            // move values from bottom to right 
            mat[y][N-1-x] = mat[N-1-x][N-1-y]; 
  
            // move values from left to bottom 
            mat[N-1-x][N-1-y] = mat[N-1-y][x]; 
  
            // assign temp to left 
            mat[N-1-y][x] = temp; 
        } 
    } 
} 

void displayMatrix(int mat[][],int N) 
{ 
    for (int i = 0; i < N; i++) 
    { 
        for (int j = 0; j < N; j++) 
            {cout<<mat[i][j];}
  
        cout<<endl;
    } 
    cout<<endl;
} */
  

int main() {
    int n,m;cin>>m>>n;;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

   int i, k = 0, l = 0; 
  
    //  k - starting row index 
    //    m - ending row index 
    //    l - starting column index 
    //    n - ending column index 
    //    i - iterator  
  
    // initialize the count 
    int cnt = 0; 
  
    // total number of  
    // elements in matrix 
    int total = m * n; 
  
    while (k < m && l < n)  
    { 
        if (cnt == total) 
            break; 
  
        // Print the first column  
        // from the remaining columns 
        for (i = k; i < m; ++i) 
        { 
            cout << arr[i][l] << ", "; 
            cnt++; 
        } 
        l++; 
  
        if (cnt == total) 
            break; 
  
        // Print the last row from 
        // the remaining rows  
        for (i = l; i < n; ++i)  
        { 
            cout << arr[m - 1][i] << ", "; 
            cnt++; 
        } 
        m--; 
  
        if (cnt == total) 
            break; 
  
        // Print the last column  
        // from the remaining columns  
        if (k < m)  
        { 
            for (i = m - 1; i >= k; --i)  
            { 
                cout << arr[i][n - 1] << ", "; 
                cnt++; 
            } 
            n--; 
        } 
  
        if (cnt == total) 
            break; 
  
        // Print the first row  
        // from the remaining rows  
        if (l < n)  
        { 
            for (i = n - 1; i >= l; --i)  
            { 
                cout << arr[k][i] << ", "; 
                cnt++; 
            } 
            k++; 
        } 
    } 

    cout<<"END";

	return 0;
}