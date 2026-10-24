/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char fn[20]="vaskor";
    char ln[20]=" saha";
    cout<<strlen(fn)<<endl;
    cout<<strcat(fn,ln)<<endl;
    cout<<strlen(fn)<<endl;
    cout<<strcmp(fn,ln)<<endl;
    cout<<strcpy(fn,ln)<<endl;
}
*/
/*#include<iostream>
using namespace std;
void swapnum(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
   *y=temp;
}
int main()
{
    int a=2,b=3;
    swapnum(&a,&b);
    cout<<a<<" "<<b<<endl;
}*/

#include<iostream>
using namespace std;
void take(int *p,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<" ";
        sum+=*(p+i);
    }
    cout<<sum<<endl;
}
int main()
{
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    take(a,5);
}
