#include<bits/stdc++.h>
using namespace std;

int main(){
    
    priority_queue<int,vector<int>,greater<int>> pq; 
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];
    
    for(int i=0;i<10;i++) {
      pq.push(arr[i]);
    }
    
    for(int i=10;i<n;i++) {
        if(arr[i]>pq.top()) {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    cout<<"Top 10 elements: ";
    
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}