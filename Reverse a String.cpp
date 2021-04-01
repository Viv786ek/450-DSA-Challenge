string reverseWord(string str){
    
  //Your code here
  int n = str.size();
  int l = 0;
  int h= n-1;
  
  while(l < h){
      swap(str[l],str[h]);
      l++;
      h--;
  }
  return str;
}
