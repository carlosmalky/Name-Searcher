#include "tree.h"
// This project contains code that belongs to John Gauch

int main()
{
    // Create new BinaryTree Object called nameFine
    BinaryTree nameFind;

    // Declare name file path
    string filename = "female.txt";

    // Decalre new ifstream object to open text file
    ifstream din;

    // Open text file containing names and data
    din.open(filename.c_str());
    if (din.fail())
    {
        cout << "Error: Could not open " << filename << endl;
    }

    // Declare variables for Name, Count, Percentage and Rank from text file
    string name;
    int count;
    float percentage;
    int rank;
    while (din >> name >> count >> percentage >> rank)
    {
        nameFind.Insert(name, count, percentage, rank);
    }

    // Declare string variable for user input
    string userName;

    // Quit program if user types quit
    while (userName != "QUIT")
    {
        // Ask user for name to search
        cout << "Please enter a name to search: " << endl;
        cout << "Else, if you want to quit, type QUIT " << endl;
        cin >> userName;
        if (nameFind.Search(userName) == true)
            cout << userName << " found!" << endl;
        else
            cout << "Name not found!" << endl;
        cout << endl
             << endl;
    }

    cout << "Thank you for using Carlos' fancy name searcher!" << endl;

    return 0;
}