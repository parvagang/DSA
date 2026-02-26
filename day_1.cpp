#include <iostream>
using namespace std;
// This function will check if the number is prime or not
int prime(int n)
{
    if (n <= 1)
    {
        cout << "Pease check the number you have entered";
        return 0;
    }
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        cout << "The number " << n << " is a prime number";
    }
    return 1;
}
// This function will print all the prime numbers from 1 to n
int primeN(int n)
{
    int a, count;
    for (a = 2; a <= n; a++)
    {
        if (a == 2)
        {
            cout << a << ",";
            continue;
        }
        count = 0;
        for (int i = 1; i < a / 2; i++)
        {
            if (a % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << a << ",";
        }
    }
}
// This function will print the fibonacci series up to n
int fibonacci(int n)
{
    int fib, a = 0, b = 1;
    for (int i = 1; i <= n; i++)
    {

        if (i == 1)
        {
            cout << a << ",";
        }

        if (i == 2)
        {
            cout << b << ", ";
        }

        cout << a + b << ", ";
        int c = a;
        a = b;
        b = b + c;
    }
}

// This function will check if the number is a power of 2 or not by using loops
void powerOf2(int n)
{
    while (n % 2 == 0)
    {
        n = n / 2;
    }
    if (n == 1)
    {
        cout << "The number is a power of 2";
    }
    else
    {
        cout << "The number is not a power of 2";
    }
}
//  reversing number
void reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << "The reverse of the number is: " << rev;
}
//  linear search
int linearSearch_array(int arr[], int target)
{
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == target)
        {
            cout << "found ";
            return i;
        }
    }
    cout << "Not found" << "index" << -1;
    return -1;
}

//  binary search
int sumArray(int arr[], int sz)
{
    int sum = 0, mul = 1;
    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
        mul *= arr[i];
    }
    cout << "sum of elements: " << sum << "\n multiplication of array elemnts:" << mul;
    return 0;
}
//  swap max and min
int swapMaxMin(int arr[], int sz)
{

    int smallest = INT32_MAX, largest = INT32_MIN, indexSmallest, indexLargest;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            indexSmallest = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            indexLargest = i;
        }
    }
    swap(arr[indexSmallest], arr[indexLargest]);
    return 0;
}

//  unique values in an array
int uniqueValues(int arr[], int sz)
{
    int count = 0;
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i];
        }
        count = 0;
    }
}

//  intersection of two arrays
int intersection(int arr1[], int arr2[], int sz1, int sz2)
{
    int count = 0;
    for (int i = 0; i < sz1; i++)
    {
        for (int j = 0; j < sz2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++;
            }
        }
        if (count != 0)
        {
            cout << arr1[i] << " ";
        }
        count = 0;
    }
}

int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;

    // int a[] = {1,2,3,4};
    // int b[] = {5,6,7,1,4};
    // int sz1 = sizeof(a) / sizeof(int);
    // int sz2 = sizeof(b) / sizeof(int);


    return 0;
}