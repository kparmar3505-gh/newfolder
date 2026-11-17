#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    // Create a map with state name as key and population as value
    map<string, long long> statePopulation;

    // Insert state names and their populations
    statePopulation["Maharashtra"] = 126000000;
    statePopulation["Gujarat"] = 72000000;
    statePopulation["Karnataka"] = 68000000;
    statePopulation["Rajasthan"] = 82000000;
    statePopulation["Tamil Nadu"] = 77000000;
    statePopulation["Uttar Pradesh"] = 248000000;
    statePopulation["Madhya Pradesh"] = 85000000;

    string stateName;

    // Ask the user to enter a state name
    cout << "Enter the name of a state: ";
    getline(cin, stateName);

    // Search for the state in the map
    map<string, long long>::iterator it =
        statePopulation.find(stateName);

    // Check whether the state is found
    if (it != statePopulation.end()) {
        cout << "Population of " << stateName
             << " is " << it->second << endl;
    }
    else {
        cout << "State not found in the map." << endl;
    }

    return 0;
}