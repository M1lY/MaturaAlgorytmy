bool anagram(string w1, string wA){
    int d1=w1.size();
    int dA=wA.size();
	if(dA!=d1) return false;
    bool b;
    for(int i=0;i<d1;i++){
        b=false;
        for(int j=0;j<dA;j++){
            if(w1[i]==wA[j]){
                wA[j]='\0';
                b=true;
                break;
            }
        }
        if(b==false) return false;
    }
    return true;
}

bool anagram(char a[], char b[]){
	int da=strlen(a);
	int db=strlen(b);
	if(da!=db) return false;
	int l[21]={};
	for(int i=0; i<da; i++){
		l[a[i]-65]++;
		l[b[i]-65]--;
	}
	for(int i=0; i<21; i++) if(l[i]!=0) return false;
	return true;
}

bool anagram(char a[], char b[]){
	if(strcmp(a, b)==0) return true;
	return false;
}
