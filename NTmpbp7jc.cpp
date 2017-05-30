//NTmpbp7jc
#include <iostream>
#include <string>
#include <math.h>
#include <limits.h>

using namespace std;

int eval(int x, int y){
    return pow(x,2) - (3*y) + x;
}

int main(){

int m,n,o,p;

cin >> m;
cin >> n;
cin >> o;
cin >> p;

int max = INT_MIN;
int sol = 0;
string pair;

for (int x = m; x <= n; x++){
    for (int y = o; y <= p; y++){
        sol = eval(x,y);

        if (sol > max){
            max = sol;
            pair = "(" + to_string(x) + "," + to_string(y) + ")\n";
        }
    }
}

cout << pair;
cout << max;
return 0;
}
