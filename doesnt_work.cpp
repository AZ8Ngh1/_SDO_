#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{


    string a; string b; cin >> a >> b;
    
    string l_three_a = a.substr(a.size() - 3);
    string l_three_b = a.substr(a.size() - 3);

    
    int l_three_1 = stoi(l_three_b, 0);
    int l_three_2 = stoi(l_three_a, 0);
    
    int sum = l_three_1 + l_three_2;
    cout << sum << endl;
    
    return 0;
    
}



