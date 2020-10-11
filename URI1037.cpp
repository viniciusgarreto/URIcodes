#include <iostream>
 
using namespace std;
 
int main() {

    float interval;
    
    cin >> interval;

    if(interval < 0 || interval > 100) {
        cout << "Fora de intervalo" << endl;
    } else if (interval <= 25 && interval >= 0){
        cout << "Intervalo [0,25]" << endl;
    } else {
        for(int i=25; i <= 75; ) {
            if(interval > i && interval <= i + 25) {
                cout << "Intervalo ("<< i <<","<< i+25 << "]" << endl;
            }
            i = i + 25;
        }
    }
 
    return 0;
}