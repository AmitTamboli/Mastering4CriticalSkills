#include<iostream>


using namespace std;

int main()
{
    int num;
    int arr[200] {};
    bool isIncreasing = true;
    
    cout << "Enter the number of elements: ";
    cin >> num;
    
    for(int i=0;i<num;i++)
    {
        cin >> arr[i];
    }
    
    for(int i=1; i<num; i++)
    {
        if(arr[i] < arr[i-1])
        {
            isIncreasing = false;
            break;
        }
    }
    if(isIncreasing)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}