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
    cin.ignore(1,'\n');
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchVertical(word) || searchHorizontal(word))
            cout << "Ada\n";
        else
            cout << "Tidak Ada\n";
    }
    return 0;
}


char *getWordVertical(int a){
static char simpan [16];
for (int i = 0;i<16;i++){
    simpan [i] = words [i][a];
}
return simpan;
}

char *reverse(char *a){
reverse(a,a+15);
return a;

}
