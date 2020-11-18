#include <sstream>
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    istringstream input1("bogdan den mon vitalik nesty");
    vector <string> penis;
    string s;
    while (input1 >> s)
        penis.push_back(s);

    while (penis.size() != 0) {
        int a = rand() % penis.size();
        cout << penis[a] << endl;
        penis.erase(penis.begin() + a);
    }
    return 0;
}