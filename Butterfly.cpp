#include<iostream>
using namespace std;


int main(){
    int r;
    cin>>r;

    //first Part 
    for(int i=1;i<=r;i++){

        for(int j=1;j<=r*2;j++){
            
            if(j<=i||j>r*2-i)
                cout<<"*";
            else
                cout<<" ";
              
       }
       cout<<endl;

    }

    //Second Part 
    for(int i=r;i>0;i--){

        for(int j=1;j<=r*2;j++){

            if(j<=i||j>2*r-i)
                cout<<"*";
            else
                cout<<" ";

              
       }
       cout<<endl;

    }

    
    return 0;
}


//output:

/*

input: 8


*              *
**            **
***          ***
****        ****
*****      *****
******    ******
*******  *******
****************
****************
*******  *******
******    ******
*****      *****
****        ****
***          ***
**            **
*              *



/**/