/*
Nama Program    :main.cpp (Sorting and Searching)
Nama Anggota    :Sammy Farrel Zebua, Ibnaty Farah Rabbany, Joan Clarissa Halimin
NPM             :140810240016, 140810240022, 140810240060
Tanggal         :22 Oktober 2024
Deskripsi       :Membuat program untuk sorting dan searching string dengan berbagai metode.
*/

#include <iostream>
using namespace std;

typedef int larik[100];

void playGame(bool& playMenu, char input) {
    cout << "Exit? (y/n) : ";
    cin >> input;
    if (toupper(input) == 'Y'){
        playMenu = false;
        cout << "Program finished! :D";
    } else if (toupper(input) == 'N'){
        playMenu = true;
    }
}

void tukarPosisi(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void cetakLarik(larik a, int jumlah){
    for (int i = 0; i < jumlah; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

void inputLarik(larik a, int jumlah){
    for (int i = 0; i < jumlah; i++){
        cin >> a[i];
    }
}

void ascendBubble_1(larik& a, int jumlah){
    for(int i = jumlah-1; i > 0; i--){
        cout << "Proses ke-" << jumlah-i << endl;
        for (int j = 0; j < i; j++){
            if (a[j] > a[j+1]){
                tukarPosisi(a[j],a[j+1]);
                cout << "Menukar " << a[j] << " dan " << a[j+1] << " : ";
                cetakLarik(a, jumlah);
            } else{
                cout << "Data tidak berubah : ";
                cetakLarik(a, jumlah);

            }
        }
        cout << endl;
    }
    cout << "Data hasil pengurutan : ";
    cetakLarik(a, jumlah);
    cout << endl;
}

void descendBubble_1(larik& a, int jumlah){
    for(int i = jumlah-1; i > 0; i--){
        cout << "Proses ke-" << jumlah-i << endl;
        for (int j = 0; j < i; j++){
            if (a[j] < a[j+1]){
                tukarPosisi(a[j],a[j+1]);
                cout << "Menukar " << a[j] << " dan " << a[j+1] << " : ";
                cetakLarik(a, jumlah);
            } else{
                cout << "Data tidak berubah : ";
                cetakLarik(a, jumlah);
            }
        }
        cout << endl;
    }
    cout << "Data hasil pengurutan : ";
    cetakLarik(a, jumlah);
    cout << endl;
}

void ascendBubble_2(larik& a, int jumlah){
    for(int i = 0; i < jumlah; i++){
        cout << "Proses ke-" << i+1 << endl;
        for (int j = jumlah-2; j > 0; j--){
            if (a[j] > a[j+1]){
                tukarPosisi(a[j],a[j+1]);
                cout << "Menukar " << a[j] << " dan " << a[j+1] << " : ";
                cetakLarik(a, jumlah);
            } else{
                cout << "Data tidak berubah : ";
                cetakLarik(a, jumlah);

            }
        }
        cout << endl;
    }
    cout << "Data hasil pengurutan : ";
    cetakLarik(a, jumlah);
    cout << endl;
}

void descendBubble_2(larik& a, int jumlah){
    for(int i = 0; i < jumlah; i++){
        cout << "Proses ke-" << i+1 << endl;
        for (int j = jumlah-2; j > 0; j--){
            if (a[j] < a[j+1]){
                tukarPosisi(a[j],a[j+1]);
                cout << "Menukar " << a[j] << " dan " << a[j+1] << " : ";
                cetakLarik(a, jumlah);
            } else{
                cout << "Data tidak berubah : ";
                cetakLarik(a, jumlah);

            }
        }
        cout << endl;
    }
    cout << "Data hasil pengurutan : ";
    cetakLarik(a, jumlah);
    cout << endl;
}

void ascendBubble_3(larik& a, int jumlah){
    for(int i = jumlah-1; i > 0; i--){
        cout << "Proses ke-" << jumlah-i << endl;
        for (int j = 0; j < i; j++){
            if (a[i] < a[j]){
                tukarPosisi(a[i],a[j]);
                cout << "Menukar " << a[i] << " dan " << a[j] << " : ";
                cetakLarik(a, jumlah);
            } else{
                cout << "Data tidak berubah : ";
                cetakLarik(a, jumlah);

            }
        }
        cout << endl;
    }
    cout << "Data hasil pengurutan : ";
    cetakLarik(a, jumlah);
    cout << endl;
}

void descendBubble_3(larik& a, int jumlah){
    for(int i = jumlah-1; i > 0; i--){
        cout << "Proses ke-" << jumlah-i << endl;
        for (int j = 0; j < i; j++){
            if (a[i] > a[j]){
                tukarPosisi(a[i],a[j]);
                cout << "Menukar " << a[i] << " dan " << a[j] << " : ";
                cetakLarik(a, jumlah);
            } else{
                cout << "Data tidak berubah : ";
                cetakLarik(a, jumlah);

            }
        }
        cout << endl;
    }
    cout << "Data hasil pengurutan : ";
    cetakLarik(a, jumlah);
    cout << endl;
}

void ascendSelect(larik& a, int jumlah){
    int posisi;
    for (int i = 0; i < jumlah-1; i++){
        cout << "Proses ke-" << i+1 << endl;
        posisi = i;
        for (int j = i+1; j < jumlah; j++){
            if (a[posisi] > a[j]){
                posisi = j;
            }
        }
        if (a[i] == a[posisi]){
            cout << "Data tidak berubah : ";
            cetakLarik(a, jumlah);
        } else {
            tukarPosisi(a[i], a[posisi]);
            cout << "Menukar " << a[i] << " dan " << a[posisi] << " : ";
            cetakLarik(a, jumlah);
            cout << endl;
        }
    }
    cout << "Data hasil pengurutan : ";
    cetakLarik(a, jumlah);
    cout << endl;
}

void descendSelect(larik& a, int jumlah){
    int posisi;
    for (int i = 0; i < jumlah-1; i++){
        cout << "Proses ke-" << i+1 << endl;
        posisi = i;
        for (int j = i+1; j < jumlah; j++){
            if (a[posisi] < a[j]){
                posisi = j;
            }
        }
        if (a[i] == a[posisi]){
            cout << "Data tidak berubah : ";
            cetakLarik(a, jumlah);
        } else {
            tukarPosisi(a[i], a[posisi]);
            cout << "Menukar " << a[i] << " dan " << a[posisi] << " : ";
            cetakLarik(a, jumlah);
            cout << endl;
        }
    }
    cout << "Data hasil pengurutan : ";
    cetakLarik(a, jumlah);
    cout << endl;
}

void ascendInsert(larik&a, int jumlah){
    for (int i = 1; i < jumlah; i++){
        cout << "Proses ke-" << i << endl;
        for (int j = i; j >= 1; j--){
            if(a[j] < a[j-1]){
                tukarPosisi(a[j], a[j-1]);
                cout << "Menukar " << a[j] << " dan " << a[j-1] << " : ";
                cetakLarik(a, jumlah);
            }
            else{
                cout << "Data tidak berubah : ";
                cetakLarik(a, jumlah);
                break;}
        }
        cout << endl;
    }
    cout << "Data hasil pengurutan : ";
    cetakLarik(a, jumlah);
    cout << endl;
}

void descendInsert(larik&a, int jumlah){
    for (int i = 1; i < jumlah; i++){
        cout << "Proses ke-" << i+1 << endl;
        for (int j = i; j >= 1; j--){
            if(a[j] > a[j-1]){
                tukarPosisi(a[j], a[j-1]);
                cout << "Menukar " << a[j] << " dan " << a[j-1] << " : ";
                cetakLarik(a, jumlah);
            }
            else{
                cout << "Data tidak berubah : ";
                cetakLarik(a, jumlah);
                break;}
        }
        cout << endl;
    }
    cout << "Data hasil pengurutan : ";
    cetakLarik(a, jumlah);
    cout << endl;
}

void ascendShell(larik& a, int jumlah){
    int j;
    int counter = 1;
    for (int gap = jumlah/2; gap > 0; gap /=2){
        cout << "Proses ke-" << counter << endl;
        for (int i = gap; i < jumlah; i++){
            int temp = a[i];
            for (j = i; j >= gap && temp < a[j - gap]; j -= gap){
                a[j] = a[j-gap];
            }
            if (a[j] == temp){
                cout << "Data tidak berubah : ";
                cetakLarik(a, jumlah);
            } else {
                cout << "Menukar " << a[j] << " dan " << temp << " : ";
                a[j] = temp;
                cetakLarik(a, jumlah);
            }
        }
        counter +=1;
        cout << endl;
    }
    cout << "Data hasil pengurutan : ";
    cetakLarik(a, jumlah);
    cout << endl;
}

void descendShell(larik& a, int jumlah){
    int j;
    int counter = 1;
    for (int gap = jumlah/2; gap > 0; gap /=2){
        cout << "Proses ke-" << counter << endl;
        for (int i = gap; i < jumlah; i++){
            int temp = a[i];
            for (j = i; j >= gap && temp > a[j - gap]; j -= gap){
                a[j] = a[j-gap];
            }
            if (a[j] == temp){
                cout << "Data tidak berubah : ";
                cetakLarik(a, jumlah);
            } else {
                cout << "Menukar " << a[j] << " dan " << temp << " : ";
                a[j] = temp;
                cetakLarik(a, jumlah);
            }
        }
        counter +=1;
        cout << endl;
    }
    cout << "Data hasil pengurutan : ";
    cetakLarik(a, jumlah);
    cout << endl;
}

void menuUtama(int& pilihanSorting, int& pilihMetode, larik& data, int &jumlah, bool playMenu, char start){
    while(playMenu) {
        cout << "+---------------------------------------+\n";
        cout << "|                 MENU                  |\n";
        cout << "+---------------------------------------+\n";
        cout << "| 1. Bubble sort tipe-1                 |\n";
        cout << "| 2. Bubble sort tipe-2                 |\n";
        cout << "| 3. Bubble sort tipe-3                 |\n";
        cout << "| 4. Selection sort                     |\n";
        cout << "| 5. Insertion sort                     |\n";
        cout << "| 6. Shell sort                         |\n";
        cout << "+---------------------------------------+\n";
        cout << "Masukkan pilihan anda (1, 2, 3, 4, 5, 6): "; cin >> pilihanSorting;
        cout << "+--------------+\n";
        cout << "| Pilih metode |\n";
        cout << "+--------------+\n";
        cout << "|1. Ascending  |\n";
        cout << "|2. Descending |\n";
        cout << "+--------------+\n";
        cout << "Pilihan (1 / 2): ";cin >> pilihMetode;
        cout << "Input banyak data : "; cin >> jumlah;
        cout << "Input data : " << endl;
        inputLarik(data, jumlah);
        switch (pilihanSorting)
        {
        case 1:
            if (pilihMetode == 1){
                ascendBubble_1(data, jumlah);
            } else if (pilihMetode == 2){
                descendBubble_1(data, jumlah);

            } else {cout << "Metode tidak tersedia"; break;}
            playGame(playMenu, start);
            
            break;
        case 2:
            if (pilihMetode == 1){
                ascendBubble_2(data, jumlah);
            } else if (pilihMetode == 2){
                descendBubble_2(data, jumlah);

            } else {cout << "Metode tidak tersedia"; break;}
            playGame(playMenu, start);
            
            break;
        case 3:
            if (pilihMetode == 1){
                ascendBubble_3(data, jumlah);
            } else if (pilihMetode == 2){
                descendBubble_3(data, jumlah);

            } else {cout << "Metode tidak tersedia"; break;}
            playGame(playMenu, start);
            
            break;
        case 4:
            if (pilihMetode == 1){
                ascendSelect(data, jumlah);
            } else if (pilihMetode == 2){
                descendSelect(data, jumlah);

            } else {cout << "Metode tidak tersedia"; break;}
            playGame(playMenu, start);
            
            break;
        case 5:
            if (pilihMetode == 1){
                ascendInsert(data, jumlah);
            } else if (pilihMetode == 2){
                descendInsert(data, jumlah);

            } else {cout << "Metode tidak tersedia"; break;}
            playGame(playMenu, start);
            
            break;
        case 6:
            if (pilihMetode == 1){
                ascendShell(data, jumlah);
            } else if (pilihMetode == 2){
                descendShell(data, jumlah);

            } else {cout << "Metode tidak tersedia"; break;}
            playGame(playMenu, start);
            
            break;
        default:
            playGame(playMenu, start);
            break;
        }
    }  
}

int main(){
    larik data;
    int banyakData, pilihanSorting, pilihanMetode;
    bool play = true;
    char start;
    menuUtama(pilihanSorting, pilihanMetode, data, banyakData, play, start);
}