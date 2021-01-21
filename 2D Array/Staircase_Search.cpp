int matSearch (vector <vector <int>> &mat, int n, int m, int key)
	{
	    // your code here
	    int i=0;
	    int j=m-1;
	    bool flag =false;
	    
	    while(i>=0 &&j<m && i<n && j>=0 ){
	        if(mat[i][j]==key){
	            flag=true;
	            break;
	        }
	        else if(mat[i][j]>key)
	            j--;
            else if(mat[i][j]<key)
                i++;
            
	            
	    }
	    
	    return flag;
	}
