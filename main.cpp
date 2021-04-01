#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void populateArray(int A[101][101],int N){
    srand(time(0));
    while(N>0){
       int i = rand() % 100;
       int j = rand() % 100;
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
    cout<<"For the bounding boxes "<<leftupperx<<","<<leftuppery<<","<<rightlowerx<<","<<rightlowery<<":"<<endl;
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
    searchValidEntries(80, 1, 100, 10,A);
    searchValidEntries(10, 20, 40, 79,A);
    searchValidEntries(1, 90, 100, 100,A);
    searchValidEntries(40, 30, 70, 60,A);
    searchValidEntries(50, 50, 70, 70,A);

    return 0;
}
