#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int big, int aux, int end)
{
  if(n==1) //base case
  {
    cout << big << "->" << end << endl;
  }
  else{
    // at first we need to move n-1 disks from beginning to auxilary
    hanoi(n-1, big, end, aux);
    // then we need to move nth disk from beginning to end
    cout << big << "->" << end << endl;
    // then we move the n-1 disks from auxilary to end
    hanoi(n-1, aux, big, end);
  }
}
int main()
{
    int n; // n is the number of disk
    cin >> n;
    hanoi(n, 1, 2, 3);
}
