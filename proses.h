void matriks::proses(){
  max = matriks[0][0];
	  for(i = 0; i < jum_baris; i++){ 	
	  if(matriks[0][0] > max){
      max = matriks[0][0];
    }
}
    
	// proses mencari nilai terkecil
	min = matriks[0][0];
  for(i = 1; i < jum_baris; i++){
    if(matriks[0][0] < min){
      min = matriks[0][0];
    }
  }
	
    for(i=0; i<jum_baris; i++) {
      total = 0;
      for(j=0; j<3; j++) {
        total = total+matriks[i][j];
      }
    }
}