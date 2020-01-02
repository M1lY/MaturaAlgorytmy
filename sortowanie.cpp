void sortowanieBabelkowe(int tab[]){
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(tab[j]>tab[j+1]) swap(tab[j],tab[j+1]);
		}
	}
}

void sortPrzezWstawianie(int tab[]){
	int temp,j;
	for(int i=1;i<n;i++){
		temp=tab[i];
		for(j=i-1;j>=0&&tab[j]>temp;j--){
			tab[j+1]=tab[j];
		}
		tab[j+1]=temp;
	}
}

void sortPrzezWybor(int tab[]){
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(tab[min]>tab[j]) min=j;
        }
        swap(tab[min],tab[i]);
    }
}
