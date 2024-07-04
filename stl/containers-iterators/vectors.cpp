#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Uses singly linked list
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); // faster than push_back

    vector<pair<int, int>> vp;

    vp.push_back({1, 2});
    vp.emplace_back(1, 2);

    vector<int> v1(5, 100); // 5 instances of 100
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin(); // v.end(), v.rend(), v.rbegin

    // So *(it) gives values

    v.at(0); // gives element at 0, same as v[0]
    v.back(); //Gives last element

    // Instead of writing vector<int>::iterator you can use auto
    auto it2 = vp.begin();

    for (auto it2 = v.begin(); it2 != v.end(); it2++)
    {
        cout << *(it);
    }

    for (auto it2 : v)
    {
        cout << *(it);
    }
    vector<int> copy(2, 50);

    v.erase(v.begin()+1);
    v.erase(v.begin()+1, v.begin()+3); // removing 2nd and 3rd elements, not 4th which as at [3]

    v.insert(v.begin() + 1, 300); // inserting 300 at element 2 so nothing is replaced
    v.insert(v.begin(), 2, 400); // at position1 2 times (not index 1)(rather index 0)

     
    v1.insert(v1.begin(), copy.begin(), copy.end()); //

    v.size();
    v.pop_back();
    v1.swap(v2);

    v.clear();

    v.empty();

    // constructors used in the same order as described above:
    vector<int> first;                                // empty vector of ints
    vector<int> second (4,100);                       // four ints with value 100
    vector<int> third (second.begin(),second.end());  // iterating through second
    vector<int> fourth (third);                       // a copy of third

    // the iterator constructor can also be used to construct from arrays:
    int myints[] = {16,2,77,29};
    vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

    cout << "The contents of fifth are:";
    for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';


    return 0;
    // uses linked list
}