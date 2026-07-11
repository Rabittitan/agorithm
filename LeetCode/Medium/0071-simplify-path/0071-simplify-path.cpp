class Solution {
public:
    string simplifyPath(string path) {
        vector <string>  st;
        string token ="";
        string result ="";
        
        for(int i = 0; i < path.length(); i++){  
            //tach mang
            if(path[i] == '/' ){
                if(token == "..") {
                    if(!st.empty()) st.pop_back();
                }else if( token != "" && token != "."  ){
                    st.push_back(token); 
                }

                token = "";
            }else{
                token += path[i];
            }
        }
        

        if(token == ".."){
            if(!st.empty()) st.pop_back();

        } else if( token != "" && token != "."){
            st.push_back(token);

        }

        for(int i= 0; i < st.size() ;i++){
            result += '/' + st[i];
        }

       return !result.empty() ? result :  "/";
    }
};