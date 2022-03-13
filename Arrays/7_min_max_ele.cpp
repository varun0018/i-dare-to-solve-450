

#include <stdio.h>

struct pair
{
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n);

int main()
{
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld", &n);

        for (i = 0; i < n; i++)
            scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;
} // } Driver Code Ends

// User function Template for C

struct pair getMinMax(long long int arr[], long long int n)
{
    struct pair ans; //structure defined by program

    if (n == 1) //if there is only one ele then that ele is both min and max
    {
        ans.min = arr[0];
        ans.max = arr[0];
        return ans;
    }

    if (arr[0] > arr[1]) //if there are more than one ele then setting min and max
    {
        ans.max = arr[0];
        ans.min = arr[1];
    }
    else
    {
        ans.max = arr[1];
        ans.min = arr[0];
    }

    for (int i = 2; i < n; i++) //looping through the ele and finding min and max
    {
        if (arr[i] > ans.max)
        {
            ans.max = arr[i];
        }
        else if (arr[i] < ans.min)
        {
            ans.min = arr[i];
        }
    }
    return ans;
}