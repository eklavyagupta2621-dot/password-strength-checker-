
# 🔐 Password Strength Checker

A C++ command-line tool that checks how strong (or weak) your password really is — built as part of my cybersecurity learning journey.

## 🧠 Why I built this

Most people reuse the same weak password everywhere ("password123" anyone?). This project checks passwords against common security rules and gives instant feedback so users can pick something that actually holds up against attackers.

## ✨ Features

- Checks password length, uppercase/lowercase mix, numbers, and special characters
- Flags common/weak passwords
- Strength rating (Weak / Medium / Strong)
- Simple, beginner-friendly C++ code — easy to extend

## 🛠️ Tech Stack

- **Language:** C++
- **Compiler:** g++ (or any C++11+ compatible compiler)
- **Libraries:** Standard C++ library (`<string>`, `<cctype>`, `<regex>` if used)

## 🚀 Getting Started

### Prerequisites
```bash
g++ --version