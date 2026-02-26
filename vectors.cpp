#include <iostream>
#include <vector>
using namespace std;


// int linearSearch(vector<int> &ls){
//     int target;
//     cout << "Enter the target number: ";
//     cin >> target;
//     for (int i = 0; i < ls.size(); i++){
//         if ( target == ls[i]){
//             cout<<"found"<<"\n";
//             return i;
//         }
//     }
//     cout<<"not found"<<"\n";
//     return -1;
// }

// int reverseVector(vector<int> &reverse){
    

//     for(int i = 0; i < reverse.size()/2; i++){
//         int temp = reverse[i];
//         reverse[i] = reverse[reverse.size() - i - 1];
//         reverse[reverse.size() - i - 1] = temp;
//     }

//     reverseVector(reverse);
//     for(int i = 0; i < size; i++){
//         cout<<reverse[i]<<" ";
//     }
//     return 0;
// }


// majority element
int majorityElement(vector<int> me){
    int count=0,max = 0;
    for(int i = 0; i < me.size(); i++){
        for( int j = 0; j < me.size(); j++){
            if(me[i] == me[j]){
                count++;
            }
        }
        if(count > me.size() / 2){
            return i;
        }
        count = 0;
    }
}

int main(){
    int size;
    // cout<<"enter the size of the vector: ";
    // cin >> size;
    // for(int i = 0; i < size; i++){
    //     int element;
    //     cout<<"enter the element: ";
    //     cin >> element;
    //     reverse.push_back(element);
    // }
    vector<int> me = {1,1,1,3};
    int val = majorityElement(me);
    cout<< val <<" "<<me[val]<<" is the number that came majority";
    

}