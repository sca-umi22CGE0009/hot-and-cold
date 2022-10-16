//アドベンチャーゲーム課題

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool y1;

int main() {

    int choice;

    cout << "(恵)\n別にあんたのことなんか好きじゃないんだから\n\n";
    cout << "1~3の選択肢を選ぼう\n";


    do {
        cout << "1.ちくわ大明神\n";
        cout << "2.俺は好きだけどな\n";
        cout << "3.こっちのセリフだ！\n";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            y1 = false; //1~3以外の数字
        }
        else {
            cout << "もう一回選択しよう\n";
            y1 = true; //1~3の数字
        }
    } while (y1);

    srand(static_cast<unsigned int>(time(0)));
    int v1 = rand();

    if (choice == 1) {
        int r1 = (v1 % 50) + 1;
        cout << "好感度: " << r1 << endl;
        cout << "NormalEnd: 友達以上恋人未満\n";
    }
    else if (choice == 2) {
        int r2 = (v1 % 50 + 1) + 50;
        cout << "好感度: " << r2 << endl;
        cout << "TrueEnd: 結ばれた二人\n";
    }
    else {
        int r3 = (v1 % 100 + 1) - 100;
        cout << "好感度: " << r3 << endl;
        cout << "BadEnd: ただの他人\n";
    }
}