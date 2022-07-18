#include <iostream>
#include <vector>

using namespace std;
int main(){
    int array[4] = {1,2,3,4};
    vector <int> ans;
    int prod;
    for(int i=0; i<4; i++){
        prod = 1;
        for(int j=0; j<4; j++){
            if(j==i)
                continue;
            else{
                prod *= array[j]; 
            }
        }
        ans.push_back(prod);
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }

    return 0;
}

