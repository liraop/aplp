//NEvQySfxo

#include <iostream>
#include <string>

using namespace std;

int main() {

int ints[4];
int input;
string word;
string words[4];
string pw[4];

int j = 0;
int k = 0;
for (int i=0; i < 8; i++){
        if (i <= 3){
            cin >> ints[j];
            j++;
        } else{
            cin >> word;
            words[k] = word;
            k++;
        }
}

for (int i = 0; i < 4; i++){
    pw[i] = words[i][ints[i]];
}

for ( int i = 0; i < 4; i++ ) {
        cout << pw[i];
    }

return 0;
}
