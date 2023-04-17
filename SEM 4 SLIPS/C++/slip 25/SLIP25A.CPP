#include<iostream>

using namespace std;

inline float mean(int a[3]){
    return((a[0]+a[1]+a[2])/3);
}

inline float median(int a[3]){
    return a[(((sizeof(a)/sizeof(int))+1)/2)];
}

inline float mode(float med, float mea){
    return ((3*(med)) - (2*(mea)));
}

int main(){
    int arr[3];
    cout<<"Enter 3 int numbers: ";
    cin>>arr[0]>>arr[1]>>arr[2];

    //sorting in asc
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    float mea = mean(arr);
    cout<<endl<<"Mean of "<<arr[0]<<","<<arr[1]<<","<<arr[2]<<" = "<<mea<<endl;
    float med = median(arr);
    cout<<endl<<"Median of "<<arr[0]<<","<<arr[1]<<","<<arr[2]<<" = "<<med<<endl;
    cout<<endl<<"Mode of "<<arr[0]<<","<<arr[1]<<","<<arr[2]<<" = "<<mode(med,mea)<<endl;
    return 0;
}