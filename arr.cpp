/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0,count=0,result,store;
    while(i<n)
    {
        result=-1;
        if(arr[i]==-1)
        {
            count++;
            i++;
        }
        else if(arr[i]>=1&&arr[i+1]==-1)
        {
            result=arr[i]+arr[i+1];
            i++;
            while(result!=0)
            {
                result+=arr[i+1];
                i++;
            }
             store=result;
        }
        //count+=store;
    }
    cout<<count<<endl;
    return 0;
}*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0, count = 0;

    while (i < n)
    {
        if (arr[i] == -1)
        {
            count++;
            i++;
        }
        else if (arr[i] >= 1 && (i + 1) < n && arr[i + 1] == -1)
        {
            int result = arr[i] + arr[i + 1];
            i++;
            while ((i + 1) < n && result != 0)
            {
                result += arr[i + 1];
                i++;
            }
            // Do something with result if needed
            // e.g., count += result;
            i=i;
        }
        else
        {
            i++; // Don't forget to increment i in other cases!
        }
    }

    cout << "Count: " << count << endl;
    return 0;
}

