#include<iostream>

using namespace std;

void sort(int A[],int n){
    for (int i=0;i<n;i++){
    	for(int j=0;j<n-i-1;j++){
    		if(A[j]>A[j+1]){
			    int temp=A[j];
			    A[j]=A[j+1];
			    A[j+1]=temp;
			}
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
