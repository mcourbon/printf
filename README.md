# 🖨️ ft_printf – 42 School Project

**ft_printf** is a core C project from 42 School. The goal is to recreate the behavior of the standard `printf` function with limited C standard library functions. This project builds a deeper understanding of variadic functions, formatted output, and low-level memory handling.

## 📚 Objective
Reimplement the C standard `printf` function with support for:
- `%c` – character
- `%s` – string
- `%p` – pointer
- `%d` / `%i` – signed integers
- `%u` – unsigned integers
- `%x` / `%X` – hexadecimal (lowercase / uppercase)
- `%%` – percent symbol

## ⚙️ Skills Gained
- Manual number/string conversion
- Custom formatting and output control
- Mastery of low-level C concepts

## 🛠️ Technologies
- Language: C
- Build system: `Makefile`

## 📸 Example

```c
ft_printf("Hello %s, the number is %d and hex is %x\n", "world", 42, 42);
// Output: Hello world, the number is 42 and hex is 2a
