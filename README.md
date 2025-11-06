# ATM Application in C

This is a **console-based ATM (Automated Teller Machine) application** developed in C.  
It simulates basic ATM functionalities such as user authentication, withdrawal, deposit, balance inquiry, and PIN change using an array-based backend.

---

## 🚀 Features

✔ Secure PIN verification  
✔ Check account balance  
✔ Cash withdrawal  
✔ Deposit money  
✔ Change PIN securely  
✔ Simple and clean menu-driven interface  

---

## 🔧 Technologies Used

| Technology | Purpose |
|-----------|---------|
| C Language | Core application logic |
| GCC Compiler | Building the program |
| File System / Arrays | Storing sample user data |

---

## 🧠 How It Works

1. User enters **6-digit Account ID**
2. System validates the ID from predefined account list
3. User enters **PIN**
4. After successful authentication → Menu options are shown:
   - `1️⃣ Balance Inquiry`
   - `2️⃣ Deposit Money`
   - `3️⃣ Withdraw Money`
   - `4️⃣ Change PIN`
   - `5️⃣ Exit`

Data such as account ID, PINs, and balances are stored in arrays.

---

## 📂 Folder Structure
/
├── main.c
├── pin.c
├── withdraw.c
├── deposit.c
├── balance.c
├── options.c
└── README.md

> You can rename and reorganize files if needed for modular clarity.

---

## 🛠️ How to Compile & Run

### Using GCC

gcc main.c pin.c withdraw.c deposit.c balance.c options.c -o atm
./atm

---

##Using CodeBlocks or VS Code

Create a new project

Add all .c files to the project

Build & Run ✅
---

##💡 Future Enhancements

Store account data securely using file handling instead of arrays

Add transaction history logging

Multiple user accounts with dynamic storage

Better UI formatting

Security improvements (e.g., PIN lockout after multiple failures)

---
##👨‍💻 Author

Guna Sekhar
B.Tech in Electronics & Communication Engineering
Passionate about Embedded Systems & Software Development

---

##🔗 GitHub: https://github.com/QuantumGuna

##📩 Email: gunasekharbathula30@gmail.com

---

##⭐ Show Your Support

If you liked this project,
please ⭐ the repo — it motivates more open-source contributions!

