#include <iostream>

using namespace std;

int*  targetsum(int nums[], int target) {
    static int result_array[2];
    for(int i =0; i< sizeof(nums)-1; i++)
    {
        for(int j=i+1; j< sizeof(nums)-1; j++){
            if( nums[i]+ nums[j] == target){
                result_array[0] = i;
                result_array[1] = j;
                return result_array;
                       }
        }
    }
    return nullptr;
}

int main(){
    int nums[] = {2,7,11,15};
    int target = 9;
    int* target_indexes = targetsum(nums, target);

    if(target_indexes != nullptr) {
        cout << "output is: [" << target_indexes[0] << ", " << target_indexes[1] << "]" << endl;
    }
    else{
        cout << "NO solution found!" << endl;
    }
    return 0;
}
