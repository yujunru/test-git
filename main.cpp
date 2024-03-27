#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums {0, 1, 2, 3};
    int* p1 = &(nums[0]);
    int* p2 = &(nums[1]);

    // 检查是否超出了向量范围

        cout << "指针超出向量范围" << endl;


    return 0;
}
