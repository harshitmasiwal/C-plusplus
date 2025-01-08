#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    int n = 3;

    for (int i = 0; i < 3; i++)
    {
        q.push(arr[i]);
    }

    for (int i = 3; i < 11; i++)
    {
        cout << "The queue gquiz is : ";
        while (n--)
        {
            cout << q.front() << " ";
            q.push(q.front());
            q.pop();
        }
        n  = 3;     
        q.pop();
        q.push(arr[i]);

        cout<<endl;

    }
}