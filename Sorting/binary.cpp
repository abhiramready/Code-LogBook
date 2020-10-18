#include <iostream>
using namespace std;

int BinarySearch(int array[], int s, int low, int high)
{
    //when low = mid we finished our search
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == s)
            return mid;
        
        //less than mid
        if (array[mid] < s)
            low = mid + 1;
        //greater than mid
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int array[] = {1, 4, 5, 8, 10, 11, 20};
    int n = sizeof(array) / sizeof(array[0]);
    int s = 5;

    int answer = BinarySearch(array, s, 0, n - 1);
    if (answer == -1)

       cout<<"Element Not Found";
    else
        cout<<"Element "<<array[answer]<<" found at "<<answer;

    return 0;
}