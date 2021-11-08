 #include "Utility.h"
 bool Utility::isemail(std::string  email)
{
	const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	return std::regex_match(email, pattern);
}

 bool Utility::isUrl(std::string url){
    const std::regex pattern("^(http:\\/\\/www\\.|https:\\/\\/www\\.|http:\\/\\/|https:\\/\\/|www\\.)[a-z0-9]+([\\-\\.]{1}[a-z0-9]+)*\\.[a-z]{2,5}(:[0-9]{1,5})?(\\/.*)?$");
    return std::regex_match(url,pattern);
}
 bool Utility::isInteger(std::string number){
    for (int i = 0; i < number.size(); ++i) {
        if (number[i]<'0' || number[i]>'9'){
            return false;
        }
    }
    return true;
}
bool Utility::isNumber(std::string Number){
   if (!isInteger(Number)){
       return false;
   }
  return true;
}
    bool Utility::isFloat(std::string str){
       if(str[0]=='.'){
           return false;
       }
       int size= str.length();
       if(str[size-1]=='.'){
           return false;
       }
       for(int i = 1;i<size;i++){
           if(str[i]=='.'){
               return true;
           }
       }
       return false;
   }