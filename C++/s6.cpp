// to find the largest sum of subarray
#include<iostream>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int INT_MIN;
    int max_so_far = INT_MIN, max_ending_here;
    
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = max_so_far;
    }
    return max_so_far;
}

int main()
{
    int arr[]={1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int largest_sum_of_subarray = maxSubArraySum(arr, size);
}
