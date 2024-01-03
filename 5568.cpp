#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

string temp_str;

void select(string& temp_str, set<string>& output_set, vector<string> input_vec, vector<bool> is_visited, int n, int k);

int main(){
    int n, k;
    set<string> output_set;
    vector<string> input_vec;
    vector<bool> is_visited;

    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> input_vec[i];
    }

    select(temp_str, output_set, input_vec, is_visited, n, k);
    cout << output_set.size() << endl;
    
    return 0;
}

void select(string& temp_str, set<string>& output_set, vector<string> input_vec, vector<bool> is_visited, int n, int k){
    if(k==0){
        output_set.insert(temp_str);
        return;
    }

    for(int i=0; i<n; i++){
        if(!is_visited[i]){
            is_visited[i] = true;
            temp_str += input_vec[i];
            select(temp_str, output_set, input_vec, is_visited, n, k-1);
            is_visited[i] = false;
        }
    }
}