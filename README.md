# C++ Spam Email Detector

A simple C++ mini project that checks whether an email is likely to be spam by searching for common spam-related keywords.

## 📌 Project Overview

This project takes email content as input from the user and checks for words or phrases commonly found in spam emails.

If one or more spam keywords are found, the program classifies the email as **likely SPAM**. Otherwise, it considers the email **safe**.

## 🛠️ Concepts Used

* C++ Strings
* `getline()`
* `string.find()`
* `string::npos`
* `if-else` statements
* Variables
* User input and output
* Basic spam scoring logic

## 🚀 How It Works

1. The user enters the email content.
2. The program searches for common spam keywords.
3. Each matching keyword increases the `spamScore`.
4. If the score is `1` or higher, the email is classified as spam.
5. Otherwise, the email is considered safe.

## 🔑 Spam Keywords Checked

* `win`
* `free`
* `prize`
* `urgent`
* `click here`
* `money`

## 💻 Example

### Input

```text
Congratulations! You win a free prize. Click here to claim your money.
```

### Output

```text
This email is likely SPAM.
```

## 📚 Learning Purpose

This project was created as part of my **C++ learning journey** to practice strings, searching, conditional statements, and basic problem-solving.

## 🔮 Future Improvements

* Make keyword checking case-insensitive
* Add more spam keywords
* Use different scores for different keywords
* Calculate a spam percentage
* Improve the spam detection algorithm
* Add a graphical user interface in the future

## 👨‍💻 Author

Created as a part of my C++ learning journey.
