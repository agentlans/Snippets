// Open file: https://www.guru99.com/cpp-file-read-write-open.html
// Read lines: https://stackoverflow.com/a/7868998

#include <fstream>
#include <sstream>
#include <string>

using namespace std;

void open_file(std::string filename) {
  fstream my_file;
  my_file.open("my_file", ios::out);
  if (!my_file) {
    cout << "File not created!";
  } else {
    cout << "File created successfully!";
    my_file.close();
  }
}

int main() {
  std::ifstream infile("thefile.txt");
  std::string line;
  while (std::getline(infile, line)) {
    std::istringstream iss(line);
    // Read the two numbers of each line
    int a, b;
    if (!(iss >> a >> b)) {
      break;
    } // error
      // process pair (a,b)
  }
}
