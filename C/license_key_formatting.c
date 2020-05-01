void reverse(char* str, int size){
    int i, j;
    char c;
    
    for(i = 0, j = size; i < j; ++i, --j){
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}

char* licenseKeyFormatting(char* S, int K){
    int n = strlen(S);
    int count = 0;
    char* result = malloc((2*n) * sizeof(char));
    int index = 0;
         
    for(int i = n - 1; i >= 0; i--){
        if(*(S+i) == '-') continue;
        if(count && count % K == 0){ 
            *(result+index) = '-';
            index ++;
        }
        
        *(result+index) = toupper(*(S+i));
        count ++;
        index ++;
    }      
    
    reverse(result, index-1);
    *(result+index) = '\0';
    
    return result;

}
