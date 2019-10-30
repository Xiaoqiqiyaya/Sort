#include<iostream>

using namespace std;

void mere(int A[],int low,int high,int mid){
	int B[high];
	for(int i=low;i<=high;i++)
	   B[i]=A[i];
	int i=low,j=mid+1,k=low;
	while(i<=mid&&j<=high){
		if(B[i]<B[j]){
		    A[k]=B[i++];
		}else
            A[k]=B[j++];
       k++;
	} 
		while(i<=mid){
	     	A[k++]=B[i++];
    	}
    	while(j<=high){ 
		    A[k++]=B[j++];
     	}
} 
void mergesort(int A[],int low,int high){
  if(low<high){
  	int mid=(low+high)/2;
  	mergesort(A,low,mid);
  	mergesort(A,mid+1,high);
  	mere(A,low,high,mid);
  }
}


int main(){
	
	int A[] = {9,8,7,6,5,4,3,2,1,0};
	mergesort(A,0,9);
	for(int i = 0;i < 10;i++){
	   cout<<A[i];
	}
	
    return 0;	
}
