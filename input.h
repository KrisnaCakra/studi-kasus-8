using namespace std;

class matriks{
    public:
      void input();
      void proses();
  	  void output();
    private:
      int matriks[100][3];
    	int jum_baris, i, j, k, total, max, min;
    	string jurusan[3];
};

void matriks :: input(){
  cout << "= = = = = PROGRAM MENCETAK BANYAK LULUSAN = = = = =" << endl << endl;
	cout << "MASUKKAN 3 JURUSAN : "<<endl<<endl;
	for(k = 0; k < 3; k++){
    	cout <<"Masukkan jurusan ke-"<<k+1<<" : ";
    	cin >> jurusan[k];
	}
	cout << "\nMasukkan banyak angkatan lulusan : ";
	cin >> jum_baris;
  for(i = 0; i < jum_baris ; i++){
  		cout<<"Angkatan ke-"<<i+1<<endl;
    	for(j = 0; j < 3; j++){
    		cout <<jurusan[j]<<" : ";
    		cin >> matriks[i][j];
		}
    cout << endl;
	}
 
	cout << "Tampil Data Lulus " << endl;
  cout << "          		TA TE TU" << endl;
  
	// menampilkan array
	for(i = 0; i < jum_baris ; i++){
		cout<<"Th ke-"<<i+1<<"\t\t";
    	for(j = 0; j < 3; j++){
    		cout <<matriks[i][j] << " ";
    	}
    	cout << endl;
	}
}