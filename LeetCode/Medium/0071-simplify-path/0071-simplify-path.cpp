class Solution {
public:
    string simplifyPath(string path) {
        stack <string>  st;
        string token ="";
        string result ="";
        
        for(int i = 0; i < path.length(); i++){  
            //tach mang
            if(path[i] == '/' ){
                if(token == "..") {
                    if(!st.empty()) st.pop();
                }else if( token != "" && token != "."  ){
                    st.push(token); 
                }

                token = "";
            }else{
                token += path[i];
            }
        }
        

        if(token == ".."){
            if(!st.empty()) st.pop();

        } else if( token != "" && token != "."){
            st.push(token);

        }

        while(!st.empty()){
            result = '/' + st.top() + result;
            st.pop();
        }

       return result.empty() ? "/" : result;
    }
};