#include<iostream>
using namespace std;

int main(){
    int r;
    cin>>r;
    int count = 1;
    for(int i=1;i<=r;i++){

        for(int j=1;j<=r;j++){
            if(j<=i){
                cout<<count<<" ";
                count++;
            }
            else{
                cout<<" ";
            }

       }
       cout<<endl;

    }
    return 0;
}


//output:

/*

input: 5

1     
2 3            
4 5 6          
7 8 9 10       
11 12 13 14 15 


/**/