#include<iostream>

using namespace std;

void sort(int A[],int n){
  for(int i=1;i<n;i++){
	    	if(A[i]<A[i-1]){
	    		int j=i-1;
	    		int temp=A[i];
				while(j>=0&&A[j]>temp){
	    			A[j+1]=A[j];
	    			--j;
				} 
				A[j+1]=temp;
			}
      } 
}

int main(){
	
	int A[] = {9,8,7,6,5,4,3,2,1,0};
	sort(A,10);
	for(int i = 0;i < 10;i++){
	   cout<<A[i];
	}
	
    return 0;	
}
