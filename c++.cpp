#include <iostream>
using namespace std;
main (){
const int size =7;
int arr[]{5,2,34,231,16,6,7};
for(int i=0; i<size-1;i++){
    for(int t=0;t<size-1;t++){
        if (arr[t+1]>arr[t]){
            swap(arr[t+1],arr[t]);
        }
 }
 }


for (int i=0;i<size;i++){
    cout<<" "<<arr[i];
}

}