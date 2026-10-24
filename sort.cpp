#include<iostream>
using namespace std;
class student
{
public:

    string name;
    int id;
    int mark[3];
};
int main()
{
    student s1,s2,s3;
    s1.name="Rahim";
    s1.id=101;
    /*s1.mark[0]=70;
    s1.mark[1]=96;
    s1.mark[2]=88;*/
    //student s1.mark[3]={1,2,3};
    for(int i=0;i<3;i++)
    {
        cin>>s1.mark[i];
    }
    float avg1=(s1.mark[0]+s1.mark[1]+s1.mark[2])/(float)3;

    s2.name="Karim";
    s2.id=102;
    s2.mark[0]=65;
    s2.mark[1]=79;
    s2.mark[2]=90;
    float avg2=(s2.mark[0]+s2.mark[1]+s2.mark[2])/(float)3;

    s3.name="Fahim";
    s3.id=103;
    s3.mark[0]=80;
    s3.mark[1]=72;
    s3.mark[2]=91;
    float avg3=(s3.mark[0]+s3.mark[1]+s3.mark[2])/(float)3;

    if(avg1>avg2&&avg1>avg3)
    {
        cout<<"the student who achieved heigher average:"<<endl;
        cout<<"name:"<<s1.name<<endl;
        cout<<"id:"<<s1.id<<endl;
        int max=s1.mark[0];
        int min=s1.mark[0];
        for(int i=0;i<3;i++)
        {
            if(s1.mark[i]>max)
            {
                max=s1.mark[i];
            }
            if(s1.mark[i]<min)
            {
                min=s1.mark[i];
            }
        }
        cout<<"the height mark is:"<<max<<endl;
        cout<<"the lowest mark is:"<<min<<endl;
    }

else if(avg2>avg1&&avg2>avg3)
    {
        cout<<"the student who achieved heigher average:"<<endl;
        cout<<"name:"<<s2.name<<endl;
        cout<<"id:"<<s2.id<<endl;
        int max=s2.mark[0];
        int min=s2.mark[0];
        for(int i=0;i<3;i++)
        {
            if(s2.mark[i]>max)
            {
                max=s2.mark[i];
            }
            if(s2.mark[i]<min)
            {
                min=s2.mark[i];
            }
        }
        cout<<"the height mark is:"<<max<<endl;
        cout<<"the lowest mark is:"<<min<<endl;
    }
 else
    {
        cout<<"the student who achieved heigher average:"<<endl;
        cout<<"name:"<<s3.name<<endl;
        cout<<"id:"<<s3.id<<endl;
        int max=s3.mark[0];
        int min=s3.mark[0];
        for(int i=0;i<3;i++)
        {
            if(s3.mark[i]>max)
            {
                max=s3.mark[i];
            }
            if(s3.mark[i]<min)
            {
                min=s3.mark[i];
            }
        }
        cout<<"the height mark is:"<<max<<endl;
        cout<<"the lowest mark is:"<<min<<endl;
    }


}
