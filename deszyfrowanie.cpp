string szyfrCezara(string s, int k){
	string jawny;
	k%=26;
	for(int i=0; i<s.size(); i++){
		if(int(s[i])-k<'A') jawny+=char(int(s[i])-k+26);
		else jawny+=char(int(s[i])-k);
	}
	return jawny;
}

string szyfrPrzestawieniowy(string s, int k){
	string jawny="";
	int d=s.size();
	int h=d%k;
	k=ceil((float)d / (float)k);
	int l=0;
	for(int i=0; i<k; i++){
		int g=0;
		for(int j=i; j<=d; g++){
			if(l==d) break;
			if(g<=h){
				jawny+=s[j];
				j+=k;
			}
			else{
				jawny+=s[j-1];
				j+=k-1;
			}
			l++;
		}
	}
	return jawny;
}

string szyfrVigenerea(string s, string k){
	string jawny="";
	int d1=s.size();
	int d2=k.size();
	int kod=0;
	for(int i=0; i<d1; i++){
		kod=int(s[i])-int(k[i%d2])+'A';
		if(kod>='A') jawny+=char(kod);
		else jawny+=char(kod+26);
	}
	return jawny;
}
