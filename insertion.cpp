#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
void swap(vector<int> *arr,int idx1,int idx2){
    int temp = (*arr).at(idx1);
    (*arr).at(idx1) = (*arr).at(idx2);
    (*arr).at(idx2) = temp;
}
void display(){
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<"\n";
}
int main(){
    int current_element {0};
    int j {0};
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
    //insertion sort
    for(int i=1;i<length;i++){
       current_element = arr.at(i);
       j = i-1;
       while(j>=0 and current_element<arr.at(j)){
           arr.at(j+1) = arr.at(j);
           j--;
       }
       arr.at(j+1) = current_element;
    }
    //display sorted array
    display();
    return 0;
}