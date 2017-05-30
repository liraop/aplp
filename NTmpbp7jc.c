//NTmpbp7jc
#include <iostream>

using namespace std;

int eval(int x, int y){
    return (x*x) - (3*y) + x;
}

int main(){

int m,n,o,p;

cin >> m;
cin >> n;
cin >> o;
cin >> p;

int max = 0;
int result = 0;

for (int x = m; m <= n; m++){
    for (int y = o; o <= p; o++){
        result = eval(x,y);

        cout << result;

        if (result > max){
            max = result;
        }
    }
}

cout << max;
return 0;
}
