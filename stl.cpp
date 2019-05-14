#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;
    int arr[100];

    cout<<"Enter Array Elements: \n";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    // arr = {1, 2, 3, 4, 5}

    cout<<"Enter Vector Elements: \n";
    int temp = 0;
    while (temp != -1){
        cin>>temp;
        v.push_back(temp);
    }
    
    // v = {1, 2, 3, 4, 5}

    return 0;
}