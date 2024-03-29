https://www.hackerrank.com/challenges/sorting-array-of-strings/problem?isFullScreen=true





int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a,b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b,a);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int count1=0,count2=0,i,j;
    for(i=0;a[i];i++)
    {
        for(j=i+1;a[j];j++)
            if(a[i]==a[j])
                break;
        if(a[j]==0)
            count1++;
    }
    for(i=0;b[i];i++)
    {
        for(j=i+1;b[j];j++)
            if(b[i]==b[j])
                break;
        if(b[j]==0)
            count2++;
    }
    return ((count1>count2) || ((count1==count2) && (strcmp(a,b)>0)));
}

int sort_by_length(const char* a, const char* b) {   
    return ((strlen(a)>strlen(b)) || (strlen(a)==strlen(b) && strcmp(a,b)>0));
}
void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    char *temp;
    int i,j;
    for(i=0;i<len-1;i++)
        for(j=0;j<len-1-i;j++)
            if((*cmp_func)(arr[j],arr[j+1])>0)
            {
                temp=malloc(sizeof(char)*(strlen(arr[j])+1));
                strcpy(temp,arr[j]);
                
                arr[j]=realloc(arr[j],strlen(arr[j+1])+1);
                strcpy(arr[j],arr[j+1]);
                
                arr[j+1]=realloc(arr[j+1],strlen(temp)+1);
                strcpy(arr[j+1],temp);
                
                free(temp);   
            }
}