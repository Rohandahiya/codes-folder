string Solution::longestCommonPrefix(vector<string> &A) {
    int min = INT_MAX;
    string result;

   for(int i=0;i<A.size();i++){
       if(A[i].length()<min){
           min = A[i].length();
       }
   }

   int low = 0,high = min-1;

   while(low<=high){
       int mid = low + (high-low)/2;

       for(int i=0,i<A.size();i++){
           for(int j=low,i<=mid,j++){
               if(A[i][j]!=A[0][j]){
                   high = mid-1;
               }
               else{
                   result = result + A[0].substr(low,mid-low+1);
                   low = mid +1;
               }
           }
       }


   }
          return result;  
    
    
}
