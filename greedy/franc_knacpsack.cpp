
#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight;

    // Constructor
    Item(int value, int weight) : value(value), weight(weight)
    {}
};
bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    cout<<"r1:"<<r1<<"......r2:"<<r2<<endl;
    return r1 > r2;
}

// Main greedy function to solve problem
double fractionalKnapsack(int W, struct Item arr[], int n)
{
    //    sorting Item on basis of ration
    sort(arr, arr + n, cmp);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].value<<"->";
    }
    cout<<endl;
      for(int i=0;i<n;i++)
    {
        cout<<arr[i].weight<<"->";
    }
    cout<<endl;

    int curWeight = 0;  // Current weight in knapsack
    double finalvalue = 0.0; // Result (value in Knapsack)

    // Looping through all Items
    for (int i = 0; i < n; i++)
    {
        // If adding Item won't overflow, add it completely
        if (curWeight + arr[i].weight <= W)
        {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }

        // If we can't add current Item, add fractional part of it
        else
        {
            int remain = W - curWeight;
            cout<<"i:"<<i<<"..remain:"<<remain<<endl;
            finalvalue += arr[i].value * ((double) remain / arr[i].weight);
            break;
        }
    }
    return finalvalue;
}

int main()
{
    int W = 50;   //    Weight of knapsack
    Item arr[] = {{60, 10}, {100, 20}, {120, 30}};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"n:"<<n<<endl;

    cout << "Maximum value we can obtain = "
         << fractionalKnapsack(W, arr, n);
    return 0;
}

