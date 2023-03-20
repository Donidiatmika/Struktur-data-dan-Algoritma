#include<iostream>
using namespace std;

int main(){
   int input,awal,akhir,mid;
   int a[10]={2,5,6,8,10,11,13,15,16,19}; //disini saya misalkan data array nya sudah ada.

   cout<<"masukan angka = ";
   cin>>input;

 awal=0;
 akhir=10-1; // sesuaikan dengan jumlah array, dengan rumus (jumlah array-1).
 mid=(awal+akhir)/2;

 //berikut ini adalah fungsi binary searchnya.

 while(awal<=akhir){
    if(a[mid]<input){
        awal=mid+1;
    }else if(a[mid]==input){
     cout<<"ada,"<<input<<" berada pada indeks ke "<<mid;
     break;
    }else{
      akhir=mid-1;
    }
    mid=(awal+akhir)/2;
    }
   if(awal>akhir){
   cout<<"nilai "<<input<<" tidak ditemukan pada array"<<endl;

   }

return 0;
}
