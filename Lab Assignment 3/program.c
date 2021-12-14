#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	
	
		int T;
    	cin>>T;
		
		int O[T];
		
		for(int i=0;i<T;i++)
	    {
	    
	    int n;
	    cin>>n;
     

	    	for(int j=0;j<n;j++){
	    		
	    		int temp;
	    		cin>>temp;
	    		
	    		if(j==0)
	    	    {	
	    	    	temp = temp&(temp^4);
	    	    	O[i]=temp;
	    	    	continue;
	    	    }
	    	    O[i]=O[i]^temp;
	    		
	    	}
	    	
	    }
	    
	  
	 	int max = O[i];
	 	
		for(int i=0;i<T;i++)
	    {
	    	if(max<O[i])
	        	max = O[i];
	
	    }
	    
	    cout<<max;
		
	
	return 0;
}
