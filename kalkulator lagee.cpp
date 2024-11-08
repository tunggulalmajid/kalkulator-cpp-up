#include <iostream>
using namespace std ;

void clear(){
    system("cls");
}

void enter (){
    char enter;
    cout<< "Tekan [s] kemudian [ENTER] untuk melanjutkan >> ";
    cin >> enter;     
}
void garis (){
    cout << "\n====================================================================\n";
}
void cover (){
    garis();
    cout << "                       KALKULATOR SEDERHANA";
    garis ();
}

void menu (){
    cout<<"MENU :"<<"\n"<<"                          1. PENAMBAHAN\n                          2. PENGURANGAN\n                          3. PERKALIAN\n                          4. PEMBAGIAN\n                          5. EXIT"<< endl;
}   

int tambah (int a, int b){
    int hasil = a + b ;
    return hasil;
}
int kurang (int a, int b){
    int hasil = a - b ;
    return hasil ;
}
int kali (int a, int b){
    int hasil = a * b ;
    return hasil ;
}
int bagi (int a, int b){
    double hasil = a / b ;
    return hasil ;
}
void exit (){
    clear();
    cover ();
    cout << "\n\n\t\tTERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI\n\n\n";
    garis();
}

int main (){
    string pilih;
    int a , b ;
    clear();
    cover();
    menu();
    garis();
    cout << "\nmasukkan pilihan >>";
    cin >> pilih;
    if (pilih == "1"){
        clear();
        cover();
        cout << "masukkan nilai 1 >>";
        cin >> a ;
        cout << "masukkan nilai 2 >>";
        cin >> b ;
        garis();
        cout << "hasil dari "<< a << " + "<< b << " = "<< tambah(a,b)<< endl ;
        enter();
        main();
    }
    else if (pilih == "2"){
        clear();
        cover();
        cout << "masukkan nilai 1 >>";
        cin >> a ;
        cout << "masukkan nilai 2 >>";
        cin >> b ;
        garis();
        cout << "hasil dari "<< a << " - "<< b << " = "<< kurang(a,b)<< endl ;
        enter();
        main();
    }
    else if (pilih == "3"){
        clear();
        cover();
        cout << "masukkan nilai 1 >>";
        cin >> a ;
        cout << "masukkan nilai 2 >>";
        cin >> b ;
        garis ();
        cout << "hasil dari "<< a << " * "<< b << " = "<< kali(a,b)<< endl ;
        enter ();
        main();   
    }
    else if (pilih == "4"){
        clear();
        cover();
        cout << "masukkan nilai 1 >>";
        cin >> a ;
        cout << "masukkan nilai 2 >>";
        cin >> b ;
        garis();
        cout << "hasil dari "<< a << " / "<< b << " = "<< bagi(a,b)<< endl ;
        enter();
        main() ;   
    }
    else if (pilih == "5"){
        exit();
    }
    else {
        cout << "\nOpsi yang anda pilih tidak tersedia";
        enter();
        main();
    }
}   


