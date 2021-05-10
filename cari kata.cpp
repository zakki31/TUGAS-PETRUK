/*
Kelompok 5
1. Ahmad Muzakki - 2017051037
2. 
3. 
Link Github : https://github.com/zakki31/TUGAS-PETRUK.git
*/


#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int cols = 16, rows = 15;

 char words[rows][cols] = {"tgbwwinterwsesn",
                                "aaunttmmhfoodnb",
                                "jlwcqldzmpmvdmr",
                                "asagmquwvvbsohi",
                                "bwplotanadtpgnc",
                                "rewngodjcpnatnk",
                                "eeotwosbqharrsa",
                                "azcgeswewnaknpb",
                                "dinnerqodlwdcar",
                                "onopkwmparktzcc",
                                "qbfrogmamwpweey",
                                "lqzqnnmrzjjsclg",
                                "mosgzczetdbooto",
                                "pdcrzmsngrdnrpz",
                                "ohnkzwaterjgtra"};

char *getWordVertical(int a);
char *reverse(char *a );
bool searchVertical(char *a );
bool searchHorizontal(char *a );


int main()
{
    char word[16];
    int n;
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchVertical(word) || searchHorizontal(word) || searchReverseVertical(word) || searchReverseHorizontal(word)){
            cout << "Ada\n";
        }
        else{
           cout << "Tidak Ada\n";
        }
    }
    return 0;
}

bool searchHorizontal(char input[]){
	char *temp;
	
	for (int i = 0; i < 15; i++)
    {
        temp = strstr(words[i], input);
        
	    if(temp != NULL){
	        return true;
	    }
    }
    
    return false;
}

bool searchReverseHorizontal(char input[]){ 
	char *temp;
	char kata[15]; 
	
	for (int i = 0; i < 15; i++)
    {
    	for(int j = 0; j < 15; j++){
	    	kata[j] = words[i][j]; 
		}
		
	    reverse(kata, kata + strlen(kata)); 
	    temp = strstr(kata, input); 
        
	    if(temp != NULL){ 
	        return true; 
	    }
    }
    
    return false;
}

