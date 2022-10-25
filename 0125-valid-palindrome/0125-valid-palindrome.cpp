class Solution 
{
public:
    bool isPalindrome(string s) 
    {
/* two pointer approach*/
        int start_index = 0; //pointer starting from leftmost or 0-index
        int end_index = s.size() - 1; //pointer starting from rightmost or n-1 index
        while( start_index < end_index) //always left index value should be less than right index
        {
    /* checking if the left pointer is pointing alphanumeric variable or not*/
            while(!isalnum(s[start_index]) && start_index < end_index )
            {
                start_index+=1; //traversing towards right by incrementing index
            }
    /* checking if the right pointer is pointing alphanumeric variable or not*/
            while(!isalnum(s[end_index]) && start_index < end_index )
            {
                end_index-=1; //traversing towards left by decreasing index
            }
    /* converting all the letters to lower case traversing from both ends and comparing*/
            if(tolower(s[start_index])!=tolower(s[end_index])) return false;
    /*incrementing left pointer along with decrementing right pointer*/      
            start_index++; 
            end_index--;
        }
        return true;
    }
};