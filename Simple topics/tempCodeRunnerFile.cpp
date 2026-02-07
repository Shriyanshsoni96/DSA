int original = n;
int reverse = 0;
  while(n!=0){
       int digit = (n%10);
         reverse = (reverse*10)+digit ;
        n = n / 10;
    }
    cout<<"The reverse of the number is : "<<reverse<<endl;
    if(original==reverse){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }