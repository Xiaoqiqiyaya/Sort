#include<iostream>

using namespace std;

int pivot(int A[],int low,int high){
      int temp=A[low];
      while(low<high){
      	 while(low<high&&A[high]>temp) --high;
      	 A[low]=A[high];
      	 while(low<high&&A[low]<temp) ++low;
      	 A[high]=A[low];
      	 
	  }
      A[low]=temp;
      return low;
}

void quick(int A[],int low,int high){
   if(low<high){
      int mid=pivot(A,low,high);
      quick(A,low,mid-1);
      quick(A,mid+1,high);
   }
}




int main(){
	
	int A[]={9,8,7,6,5,4,3,2,1,0};
	quick(A,0,9);
	for(int i=0;i<10;i++){
	   cout<<A[i];
	}
	
    return 0;	
}
