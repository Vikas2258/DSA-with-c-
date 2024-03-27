/*
to find the minimun=m and maximun=m no. in array 
*/

#include<iostream>
using namespace std;
int getmax(int num[],int n){
    int maxI  = INT64_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi,num[i]);
    }
    return maxi;

}
int getmin(int num[],int n){
    int mini  = INT64_MAX;
    for(int i=0;i<n;i++){
        mini = min(mini, num[i]);
    }
    return mini;        

}

int main()
{
    int size;
    cin>>size;
    int num[size];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];

          
    }

}


/*reverse of an array */

#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n - 1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void print(int arr[], int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    
}

int main()
{
    int Arr[10];

    int size;

    cout<< "enter the size of an array ";

    cin>>size;


    for(int i=0; i<size; i++)
    {
        cin>>Arr[i];
    }   
    
    reverse(Arr,size);
    print(Arr,size);

}



/*Reverse of an string */

#include<iostream>
using namespace std;


void reverse(string name, int n ){
    
    int s = 0;
    int e = n -1 ;
    while(s<=e){
        
        swap(name[s],name[e]);
        s++;
        e--;
    }
    cout<<name;
}



 int main(){
     
     
     string name ;
     
     cout<<"Enter  the string ";
     
     getline(cin,name);
     
     int n = name.length();
     
     reverse(name,n);
     
     
     
 }


 /*swap the alternate elements of array */


#include<iostream>
using namespace std;

void alternate(int arr[], int n){

    for (int i=0;i < n ;i+=2){
        if (i + 1 < n){
            swap(arr[i],arr[i + 1]);

        }



    }

}

void print(int arr)

int main()
{
    int arr[10];
    int size;
    cin>>size;


    for(int i = 1; i<size; i++){
        cin>>arr[i];
    }

    

}

