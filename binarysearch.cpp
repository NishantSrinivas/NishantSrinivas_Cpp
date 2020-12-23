#include<bits/stdc++.h>
using namespace std;
int length {0};
vector<int> arr;
int BinarySearch(vector<int> arr,int key,int start=0, int end=length-1){
    int mid{0},left {start}, right{end};
    bool found {false};
    if(left<right){
        mid = (left+right)/2;
        if(arr.at(mid)==key){
            found == true;
            return mid;
        }
        else if(key>arr.at(mid)){
            return BinarySearch(arr,key,start=mid+1,end=length);  
        }
        else{
            return BinarySearch(arr,key,start=0,end=mid-1);
        }
    }
    if(found==true){
        return mid;
    }
    else{
        return -1;
    }
}
int main(){
    int key {0};
    cout<<"enter the number of elements in the array!\n";
    cin>>length;
    cout<<"enter the elements of the array!\n";
    for(int i=0;i<length;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"enter the key to be searched\n";
    cin>>key;
    int idxkey = BinarySearch(arr,key);
    if(idxkey!=-1){
        cout<<"the key is found at index "<<idxkey<<"\n";
    }
    else{
        cout<<"key not found\n";
    }
    return 0;
}