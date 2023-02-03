#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int trout, pike, pickerel, total;
    cin >> trout >> pike >> pickerel >> total;
    int t = total / trout;
    int n = 0;
    for (int i = 0; i <= t; i++){
        if (i > 0) {
            cout << i << " Brown Trout, 0 Northern Pike, 0 Yellow Pickerel" << endl;
            n++;
        }
        int p = (total - i * trout) / pike;
        for (int j = 0; j <= p; j++){
            if (j > 0){
                cout << i << " Brown Trout, " << j << " Northern Pike, 0 Yellow Pickerel" << endl;
                n++;
            }
            int pl = (total - i * trout - j * pike) / pickerel;
            for (int k = 0; k <= pl; k++){
                if (k > 0) {
                    cout << i << " Brown Trout, " << j << " Northern Pike, " << k << " Yellow Pickerel" << endl; 
                    n++;
                }
            }
        }
    }
    cout << "Number of ways to catch fish: " << n << endl;
}
