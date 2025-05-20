#include <iostream>
#include <conio.h>
using namespace std;

const int MAX = 50;
int arr[MAX];
int n = 0;

// cek bilangan prima
bool isPrima(int num){
  if(num < 2) return false;
  for(int i = 2; i * i <= num; ++i)
    if(num % i == 0) return false;
  return true;
}

//isi array dengan bilangan prima (1-50)
void isibilprima(){
  n = 0;
  for(int i = 2; i <= 50; i++){
    if(isPrima(i)){
      arr[n++] = i;
    }
  }
}

// insertion sort desc
void insertdesc(){
  for(int i = 1; i < n; i++){
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] < temp){
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
}

void dMenu(){
system("cls");
cout<<"Aplikasi Insertion Sort"<<"\n";       
cout<<"1. Memasukkan Data"<<"\n";            
cout<<"2. Menampilkan data"<<"\n";            
cout<<"3. Sorting"<<"\n";           
cout<<"4. Sepatah Kata"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}

void datainput(){
  isibilprima();
  system("cls");
  cout <<"Data bilangan prima otomatis dimasukkan";
  getch();
}

void datatampil(){
  system("cls");
  if (n == 0){
    cout <<"Data tidak ada!";
  }else{
    cout <<"Data bilangan prima sebelum disorting:\n";
    for(int i = 0; i < n; i++){
      cout << arr[i] << " ";
    }
  }
  getch();
}

void datasorting(){
  system("cls");
  if(n == 0){
    cout <<"Data tidak ada!";
  }else{
    insertdesc();
    cout <<"Data bilangan prima setelah disorting:\n";
    for(int i = 0; i < n; i++){
      cout << arr[i] << " ";
    }
  }
  getch();
}

void sepatahKata(){
  system("cls");
  cout <<"Do not go gently into that good night";
  getch();
}

int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    datainput();
    break;
   case '2':
   datatampil(); 
    break;  
   case '3':
    datasorting();
    break;  
   case '4':
    sepatahKata();
    break;  
  case '5':
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}