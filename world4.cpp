#include <iostream>
using namespace std;
 int main()
{
int N;
cout<<"Enter N:";
cin>>N;
Int acc=0;
//handle the first number separately
cin>>acc;
int minVal=acc;
int maxVal=acc;
//then process the rest of the input
for(int i=1; i<N;++1)
{
int a;
cin>>a;
acc+=a;
if(a<minVal)
{
minVal=a;
}
if(a>maxVal)
{
maxVal=a;
}
}
cout<<"mean:"<<(double)acc/N<<"\N";
cout<<"max:"<<maxVal<<"<n";
cout<<"min:<<minVal<<"<n";
cout<<"Range:"<<(maxVal-minVal)<<"\n";
return 0;
}