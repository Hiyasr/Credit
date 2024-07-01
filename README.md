# Credit

A GitHub README file is an essential part of your repository, as it provides an overview of the project, how to set it up, how to use it, and other relevant information. Here's a template for a comprehensive README file for your credit card validation program:

---

# Credit Card Validation Program

This project implements a program in C to check the validity of a given credit card number using Luhn's Algorithm. The program identifies whether the card is an American Express, MasterCard, or Visa card based on the starting digits and length of the card number.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgements](#acknowledgements)

## Introduction

Credit card numbers have a specific structure that includes a checksum. This program uses Luhn's Algorithm to validate credit card numbers and identifies the card type based on the starting digits and length.

## Features

- Validates credit card numbers using Luhn's Algorithm.
- Identifies card type (American Express, MasterCard, Visa).
- Handles invalid inputs gracefully.

## Installation

1. Clone the repository:

   ```sh
   git clone https://github.com/yourusername/credit-card-validation.git
   ```

2. Navigate to the project directory:

   ```sh
   cd credit-card-validation
   ```

3. Compile the program:

   ```sh
   make credit
   ```

## Usage

To run the program, execute the compiled binary:

```sh
./credit
```

You will be prompted to enter a credit card number. The program will then validate the number and print the card type or indicate if the number is invalid.

Example:

```sh
$ ./credit
Number: 4003600000000014
VISA
```

## Testing

You can test the program using various credit card numbers, both valid and invalid. Some test card numbers recommended by PayPal for testing are:

- American Express: `378282246310005`
- MasterCard: `5105105105105100`
- Visa: `4111111111111111`

To ensure the program's correctness, you can use the provided `check50` and `style50` tools:

```sh
check50 cs50/problems/2024/x/credit
style50 credit.c
```

## Contributing

Contributions are welcome! If you have any improvements or suggestions, please open an issue or submit a pull request.

## License

This project includes materials provided by CS50. For more information on the CS50 course and its licensing, visit [cs50.harvard.edu](https://cs50.harvard.edu).

## Acknowledgements

This project is part of the CS50 course. Thanks to the CS50 team for providing the framework and tools for this project.
