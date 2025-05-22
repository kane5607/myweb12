#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "Content-type: text/plain\n\n";

    ifstream file("/tmp/trafficlight_state.txt");
    string state = "unknown";
    if (file.is_open()) {
        getline(file, state);
        file.close();
    }

    cout << state;
    return 0;
}