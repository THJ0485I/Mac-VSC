// unordered_map (aka Python Dictionary)
// It stores data in KEY_VALUES pair

#include <unordered_map>
#include <iostream>
using namespace std;

int main()
{
    // Declare an unordered map
    unordered_map<string, int> info;

    // Insert elements (key-value pair)
    info["Zac"] = 18;
    
    // If a key doesnt already exist, add it with its value
    // if a key already exist, edit its value
    info["Zac"] = 15;
    info["Trevan"] = 20;
    info["Menaja"] = 13;
    info["Timothy"] = 50;

    // Access a value by its key
    cout << info["Timothy"] << endl; // print 50


    //Iterate the map to print each key-value pair seperately
    for(const auto& pair : info)
    {
        //pair.first-key
        //pair.second-value
        cout << "Name: " << pair.first << " , " << "Age: "<< pair.second << endl;
    }



    return 0;
}
