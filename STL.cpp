#include <bits/stdc++.h>
#define ll long long int
#define i(a, n) int a = n;
#define l(a, n) ll a = n;
#define d(a, n) double a = n;
#define s(a) string a;
#define c(a)  \
    ll a;     \
    cin >> a; \
    a
#define cd(a) \
    double a; \
    cin >> a;
#define cs(a) \
    string a; \
    cin >> a;
#define ci(a) cin >> a
#define co(a) cout << a
#define cos(a) cout << a << " "
#define con(a) cout << a << endl
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl
#define ca(arr, n)             \
    for (ll i = 0; i < n; i++) \
    cin >> arr[i]
#define caa(arr, n)            \
    c(n);                      \
    ll arr[n];                 \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i];
#define f0(i, a, n) for (ll i = a; i >= n; i--)
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, a, n) for (ll i = a; i < n; i++)
#define lcm(a, b) (a * b) / __gcd(a, b)
#define T     \
    ll t = 1; \
    cin >> t; \
    while (t--)
#define sr(a, n) sort(a, a + n)
#define rv(a, n) reverse(a, a + n)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ret(x) return cout << x, 0;

using namespace std;

int myArray()
{
    array<int, 4> arr = {1, 2, 3, 4};

    int size = arr.size();
    f(i, size) cos(arr[i]);

    nl;

    cout << "Element at 2nd Index" << arr.at(2) << endl;
    cout << "Empty or not: " << arr.empty() << endl;
    cout << "First El: " << arr.front() << endl;
    cout << "last el: " << arr.back() << endl;
}

int myVector()
{
    vector<int> v;
    vector<int> vec(5, 1); // size of the vector will be 5 and all 5 elm will be initialize with 1 default is 0
    vector<int> vec2(vec); // it will copy all elms of vector vec to vec2

    for (int i : vec2)
        cos(i);

    // size means total elm in the vector
    // capacity means total capacity of the vector

    cout << "vector capacity: " << v.capacity() << endl;

    // v.push_back() will add elm at the end of the vector

    v.push_back(2);
    v.push_back(5);
    v.push_back(343);
    v.push_back(122);
    v.push_back(23);
    v.push_back(162);

    cout << "vector capacity after pushing elm: " << v.capacity() << endl;

    cout << "elm at index 2: " << v.at(2) << endl;

    cout << "First El: " << v.front() << endl;
    cout << "last el: " << v.back() << endl;

    // v.pop_back() will throw the last elm from the vector

    cout << "before pop" << endl;
    for (int i : v)
        cos(i);
    nl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
        cos(i);
    nl;

    v.clear(); // it will clear the vector
    // note:- it will only clear the size not the capacity, only size will be zero, capacity will remain same
}

int myDeque()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_back(12);
    d.push_front(223);

    for (int i : d)
        cos(i);

    d.pop_back();

    nl;

    cout << "Print First Index Element: " << d.at(1) << endl;

    cout << "Empty or not: " << d.empty() << endl;

    cout << "before erase: " << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1); // it will delete or elms from a to b

    cout << "after erase: " << d.size() << endl;

    for (int i : d)
        cos(i);

    d.clear();
}

int myList()
{
    // --------------------------- List(doubly linked list) ---------------------------

    list<int> l;
    list<int> newList(l);
    list<int> newList2(5, 100);

    for (int i : newList2)
        cos(i);

    nl;

    l.push_back(12);
    l.push_back(32);

    for (int i : l)
        cos(i);

    // l.erase(); it will take o(n) time because we have to iterate over each elm and delete it

    nl;
    cout << "size of list" << l.size() << endl;
}

int myStack()
{
    stack<string> s;

    s.push("name1");
    s.push("name2");
    s.push("name3");

    cout << "Top Element: " << s.top() << endl;

    s.pop();

    cout << "Top Element after removing top: " << s.top() << endl;

    cout << "Empty or not: " << s.empty() << endl;
}

int myQueue()
{
    queue<string> que;

    que.push("name1");
    que.push("name2");
    que.push("name3");

    cout << "First Element: " << que.front() << endl;

    cout << "Size before pop" << que.size() << endl;

    que.pop();

    cout << "First Element after removing front: " << que.front() << endl;

    cout << "Size after pop" << que.size() << endl;
}

