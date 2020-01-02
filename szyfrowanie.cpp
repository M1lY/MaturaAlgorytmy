string szyfrCezara(string s, int k){
	string szyfr;
	k%=26;
	for(int i=0; i<s.size(); i++){
		if(int(s[i])+k>'Z') szyfr+=char(int(s[i])+k-26);
		else szyfr+=char(int(s[i])+k);
	}
	return szyfr;
}

string szyfrPrzestawieniowy(string s, int k){
	string szyfr="";
	int d=s.size();
	k%=d;
	for(int i=0; i<k; i++){
		for(int j=i; j<d; j+=k){
			szyfr+=s[j];
		}
	}
	return szyfr;
}

string szyfrVigenerea(string s, string k){
	string szyfr="";
	int d1=s.size();
	int d2=k.size();
	int kod=0;
	for(int i=0; i<d1; i++){
		kod=int(s[i])+int(k[i%d2])-'A';
		if(kod<='Z') szyfr+=char(kod);
		else szyfr+=char(kod-26);
	}
	return szyfr;
}
