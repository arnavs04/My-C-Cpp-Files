#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Map

    // like dictionary from python
    // unique keys like a function
    map<int, int>  mp;
    mp.insert({1,2}); // all map functions take O(logn)
    mp[1] = 2;

    auto it = mp.begin(); // organised within

    for (auto it: mp)
    {
        cout << it.first<< " " << it.second;
    }

    auto it = mp.find(3) // gives iterator to address where key is 3
    cout << *(it).second;
    // if 3 is not then points to address after the map

    // my_map[my_int] can also add element if not present already instead my_map.at(my_int)

    // Multimap
    // everything same as map, except it can store multiple keys
    // mp[key] cannot be used here

    // Unordered map
    // same difference as set and unordered set
    // better time complexity as storing and fetching at best and avg is O(1), worst still O(n)
}
