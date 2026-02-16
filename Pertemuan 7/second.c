// Fungsi penjumlahan
int tambah(int a, int b){
    return a+b;
}

// Fungsi pengurangan
int kurang(int a, int b){
    return a-b;
}

// Fungsi perkalian
int perkalian(int a, int b){
    return a*b;
}

// Fungsi pembagian
float pembagian(int a, int b){
    if (b==0){
        printf("EROR");
        return 0;       
    }
    return (float)a/b;
}