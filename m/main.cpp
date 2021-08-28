#include <iostream>

using namespace std;

int main()
{
    int a[3][3];
    int m[3];
    int n[3];
    int r[3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
                cin>>a[i][j];

    for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
         if(j==0)
            m[i]=a[i][j];
         if(j==1)
            n[i]=a[i][j];
         if(j==2)
            r[i]=a[i][j];
     }
    }
      for(int i=0;i<3;i++)
        cout<<m[i]<<" ";
      for(int j=0;j<3;j++)
        cout<<n[j]<<" ";
      for(int p=0;p<3;p++)
        cout<<r[p]<<" ";
    return 0;
}
