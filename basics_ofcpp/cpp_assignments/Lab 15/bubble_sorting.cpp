#include<iostream>
using namespace std;

int main(){
	
   int arr[5]={6,5,3,1,2};
   int size=5;
   for(int i=0;i<5;i++){
    	cout<<arr[i]<<" ";
	}
	cout<<endl;
   
   for(int i=0;i<size;i++){
   	for(int j=0;j<(size-1)-i;j++){
   		if(arr[j]>arr[j+1]){
   			int temp=arr[j+1];
   			arr[j+1]=arr[j];
   			arr[j]=temp; 
		   }
	   }
   }
    for(int i=0;i<5;i++){
    	cout<<arr[i]<<" ";
	}

}

