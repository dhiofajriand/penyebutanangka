#include <iostream>
#include <string.h>
using namespace std;

string satu(char input[], int i){
	string tampilan;
		if(input[i]=='0'){
			tampilan="Nol";
		}
		else if(input[i]=='1'){
			tampilan="Satu";
		}
		else if(input[i]=='2'){
			tampilan="Dua";
		}
		else if(input[i]=='3'){
			tampilan="Tiga";
		}
		else if(input[i]=='4'){
			tampilan="Empat";
		}
		else if(input[i]=='5'){
			tampilan="Lima";
		}
		else if(input[i]=='6'){
			tampilan="Enam";
		}
		else if(input[i]=='7'){
			tampilan="Tujuh";
		}
		else if(input[i]=='8'){
			tampilan="Delapan";
		}
		else if(input[i]=='9')
			tampilan="Sembilan";
	return tampilan;
}

string belasan(char input[], int i){
		string tampilan;
		if(input[1]=='0'){
			tampilan="Sepuluh";
		}
		else if(input[1]=='1'){
			tampilan="Sebelas";
		}
		else if(input[1]>=2|input[1]<=9){
			++i;
			cout << satu(input, i)<< " Belas";
		}
		return tampilan;
}

string dua(char input[], int i){
	string tampilan;
		if(input[0]=='0'){
			tampilan="Nol";
		}
		else if(input[0]=='1'){
			cout << belasan(input, i);
		}
		else if(input[0]>=2|input[0]<=9){
			cout << satu(input, i) << " Puluh ";
			++i;
			cout << satu(input, i);
		}
		return tampilan;
}

int main(){
	char *input, tes;
	int i;
	awal:
	cin >> input; 
	int pjg=strlen(input);
	for (i=0; i<pjg; i++){
		tes=input[i];
	}
	if(pjg==1){
		i=0;
		cout << satu(input, i);
	}
	if(pjg==2){
		i=0;
		dua(input, i);
	}
	cout << "\n";
	goto awal;
}
