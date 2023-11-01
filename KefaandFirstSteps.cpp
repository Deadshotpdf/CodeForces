#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int &val:arr){
        cin>>val;
    }
    int c=1; int max=-1;
    for(int i=0;i<n-1;i++){
     
        if(arr[i]<=arr[i+1]){
            c++;
        }
        else
        {
            if(c>max){
                max=c;
            }
            c=1;
        }
    }
     if(c>max){
                max=c;
    }
    cout<<max;
}
