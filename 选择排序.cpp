#include<iostream>

using namespace std;

void sort(int A[],int n){
      for(int i = 0;i < n;i++){
      	int temp = A[i];
      	int index = i;
      	for(int j = i;j < n;j++){
      		if(A[j] < temp){
			    temp = A[j];
			    index = j;
			  }
		  }
      	  A[index] = A[i];
      	  A[i] = temp;
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
