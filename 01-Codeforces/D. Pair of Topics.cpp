// C++ program to answer queries to count number
// of elements smaller tban or equal to x.
#include<bits/stdc++.h>
using namespace std;

// structure to hold queries
struct Query
{
    int l, r, x, idx;
};

// structure to hold array
struct ArrayElement
{
    int val, idx;
};

// bool function to sort queries according to k
bool cmp1(Query q1, Query q2)
{
    return q1.x < q2.x;
}

// bool function to sort array according to its value
bool cmp2(ArrayElement x, ArrayElement y)
{
    return x.val < y.val;
}

// updating the bit array
void update(int bit[], int idx, int val, int n)
{
    for (; idx<=n; idx +=idx&-idx)
        bit[idx] += val;
}

// querying the bit array
int query(int bit[], int idx, int n)
{
    int sum = 0;
    for (; idx > 0; idx -= idx&-idx)
        sum += bit[idx];
    return sum;
}

void answerQueries(int n, Query queries[], int q,
                              ArrayElement arr[])
{
    // initialising bit array
    int bit[n+1];
    memset(bit, 0, sizeof(bit));

    // sorting the array
    sort(arr, arr+n, cmp2);

    // sorting queries
    sort(queries, queries+q, cmp1);

    // current index of array
    int curr = 0;

    // array to hold answer of each Query
    int ans[q];

    // looping through each Query
    for (int i=0; i<q; i++)
    {
        // traversing the array values till it
        // is less than equal to Query number
        while (arr[curr].val <= queries[i].x && curr<n)
        {
            // updating the bit array for the array index
            update(bit, arr[curr].idx+1, 1, n);
            curr++;
        }

        // Answer for each Query will be number of
        // values less than equal to x upto r minus
        // number of values less than equal to x
        // upto l-1
        ans[queries[i].idx] = query(bit, queries[i].r+1, n) -
                              query(bit, queries[i].l, n);
    }

    // printing answer for each Query
    for (int i=0 ; i<q; i++)
        cout << ans[i] << endl;
}

// driver function
int main()
{
    // size of array
    int n;
    ArrayElement arr[n];
    cin>>n;
    vector<int> v(n),r(n),d(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++) cin>>r[i];
    for(int i=0;i<n;i++){
        int x=v[i]-r[i];
        d[i]=x;
        arr[i].val=x;
        arr[i].idx=i;
    }
    int cnt=0;
    // number of queries
    int q = n-1;
    Query queries[q];
    for(int i=0;i<q;i++){
        queries[i].l=i+1;
        queries[i].r=n-1;
        queries[i].x=d[i];
        queries[i].idx=i;
    }

    answerQueries(n, queries, q, arr);

    return 0;
}
