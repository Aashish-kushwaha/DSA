#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

for (auto& row : arr) {
    for (auto& element : row) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

}