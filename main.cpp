#include <iostream>

using namespace std;
int fnLinSearch(int A[], int k, int iLow,int iHigh)
{
    int iMid;
    if(iLow<=iHigh)
    {
    iMid=(iLow+iHigh)/2;
        if(k==A[iMid])
            return iMid;
        if(k<A[iMid])
            return fnLinSearch(A,k,iLow,iMid-1);
        if(k>A[iMid])
            return fnLinSearch(A,k,iMid+1,iHigh);
    }
    else
        return -1;
}


int main(void)
{
int num,iKey;
int i,iPos=0;
cout << "\nEnter the size of the array\n" << endl;
cin >>num;
int Arr[num];
cout << "\nEnter the elements of the array in ascending order:\n";
for(i=0;i<num;i++){
    cin >> Arr[i];
}

cout << "\nenter the key element\n" << endl;
cin >> iKey;

iPos=fnLinSearch(Arr,iKey,0,num-1);
if(iPos==-1)
cout << "\nElement not found\n" << endl;
else
cout << "\nElement found at position "<<iPos << endl;
return 0;
}

