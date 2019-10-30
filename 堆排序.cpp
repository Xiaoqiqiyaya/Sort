#include<iostream>

using namespace std;

void heapify(int A[],int i,int n){
     if(i>=n)
         return ;
	 int c1=i*2+1;
     int c2=i*2+2;
     int max=i;
     if(c1<n&&A[c1]>A[max]){
     	max=c1;
	 }
	 if(c2<n&&A[c2]>A[max]){
     	max=c2;
	 }
	 if(max!=i){
	    swap(A[max],A[i]);
	    heapify(A,max,n);
	}
}

void Buildheap(int A[],int n){
	for(int i=n/2;i>=0;i--){
		heapify(A,i,n);
	}
}

int main(){
	
	int A[] = {9,8,7,6,5,4,3,2,1,0};
	Buildheap(A,10);
	for(int i = 9;i >= 0;i--){
	   swap(A[i],A[0]);
	   heapify(A,0,i);
	}
	
	for(int i = 0;i < 10;i++){
	   cout<<A[i];
	}
	
    return 0;	
}
