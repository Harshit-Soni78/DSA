#include <bits/stdc++.h>

using namespace std;

// pair is a container and is part of utility library, can act as a data-type stores 2 elements as a pair.
void explainPairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<char, pair<int, int>> p2 = {'a', {1, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 3}, {4, 5}, {6, 8}, {7, 2}};
    cout << arr[2].second << endl;
}

// these are dynamic arrays
void explainVectors()
{
    // Initializing vectors
    vector<int> v;
    v.push_back(1);
    v.emplace_back(3);

    vector<pair<int, int>> vp;
    vp.push_back({2, 4});
    vp.emplace_back(8, 6);

    vector<int> v2(5, 20);          // v2 = {20,20,20,20,20}
    vector<pair<int, int>> vp2(vp); // copy vp into vp2

    // Iterators
    vector<int>::iterator it = v.begin(); // this will save the address of 'v.begin' in 'it'
    it++; // shift address to the next address
    cout << *it << endl; // prints 2nd element of vector 'v' i.e. 3

    // Print vectors
    for (auto it2 : v2) { // auto defines automatically the datatype of 'it2' and ':' means 'it2 on v'
        // it means it iterates on every it2 value and saves it in 'it2'
        cout << it2 << endl;
    }

    // Delete vector value
    v.erase(v.begin()); // erase the value at v.begin()

    // Make sure there are at least 4 elements before erasing the range
    if (v.size() >= 4) {
        v.erase(v.begin(), v.begin() + 4); // erase the value from v.begin() to v.begin() + 3 value
        // it means it includes v.begin() but not v.begin() + 4
    }

    // Delete entire vector
    v.erase(v.begin(), v.end()); // v.begin gives the location of first value and v.end() gives the location just after the last element

    // Insert values
    v.insert(v.begin(), 300);

    v.insert(v.begin() + 1, 2, 100); // it means v = {300, 100, 100} // 2 times element-100 at v.begin() + 1 location

    // Get size of vector
    cout << "Size of vector v: " << v.size() << endl;

    // Pop and delete last element of v
    if (!v.empty()) {
        v.pop_back();
    }

    // Swap v and v2
    v.swap(v2);

    // Clear entire vector
    v.clear(); // erase entire vector

    // Check if vector is empty
    if (v.empty()) {
        cout << "Vector v is empty" << endl;
    } else {
        cout << "Vector v is not empty" << endl;
    }
}

// list is exactly same as vectors but it gives front operation as well.
void explainList(){
    list<int> ls;
    ls.push_back(5);
    ls.emplace_back(10);
    ls.push_front(20);
    ls.emplace_front(80);

    // begin, end, rbegin, rend, clear, insert, size, swap, etc. all are same as vector
}

// deque is double ended queue
void explainDeque(){
    deque<int> dq;
    // all functions exactly same as list and vectors
}

// Stack -> LIFO (last in first out)
void explainStack(){
    stack<int> st;
    // push, emplace, pop, top, size, empty, swap... same as above
}

// Queue -> FIFO (first in first out)
void explainQueue(){
    queue<int> q;
    // push, emplace, back, front, pop, size, empty, swap... same as above
}

// Priority Queue (Tree like data structure is maintained internally)
void explainPriorityQueue() {
    // Max-Heap (default)
    priority_queue<int> maxHeap;
    
    // Min-Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Adding elements to the Max-Heap
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);

    // Adding elements to the Min-Heap
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);

    // Displaying the top element of the Max-Heap
    cout << "Max-Heap top element: " << maxHeap.top() << endl; // 30

    // Displaying the top element of the Min-Heap
    cout << "Min-Heap top element: " << minHeap.top() << endl; // 10

    // Time complexity of Push -> O(log(n))
    // Time complexity of Pop -> O(log(n))
    // Time complexity of Top -> O(1)

    // Removing the top element from the Max-Heap
    maxHeap.pop();

    // Removing the top element from the Min-Heap
    minHeap.pop();

    // Displaying the top elements after pop
    cout << "Max-Heap top element after pop: " << maxHeap.top() << endl; // 20
    cout << "Min-Heap top element after pop: " << minHeap.top() << endl; // 20
}

