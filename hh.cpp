/*#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"enter any number:";
    cin>>n;
    for(n=1;n<=10;n++){
            count=0;
    if(n<=1)
        count++;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        cout<<n<<" is prime"<<endl;
    else
        cout<<n<<" is not"<<endl                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ;
    }
    getch();
}
*/
#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
    int n,sum=0,x=INT_MAX,count=0;
    cout << "Enter size: ";
    cin >> n;

    int a[n];


    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << "Prime numbers are: ";


    for(int j = 0; j < n; j++){
        int isPrime = 1;

        if(a[j] <= 1){
            isPrime = 0;
        }
        else{
            for(int i = 2; i <= sqrt(a[j]); i++){
                if(a[j] % i == 0){
                    isPrime = 0;
                    break;
                }
            }
        }

        if(isPrime == 1){
                if(a[j]<x){
                    x=a[j];
                }
                sum+=a[j];
                count++;
            cout << a[j] << " ";
        }
    }
    float avg=(sum/count);
    cout<<endl<<sum<<endl<<x<<endl<<avg<<endl;

    getch();
    return 0;
}
