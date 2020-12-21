#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
void swap(vector<int> *arr,int idx1,int idx2){
    int temp = (*arr).at(idx1);
    (*arr).at(idx1) = (*arr).at(idx2);
    (*arr).at(idx2) = temp;
}
int main(){
    //getting inputs
    int length;
    cout<<"enter the number of elements in the array!\n";
    cin>>length;
    cout<<"enter the elements of the array!\n";
    for(int i=0;i<length;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    //bubble swap
    for(int i=1;i<=length;i++){
        bool swaping = false;
        for(int j=0;j<length-i;j++){
            if(arr.at(j+1)<arr.at(j)){
                swap(&arr,j,j+1);
                swaping = true;
            }
        }
        if(!swaping) break;
    }
    //display sorted array
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<"\n";
    return 0;
}