int myPriority_queue()
{
    priority_queue<int> maxHeap; // it will be max heap

    maxHeap.push(22);
    maxHeap.push(46);
    maxHeap.push(621);
    maxHeap.push(31);
    maxHeap.push(213);

    int maxHeapSize = maxHeap.size();

    cout << "MaxHeap size: " << maxHeapSize << endl;

    f(i, maxHeapSize)
    {
        cos(maxHeap.top());
        maxHeap.pop();
    }

    nl;

    priority_queue<int, vector<int>, greater<int>> minHeap; // min heap

    minHeap.push(22);
    minHeap.push(46);
    minHeap.push(621);
    minHeap.push(31);
    minHeap.push(213);

    int minHeaSize = minHeap.size();

    cout << "MaxHeap size: " << minHeaSize << endl;

    f(i, minHeaSize)
    {
        cos(minHeap.top());
        minHeap.pop();
    }
}

int mySet()
{
    // it contains all unique elments
    // it is implemented using BST
    // any element can't be modified
    // unorderset is faster than set
    // set will return elements in a sorted array

    set<int> st;

    st.insert(1); // O(logn)
    st.insert(0);
    st.insert(0);
    st.insert(5);
    st.insert(5);
    st.insert(5);
    st.insert(2);
    st.insert(2);
    st.insert(4);
    st.insert(7);
    st.insert(7);
    st.insert(9);

    for (auto i : st)
        cos(i);

    nl;

    set<int>::iterator it = st.begin();
    it++;

    st.erase(it); // O(logn)

    for (auto i : st)
        cos(i);

    nl;

    cout << "5 is present or not: " << st.count(5) << endl; // it will tell if the element is present or not O(logn)

    set<int>::iterator itr = st.find(5); // O(logn)
    for (auto it = itr; it != st.end(); it++)
        cos(*it);
    nl;
}

int myMap()
{
    map<int, string> m; // sorted )(logn)

    m[1] = "name1";
    m[13] = "name3";
    m[2] = "name2";

    m.insert({5, "name4"});

    cout << "before erase: " << endl;

    for (auto i : m)
    {
        cos(i.first);
        cos(i.second);
        nl;
    }

    m.erase(13);

    cout << "after erase: " << endl;

    for (auto i : m)
    {
        cos(i.first);
        cos(i.second);
        nl;
    }

    cout << "finding 13: " << m.count(13) << endl;

    auto itM = m.find(2);

    for (auto i = itM; i != m.end(); i++)
        cout << (*i).first << " " << (*i).second << endl;
}

int myBinary_search()
{
    vector<int> valgo(6);

    valgo.push_back(2);
    valgo.push_back(5);
    valgo.push_back(23);
    valgo.push_back(122);
    valgo.push_back(162);
    valgo.push_back(343);

    int tobefind = 122;

    cout << "Finding " << tobefind << ": " << binary_search(valgo.begin(), valgo.end(), tobefind) << endl;

    cout << "lower bound: " << lower_bound(valgo.begin(), valgo.end(), 5) - valgo.begin() << endl;
    cout << "upper bound: " << upper_bound(valgo.begin(), valgo.end(), 5) - valgo.begin() << endl;
}

int myReverse()
{
    string myString = "name1";
    reverse(myString.begin(), myString.end());
    con(myString);
}

int myRotate()
{
    vector<int> valgo;
    valgo.push_back(2);
    valgo.push_back(5);
    valgo.push_back(23);
    valgo.push_back(122);
    valgo.push_back(162);
    valgo.push_back(343);

    cout << "before: " << endl;
    f(i, valgo.size()) cos(valgo[i]);

    rotate(valgo.begin(), valgo.begin() + 2, valgo.end());

    nl;

    cout << "after: " << endl;
    f(i, valgo.size()) cos(valgo[i]);
}

int main()
{
    fast;

    // myArray();
    // myVector();
    // myDeque();
    // myList();
    // myStack();
    // myQueue();
    // myPriority_queue();
    // mySet();
    // myMap();
    // myBinary_search();
    // myReverse();
    myRotate();

    return 0;
}
