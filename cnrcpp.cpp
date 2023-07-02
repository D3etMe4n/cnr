#include <bits/stdc++.h>

// This program wrote by an loser lazy to compile code by him self

using namespace std;

string removeExcutable(string excutableFileName) {
  string nonExcutableFileName = "";
  for (int i = 0; i < excutableFileName.size(); i++) {
    if (excutableFileName[i] == '.')
      break;
    nonExcutableFileName += excutableFileName[i];
  }
  return nonExcutableFileName;
}

bool excutableCheck(const string &excutableFileName,
                    const string &nonExcutableFileName) {
  if (excutableFileName.size() == nonExcutableFileName.size())
    return 1;
  return 0;
}

int main(int argc, char *argv[]) {
  if (argv[1] == nullptr) {
    cout << "Add file to compile BITCH!!";
    return 0;
  }
  string fileNameWithExcutable = argv[1];
  string compileScript = "g++ -std=c++14 -g ";
  string fileName = removeExcutable(fileNameWithExcutable);
  if (excutableCheck(fileNameWithExcutable, fileName)) {
    cout << "Add excutable BITCH!!!!!!!!!";
    return 0;
  }
  compileScript += fileNameWithExcutable + " -o " + fileName;
  const char *compileCommand = compileScript.c_str();
  fileName = "./" + fileName;
  const char *compiledFile = fileName.c_str();
  system(compileCommand);
  system(compiledFile);
  return 0;
}
