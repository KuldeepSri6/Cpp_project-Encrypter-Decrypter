# 🔐 File Encrypter & Decrypter (C++)

A simple **C++ File Encrypter & Decrypter** that uses the **XOR (Exclusive OR)** encryption technique to securely encrypt and decrypt files. The program works with any file type by reading and writing data in **binary mode**.

## 📌 Features

* Encrypt any file using a single-character key.
* Decrypt encrypted files using the same key.
* Supports both text and binary files.
* Simple command-line interface.
* Lightweight and beginner-friendly C++ project.

---

## 🛠️ Technologies Used

* C++
* File Handling (`fstream`)
* Binary File I/O
* XOR Encryption Algorithm

---

## 🚀 How to Compile

Using **g++**:

```bash
g++ main.cpp -o FileEncrypter
```

Run the program:

```bash
./FileEncrypter
```

On Windows:

```bash
FileEncrypter.exe
```

---

## 📖 How to Use

1. Compile and run the program.
2. Choose an option:

   * `1` → Encrypt File
   * `2` → Decrypt File
   * `3` → Exit
3. Enter:

   * Input file name (or full file path)
   * Output file name
   * A single-character encryption key
4. The encrypted or decrypted file will be created successfully.

---

## 💻 Example

### Encryption

```text
========== File Encrypter & Decrypter ==========
1. Encrypt File
2. Decrypt File
3. Exit

Enter your choice: 1

Enter the name of the file you want to encrypt:
sample.txt

Enter the name of the output file:
encrypted.bin

Enter a single character key for encryption:
K

Operation completed successfully!!
```

### Decryption

```text
Enter your choice: 2

Enter the name of the file you want to decrypt:
encrypted.bin

Enter the name of the output file:
decrypted.txt

Enter a single character key for decryption:
K

Operation completed successfully!!
```

---

## 🔑 How XOR Encryption Works

XOR encryption applies the XOR (`^`) operation between every byte of the file and the chosen key.

```text
Encrypted Byte = Original Byte ^ Key
```

To decrypt:

```text
Original Byte = Encrypted Byte ^ Key
```

Since XOR is reversible, using the **same key** restores the original data.

---

## ⚠️ Limitations

* Uses a **single-character XOR key**, which is not secure for protecting sensitive data.
* If the wrong key is used during decryption, the output will be unreadable.
* Intended for educational purposes and to demonstrate file handling and basic encryption concepts.

---

## 📚 Concepts Demonstrated

* File Handling in C++
* Binary File Processing
* Functions
* Switch-Case Menu
* XOR Bitwise Operator
* Basic Cryptography Concepts

---

## 🔮 Future Improvements

* Multi-character password support
* Strong encryption algorithms (AES)
* Password hashing
* GUI version
* Drag-and-drop file selection
* Progress bar for large files
* Better error handling

---

## 👨‍💻 Author

**Kuldeep Srivastava**

If you found this project useful, consider giving it a ⭐ on GitHub!
