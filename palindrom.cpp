bool palindrom(string wyraz){
	int d=wyraz.size();
    for(int i=0; i<d/2; i++){
    	if(wyraz[i]!=wyraz[d-1-i]) return false;
	}
    return true;
}
