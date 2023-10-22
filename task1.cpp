#include <iostream>

using namespace std;
void printDiamond(int rowSize);

int main()
{
    int rowSize;
    cout << "Enter desired number of rows: ";
    cin >> rowSize;
    printDiamond(rowSize);
    return 0;
}

void printDiamond(int rowSize)
{

    for (int rows = rowSize; rows >= 1; rows--)
    {

        for (int col = rows; col >= 1; col--)
        {

            cout << "*";
        }

        rowSize--;
        cout << endl;
    }
}
