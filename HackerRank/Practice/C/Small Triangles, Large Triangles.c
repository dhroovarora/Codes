https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem?isFullScreen=true





double s11(triangle tr){
    double temp;
    temp=(tr.a+tr.b+tr.c)/2.0;
    
    return (sqrt(temp*(temp-tr.a)*(temp-tr.b)*(temp-tr.c)));
}
void sort_by_area(triangle* tr, int n) {
    double s[n];
    for (int i=0; i<n; i++) {
        s[i]= s11(tr[i]);
    }
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
        if(s[i]>s[j]){
            double temp=s[j];
            s[j]=s[i];
            s[i]=temp;
            triangle ts;
            ts=tr[j];
            tr[j]=tr[i];
            tr[i]=ts;
            
        }
        }
    }
    /**
    * Sort an array a of the length n
    */
}
