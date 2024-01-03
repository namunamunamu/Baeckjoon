#include <iostream>
#include <algorithm>

using namespace std;

//input
int input_arr[9];

void dwarfDetector(int *input_arr);

// int main(){

//     for (int i=0; i<9; i++){
//         cin >> input_arr[i];
//     }
    
//     dwarfDetector(input_arr);
//     sort(input_arr, input_arr+9);
//     for(int i=2; i<9; i++){
//         cout << input_arr[i]<< endl;
//     }

//     return 0;
// }

void dwarfDetector(int *input_arr) {
    int sum = 0;
    int over;
    for (int i=0; i< 9; i++){
        sum += input_arr[i];
    }
    over = sum - 100;
    for(int i=0; i<9; i++){
        for(int j=i+1; j<9; j++){
            if(input_arr[i] + input_arr[j] == over){
                //illiminates the two fake dwarfs
                input_arr[i] = 0;
                input_arr[j] = 0;
                return;
            }
        }
    }
    return;
}