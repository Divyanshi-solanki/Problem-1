/*Given a grid of cells arranged in m rows and n columns, where the top left cell is numbered as (1,1) and the bottom right is (m,n). One can move either horizontally or vertically. Given the coordinates of starting and goal cell, output the minimum number of steps would be taken. First line of input provides m and n, next line gives coordinates of start and end cell.*/

//solution//

#include<iostream>

using namespace std;

int main()
{   
     int p,q,k,l,m,n,a,b;
    
    cin>>p>>q;
    cin>>a>>b;
    cin>>m>>n;
    
    k=(a-m);
    if(k<0)
    k=-k;
    
    l=(n-b);
    if(l<0)
    l=-l;
    
    cout<<k+l;
    
    
    return 0;
}
