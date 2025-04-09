
using namespace std;

int main() {
    int n;
    cout << "Inserisci il numero totale di elementi: ";
    cin >> n;

    vector<int> num(n), pari, dispari;
    srand(time(0));

    for (int i = 0; i < n; i) {
        num[i] = rand() % 100;
        cout << "Numero generato: " << num[i] << endl;


        if (num[i] % 2 == 0) {
            pari.push_back(num[i]);
        } else {
            dispari.push_back(num[i]);
        }
    }

    cout << "\nNumeri pari:\n";
    for (int i = 0; i < pari.size(); i) {
        cout << pari[i] << " ";
    }
    cout << endl;

    cout << "\nNumeri dispari:\n";
    for (int i = 0; i < dispari.size(); i) {
        cout << dispari[i] << " ";
    }
    cout << endl;

    return 0;
}

