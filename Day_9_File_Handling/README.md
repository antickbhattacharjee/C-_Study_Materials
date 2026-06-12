# Day 9: File Handling

## 📖 Definition
File handling allows C++ programs to read from and write to external files on the hard drive. This ensures that data is persistently stored and not lost when the program terminates.

In C++, file handling is done via the `<fstream>` library:
- `ofstream`: Output file stream to write to files.
- `ifstream`: Input file stream to read from files.
- `fstream`: File stream to both read and write.

## 💻 Examples
```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("example.txt");
    outFile << "Writing this to a file." << endl;
    outFile.close();

    // Reading from a file
    string fileData;
    ifstream inFile("example.txt");
    if (inFile.is_open()) {
        getline(inFile, fileData);
        cout << "Read from file: " << fileData << endl;
        inFile.close();
    }
    
    return 0;
}
```

## 🔄 Differences to Note
- **Reading (`ifstream`) vs Writing (`ofstream`) vs Appending**: `ofstream` creates or overwrites files. Using `ios::app` with `ofstream` appends data to the end of an existing file without deleting its contents. `ifstream` only allows reading data.
- **Single Line vs Multiple Lines**: Reading line-by-line requires using `getline` inside a loop until the end of the file (EOF) is reached.

## 📝 Assignments & Learning
- **Learning**: Learn how to open files, write raw data, read data back into variables, append text to existing files, and manage multi-line text files.
- **Assignments**: Mini-projects storing user input persistently and retrieving logs or data files safely.
