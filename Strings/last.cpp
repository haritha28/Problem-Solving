/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 * 
 * @Output Integer
 */
 
 int trimtrail (const char * A, int length){
     int i = 0, leg, count = 0, lastindex = -1;
     char *B = malloc(length * sizeof(char));
     strcpy(B,A);
     while(B[i] != '\0'){
         if(B[i] != ' ' && B[i] != '\t' && B[i] != '\n'){
             lastindex = i;
         }
         i++;
     }
     if(lastindex != -1) {
         B[lastindex+1] = '\0';
     }
     
     //printf("%s", B);
     leg = strlen(B);
     if(leg == 0){
         return 0;
     }
     for(i = leg-1; i>=0; i--){
         if(B[i] != ' ' ){
             count++;
         } 
         
         if(B[i] == ' ' ||  i == 0){
             return count;
         }
     }
 }
 
int lengthOfLastWord(const char* A) {
    
    int length, index, count = 0;
    int flag = 0;
    char *C;
    length = strlen(A);
    count = trimtrail(A,length);
    return count;
}

