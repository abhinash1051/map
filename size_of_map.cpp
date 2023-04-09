#include<iostream>
#include<map>

using namespace std;
  
int main()
{
    // Take any two maps
    map<int, string> map1, map2;
      
    // Inserting values
    map1.insert({1, "India"});
    map1.insert({2, "Nepal"});
    map1.insert({3, "Sri Lanka"});
    map1.insert({4, "Myanmar"});
      
    // Printing the size
    cout << "map1 size: " << map1.size();
    cout << endl;
    cout << "map2 size: " << map2.size();
    return 0;
}