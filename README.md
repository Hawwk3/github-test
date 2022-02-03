#include <iostream>
using namespace std;
main (){

int arr[6] {2,5,99,-3,3,-12};         
int j = 0;

for(int i = 0;i<6;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int min = arr[0];
for (int i =1 ; i<6;i++){
    if(min>arr[i]){
       min=arr[i];
       cout<<"new min"<<" "<<min<<endl;

    }
}
cout<<min;
cout<<endl;
int max = arr[0];
for (int i =1 ; i<6;i++){
    if(max<arr[i]){
       max=arr[i];
       cout<<"new max"<<" "<<max<<endl;
    }
}
cout<<max;
}
