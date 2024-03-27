#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int count=1;
    for( int i=1; i<=n;i++)
    {
        for(int j=1; j<=n;j++)
        {
            cout<<count;
            count+=1;

        }
        cout<<endl;

    }
    return 0;
    
}

/*
1 2 3 
4 5 6 
*/


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }


}
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }


}
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=i; j++)
        {
            cout<<count<<" ";
            count+=1;
        }
        cout<<endl;
    }


}

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   
    for(int i=1; i<=n; i++)
    {
         int count=i;

        for(int j=1; j<=i; j++)
        {
            cout<<count<<" ";
            count+=1;
        }
        cout<<endl;
    }


}
/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/



#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   
    for(int i=1; i<=n; i++)
    {
         

        for(int j=1; j<=i; j++)
        {
            cout<<i-j+1<<" ";
        
        }
        cout<<endl;
    }


}

/*
1
2 1
3 2 1
4 3 2 1
*/


