# include<bits/stdc++.h>
using namespace std;

int main(){
    const string filename = "ori_text.txt";
    ifstream inputFile(filename);

    if(!inputFile.is_open())
    {
        cerr << "无法读取，因为文件无法打开>(" << endl;
        return false;
    }

    ofstream outputFile("ope_text.txt");
    if(!outputFile.is_open())
    {
        cerr << "无法创建输出文件>(" << endl;
        return false;
    }

    string line;
    while(getline(inputFile, line)){
        outputFile << "\xE3\x80\x80\xE3\x80\x80" << line << endl;
    }

    cout << "文件处理完毕:)" << endl;
    return 0;
}