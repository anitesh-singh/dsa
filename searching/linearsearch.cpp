// linear search traversing the array elements one by one to find the key(required) element
#include <iostream>
using namespace std;
bool linearsearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1; // 1 means true
        }
    }
    return 0; // 0 means false
}
int main()
{
    int arr[5] = {2, 4, 5, 6, -6};
    int key;
    cout << "enter the element you wanted t0 search:" << endl;
    cin >> key;
    bool found = linearsearch(arr, 5, key);
    if (found)
    {
        cout << "element is present" << endl;
    }
    else
    {
        cout << "element is Absent" << endl;
    }
}