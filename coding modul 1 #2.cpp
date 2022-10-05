#include <iostream>
using namespace std;

int main() 
{
	std::cout<<" Songgoriti warnet \n";
	const int hrgjm = 4000;
	//cout << "##  Warnet Songgoriti Cyber  ##" << endl;
	
    string nama;
    int harga,hrgakhir,waktu;
    double total;
    
    cout<<" no biling : ";
    cin>>nama;
    
    cout<<" waktu : ";
    cin>>waktu;

     hrgakhir=  hrgjm * waktu;
    cout<<" harga semuanya : "<<hrgakhir<<"rupiah" <<endl;

    return 0;
}