// sol 1
string reverseString(string &str){
	vector<string> vs;
	string tmp = "";
	for(int i = 0;i < str.size();i++){
		if(str[i]==' '){
			if(tmp != "")
				vs.push_back(tmp);
			tmp = "";
		}
		else
			tmp += str[i];
	}
	if(tmp != "")
		vs.push_back(tmp);

	string s = "";
	for(int i = vs.size()-1;i >= 0;i--){
		s += vs[i];
		s += ' ';
	}
	return s;
}

// sol 2
string reverseWords(string str) {
        string s = "";
        string tmp = "";
        for(int i = 0;i < str.size();i++){
            if(str[i]==' '){
                if(tmp != ""){
                    if(s != "")
                        s = tmp + " " + s;
                    else
                        s = tmp;
                }
                tmp = "";
            }
            else
                tmp += str[i];
        }
        if(tmp != ""){
            if(s != "")
                s = tmp + " " +s;
            else
                s = tmp;
        }
        return s;
    }
