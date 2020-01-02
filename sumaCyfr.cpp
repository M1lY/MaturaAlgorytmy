void sumaCyfr(int n){
	if(n>0){
		sumaCyfr(n/10);
		s+=n%10;
	}
}
