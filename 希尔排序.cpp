#include<iostream>

using namespace std;

void sort(int A[],int n){
     for(int dk=n/2;dk>0;dk=dk/2)
	    for(int i=dk;i<n;i++){
	    	if(A[i]<A[i-dk]){
	    		int j=i-dk;
	    		int temp=A[i];
				while(j>=0&&A[j]>temp){
	    			A[j+dk]=A[j];
	    			j=j-dk;
				} 
				A[j+dk]=temp;
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