// Set -> Sorted-Ordered-Unique values
void explainSet(){
    set<int> st;
    // tree like structure is maintained
    // insert, emplace, find, erase, size, swap, etc. all are same as above
    // Time complexity for push, pop, erase, etc. -> O(log(n))
}

// Multiset -> Sorted, can have multiple occurense of an element
void explainMultiset(){
    multiset<int> ms;
    // functions are same as above
}

// unordered set -> as name suggest
void explainUnorderedSet() {
    unordered_set<int> uset;
    uset.insert(10);
    uset.insert(20);
    uset.insert(10); // Duplicate elements will not be inserted
    uset.insert(15);

    cout << "Unordered Set elements: ";
    for (const auto& elem : uset) {
        cout << elem << " ";
    }
    cout << endl;

    if (uset.find(20) != uset.end()) {
        cout << "Element 20 found in the unordered set" << endl;
    } else {
        cout << "Element 20 not found in the unordered set" << endl;
    }
}

// map -> key value pairs, unique keys, keys in sorted ordered
void explainMap() {
    map<int, string> m;
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";

    cout << "Map elements (Key-Value pairs):" << endl;
    for (const auto& pair : m) {
        cout << pair.first << " : " << pair.second << endl;
    }

    if (m.find(2) != m.end()) {
        cout << "Key 2 found with value: " << m[2] << endl;
    } else {
        cout << "Key 2 not found" << endl;
    }
}

// multimap -> key value pairs, can have duplicate keys, keys in sorted ordered
void explainMultimap() {
    multimap<int, string> mm;
    mm.insert({1, "one"});
    mm.insert({2, "two"});
    mm.insert({3, "three"});
    mm.insert({2, "TWO"}); // Duplicate keys are allowed

    cout << "Multimap elements (Key-Value pairs):" << endl;
    for (const auto& pair : mm) {
        cout << pair.first << " : " << pair.second << endl;
    }

    auto range = mm.equal_range(2);
    cout << "Elements with key 2:" << endl;
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << " : " << it->second << endl;
    }
}

// unordered map -> unordered maps as name suggest
void explainUnorderedMap() {
    unordered_map<int, string> umap;
    umap[1] = "one";
    umap[2] = "two";
    umap[3] = "three";

    cout << "Unordered Map elements (Key-Value pairs):" << endl;
    for (const auto& pair : umap) {
        cout << pair.first << " : " << pair.second << endl;
    }

    if (umap.find(2) != umap.end()) {
        cout << "Key 2 found with value: " << umap[2] << endl;
    } else {
        cout << "Key 2 not found" << endl;
    }
}


// ********************************************

// Some extra things ..........

// sort function is used to sort things according to need
// comparitor is an additional boolien function that helps us to define some conditions according to question
bool comparator(pair<int,int> p1, pair<int,int> p2){
    // sort it acc. to second element
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;

    // // if second element is same, then 
    // if (p1.second == p2.second){
    //     // sort it acc. to first element but in decending.
    //     if (p1.first < p2.first) return true;
    //     if (p1.first >= p2.first) return false;
    // }
    
    // if second element is same, then 
        // sort it acc. to first element but in decending.
    return p1.first > p2.first;
}
void explainSort(){
    int n=10;
    int a[n] = {4,8,5,1,2,6,4,5,8,6,3,2};
    sort(a, a+n);
    // sort(v.begin(),v.end());
    
    sort(a,a+n, greater());
    // greater() is a built in comparitor for decending order sorting
    // comparitor is an additional boolien function that helps us to define some conditions according to question
    // we can make our own comparitor to sort according to conditions
    // for example,
    pair<int,int> p[]={{1,2},{2,1},{4,1}};
    // sort it acc. to second element
    // if second element is same, then
    // sort it acc. to first element but in decending.
    
    sort(p,p+3,comparator);
}



// __builtin_popcount(n) -> gives the number of set bits in n
void explainBuiltInPopcount(){
    int n = 7;
    // Printing the number of set bits in n
    cout << __builtin_popcount(n);

    long long num = 81647567132;
    // Printing the number of set bits in num
    cout << __builtin_popcountll(num);
}

// next_permutation is
void explain_next_permutation()
{
    string s = "123524";

    sort(s.begin(), s.end());

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
}

int main(int argc, char const *argv[])
{
    return 0;
}