int nwd(int a, int b){
    if(b!=0) return nwd(b,a%b);
    return a;
}

int nwd(int a, int b){
    if(a!=b){
        if(a>b) return nwd(a-b,b);
        else return nwd(a,b-a);
    }
    return a;
}
