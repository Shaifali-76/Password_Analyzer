#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void check_password(int length, char *password){
    bool upper_case=false,lower_case=false,digit=false,special_character=false;
   
   
    for(int i=0;i<length;i++){
        
        if(password[i]>98 && password[i]<123)
        lower_case=true;
        
        else if(password[i]>='A'&& password[i]<91)
        upper_case=true;
        
        else if(password[i]>=48 && password[i]<58)
        digit=true;
        
        else if(password[i]>34 && password[i]<127)
        special_character=true;
        
    }
     
    {
        if(lower_case==false)
            printf(" MISSING LOWER CASE.\n");
        
         if(upper_case==false)
            printf(" MISSING UPPER CASE.\n");
            
         if(digit==false)
            printf(" MISSING DIGIT.\n");
           
         if(special_character==false)
            printf(" MISSING SPECIAL CHARACTER.\n");
           
        return;
    }
        
        if(length<=7)
        printf(" Strength: Weak");
     
        else if(length<10)
        printf(" Strength: Good");
     
        else if(length<=12)
        printf(" Strength: Excellent");
        
    
    
}

int main() {
    
    char password[100];
    printf(" Password Guidelines:\n");
    printf(" 1. Length of the password must be between 6 to 12 character.\n");
    printf(" 2. Must contain atleast 1 uppercase.\n");
    printf(" 3. Must contain atleast 1 lowercase.\n");
    printf(" 4. Must contain atleast 1 special character.\n");
    printf(" 5. Must contain atleast 1 digit.\n\n");
    printf(" Enter the password:");
    scanf("%s",password);
  
    int length = strlen (password);
    
    if(length<6||length>12) {
        printf(" Invalid length of entered password.");
        return -1;
    }
   
     check_password(length,password);
     
     
    
    return 0;
}
