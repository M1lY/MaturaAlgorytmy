void z10naDowolny(int n, int p){
    if(n>0){
        z10naDowolnyRekur(n/p, p);
        if(n%p>=10) cout<<char(n%p+'A'-10);
        else cout<<n%p;
    }
}

int zDowolnegoNa10(int d, string x, int p){
	if(d-1==0) return int(x[0]-'7')<10 ? int(x[0]-'0') : int(x[0]-'7');
	return int(x[d-1]-'7')<10 ? p*zDowolnegoNa10(d-1,x,p)+int(x[d-1]-'0') : p*zDowolnegoNa10(d-1,x,p)+int(x[d-1]-'7');
}
