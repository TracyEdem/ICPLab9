#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void populateArray(int A[101][101],int N){
    srand(time(0));
    while(N>0){
       int i = rand() % 100;
       int j = rand() % 100;
       cout<<2000-N<<" "<<i<<" "<<j<<" , "<<endl;
       if(A[i][j]==-1){
         A[i][j]=1;
       }
       else if(A[i][j]>=1){
        A[i][j]++;
       }
       else{
        A[i][j]= -1;
       }

       N--;
    }

}


void searchValidEntries(int leftupperx, int leftuppery, int rightlowerx, int rightlowery,int A[101][101]){
    for(int i=leftupperx; i<=(rightlowerx+1);i++){
            for(int j=leftuppery; j<=(rightlowery+1);j++){
                if(A[i][j]>0 && A[i][j]<2000){
                    cout<<"i"<<" , "<<"j"<<" ; "<<A[i][j]<<endl;
                }
            }
    }

}

int main()
{
    int i,j;
    int A[101][101];


    populateArray(A,2000);

    int counter=0;
    for(i=0;i<101;i++){
        for(j=0;j<101;j++){
            if(A[i][j]>=1 && A[i][j]<2000){
                cout<<"("<<i<<","<<j<<")"<<" "<<A[i][j]<<" , ";
                counter++;
            }
        }
    }


    cout<<"\n"<<counter;
    cout<<"\n";

    searchValidEntries(96,38,100,85,A);
    return 0;
}
