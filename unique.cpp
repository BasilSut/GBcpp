#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::unique;
using std::vector;

int main(){
    vector<int> un = {1, 1, 2, 9, 6, 6};
        un.erase(unique(un.begin(), un.end()), un.end());
    cout << un.size();
    return 0;
}