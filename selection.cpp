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
    //selection sort
    for(int i=0;i<length-1;i++){
        int current_min = arr.at(i);
        int current_min_pos = i;
        for(int j=i+1;j<length;j++){
            if(arr.at(j)<current_min){
                current_min = arr.at(j);
                current_min_pos = j;
            }
        }
        swap(&arr,i,current_min_pos);
    }
    //display sorted array
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<"\n";
    return 0;
}