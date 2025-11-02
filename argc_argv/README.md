# argc_argv

Small C programs practicing command-line arguments (argc, argv).

## Requirements
- C, compiled with gcc on Ubuntu 20.04 LTS
- Flags: -Wall -Werror -Wextra -pedantic -std=gnu89
- Style: Betty

## Files
- 0-whatsmyname.c - prints the program name (the way it was invoked),
  followed by a new line. Preserves any path component.
- 1-args.c - prints the number of arguments passed (excluding the program
  name).
- 2-args.c - prints all arguments, including the program name, one per line.
- 3-mul.c - multiplies two integers passed as arguments; prints Error and
  returns 1 if exactly two args are not provided.

## Build
Examples:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-whatsmyname.c -o mynameis
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-args.c -o nargs
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-args.c -o args
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-mul.c -o mul
```

## Usage
```
# 0-whatsmyname.c
./mynameis
# -> ./mynameis
mv mynameis mynewnameis
./mynewnameis
# -> ./mynewnameis

# 1-args.c
./nargs
# -> 0
./nargs hello
# -> 1

# 2-args.c
./args You can do anything, but not everything.
# -> ./args
# -> You
# -> can
...

# 3-mul.c
./mul 2 3
# -> 6
./mul
# -> Error (exit status 1)
```

## Notes
- Uses argv[0] to print the invoked name/path.
- No separate main.c is provided; each file contains main.

## Tasks
- 0. It ain't what they call you, it's what you answer to
  - Write a program that prints its name, followed by a new line.
  - If you rename the program, it will print the new name without recompiling.
  - Do not remove the path before the program name (print exactly argv[0]).

- 1. Silence is argument carried out by other means
  - Write a program that prints the number of arguments passed into it.
  - Print a number followed by a new line.

- 2. The best argument against democracy is a five-minute conversation with
  the average voter
  - Write a program that prints all arguments it receives.
  - Print all arguments, including the first one (the program name).
  - Print one argument per line, ending with a new line.

- 3. Neither irony nor sarcasm is argument
  - Write a program that multiplies two numbers.
  - Print the result followed by a new line.
  - You can assume the two numbers and the result fit in an int.
  - If the program does not receive two arguments, print "Error" and return 1.
