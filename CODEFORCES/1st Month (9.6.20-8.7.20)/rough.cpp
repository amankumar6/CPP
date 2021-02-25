#include <bits/stdc++.h>
using namespace std;
/*template <typename T>
void write_vector(const vector<T>& V)
{
   cout << "The numbers in the vector are: " << endl;
 for(int i=0; i < V.size(); i++)
    cout << V[i] << " ";
}

int main()
{
  int input;
  vector<int> V;
  cout << "Enter your numbers to be evaluated: " << endl;
  cin >> input;
  V.push_back(input);
  write_vector(V);
  return 0;
}*/

/*bool f(int x, int y)
{
    return x>y;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> A={1, 2, 3,5 ,6,3, 4,887,64,675};
    bool present =binary_search(A.begin(), A.end(),3);
    //cout<<present<<endl;
    //cout<<A[2];
    sort(A.begin(),A.end());
    for (int x:A)
    {
        cout<<x<<" ";
    }
    //auto x =upper_bound(A.begin(),A.end(),64);
    //cout<<"\n"<< *x;
    

    return 0;
}*/
int main()
{
    set<int> s;
    int input;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>input;
        s.insert(input);
    }
    
    for (int x: s)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    auto x =s.find(-2);
    if (x==s.end())
    {
        cout<<"LUL"<<endl;
    }
    else
    {
        cout<<"Hebby"<<endl;
    }
    
    
    
    return 0;
}