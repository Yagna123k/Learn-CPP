# 📚 Learn C++ by Examples

Welcome to this repository! 👋
This is a personal documentation of my journey learning **C++**, where I’ve created multiple small files and programs to practice and understand the language.

If you’re starting with C++ or want to learn through practical examples, feel free to explore these files. You can clone this repository and try running them on your local machine.

---

## 🚀 Getting Started

### 1️⃣ Install GCC (MinGW) for Windows

To compile and run C++ files, you’ll need a compiler. We’ll use **MinGW-w64**, which provides `g++`.

Follow this official VS Code guide:
👉 [Using GCC (MinGW) with VS Code](https://code.visualstudio.com/docs/cpp/config-mingw)

**Quick steps:**

* Download MinGW-w64 from [https://www.mingw-w64.org/downloads/](https://www.mingw-w64.org/downloads/)
* Install it (select architecture `x86_64` and threads `posix` during setup).
* Add the `bin` folder path (e.g., `C:\Program Files\mingw-w64\...\bin`) to your **Environment Variables** → `Path`.
* Verify by running in terminal:

  ```bash
  g++ --version
  ```

---

### 2️⃣ Set up VS Code for C++

* Install VS Code from [https://code.visualstudio.com](https://code.visualstudio.com)
* Install the C/C++ extension by Microsoft (`ms-vscode.cpptools`).
* Open your folder in VS Code and start coding.

---

### 3️⃣ Run Your First Program

* Create a file `hello.cpp`:

  ```cpp
  #include <iostream>
  using namespace std;
  int main() {
      cout << "Hello, C++!" << endl;
      return 0;
  }
  ```
* Compile it:

  ```bash
  g++ hello.cpp -o hello
  ```
* Run it:

  ```bash
  ./hello
  ```

  (Use `hello.exe` on Windows PowerShell / CMD.)

---

## ✅ How to Use This Repository

1. **Clone this repository**

   ```bash
   git clone https://github.com/Yagna123k/Learn-CPP.git
   cd Learn-CPP
   ```

2. **Open in VS Code**

   ```bash
   code .
   ```

3. Pick any `.cpp` file, compile & run it. Modify the code to experiment.

---

## ⭐ Contributing

If you want to add more examples, feel free to open a pull request!

---

## 📬 Feedback

If you find this helpful, give it a ⭐ and share it with others who want to learn C++.

Happy coding! 🚀
