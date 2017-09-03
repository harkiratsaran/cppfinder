#include <iostream>

#include <string>

#include <fstream>

#include<iomanip>

#include <cstdlib>

using namespace std;

void names(string name);

void byrank(int r1, int r2);

string name_search;

int main()

{
    
    string name;
    
    int choice;
    
    int r1;
    
    int r2;
    
    cout << "This program helps to find the rank of a name\n";
    
    cout << "or find a range of names of a given rank.\n";
    
    cout << "Press 1 to search by name or press 2 to search by rank: ";
    
    cin >> choice;
    
    if (choice == 1)
        
    {
        
        cout << "Search the rank of a name from a list\n";
        
        cout << "Enter the name (only capital letters) you would like to search for: ";
        
        cin >> name;
        
        names(name);
        
    }
    
    if (choice == 2)
        
    {
        
        cout << "Enter the starting rank: ";
        
        cin >> r1;
        
        cout << "Enter the end rank: ";
        
        cin >> r2;
        
        byrank(r1, r2);
        
      
        
    }
    
   
    system("pause");
    
    return 0;
    
}

void names(string names)

{
    
    int rank;
    
    string nam;
    
    ifstream infile;
    
  
    
    double percentage, AP;
    
    infile.open("babynames.txt");
    
    if (infile.fail())
        
    {
        
        cout << "ERROR! Input file opening failed!";
        
        system("pause");
        
        exit(1);
        
    }
    
   
    while (!infile.eof())
        
    {
        
        infile >> nam >> percentage >> AP >> rank;
        
      
        
        if (nam == names)
            
        {
            
          
            
            cout << "The rank is: " << rank << endl;
            
        }
        
    }
    
}

void byrank(int r1, int r2)

{
    
    int rank;
    
    string nam;
    
    ifstream infile;
    
  
    
    double percentage, AP;
    
    infile.open("babynames.txt");
    
    if (infile.fail())
        
    {
        
        cout << "ERROR! Input file opening failed.";
        
        system("pause");
        
        exit(1);
        
    }
    

    
    while (!infile.eof())
        
    {
        
        infile >> nam >> percentage >> AP >> rank;
        
        if (rank >= r1 && rank <= r2)
            
        {
            
            cout << nam << endl;
            
        }
        
    }
    
}
