#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout;
    ifstream fin;
    string data;

    fout.open("sample.txt", ios::out);

    if (!fout.is_open())
    {
        cout << "File could not be opened for writing.";
        return 0;
    }

    cout << "Enter information to write into the file: ";
    getline(cin, data);

    fout << data;
    fout.close();

    fin.open("sample.txt", ios::in);

    if (!fin.is_open())
    {
        cout << "File could not be opened for reading.";
        return 0;
    }

    cout << "\nInformation read from the file:\n";

    while (getline(fin, data))
    {
        cout << data << endl;
    }

    fin.close();

    return 0;
}