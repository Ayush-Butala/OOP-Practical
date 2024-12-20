/*Write a program in C++ to use map associative container. The keys will be the names of
states and the values will be the populations of the states. When the program runs, the
user is prompted to type the name of a state. The program then looks in the map, using
the state name as an index and returns the population of the state.*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    // Create a map to store state names and their populations
    map<string, int> statePopulation;

    // Insert some states and their populations
    statePopulation["Maharashtra"] = 112374333;
    statePopulation["Uttar Pradesh"] = 199812341;
    statePopulation["Goa"] = 1458545;
    statePopulation["Kerala"] = 33406061;
    statePopulation["Assam"] = 31205576;

    string stateName;

    cout << "Enter the name of a state: ";
    getline(cin, stateName);

    // Search for the state in the map
    if (statePopulation.count(stateName))
    {
        // State found, print its population
        cout << "The population of " << stateName << " is " << statePopulation[stateName] << ".\n";
    }
    else
    {
        // State not found
        cout << "State not found in the map.\n";
    }

    return 0;
}