# argc_argv

Small C programs practicing command-line arguments (`argc`, `argv`).

## Requirements
- C, compiled with `gcc` on Ubuntu 20.04 LTS
- Flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Style: Betty

## Files
- `0-whatsmyname.c` — prints the program name (the way it was invoked),
  followed by a new line. Preserves any path component.

## Build
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-whatsmyname.c -o mynameis
```

## Usage
```
./mynameis
# -> ./mynameis
mv mynameis mynewnameis
./mynewnameis
# -> ./mynewnameis
```

## Notes
- Uses `argv[0]` to print the invoked name/path.
- No separate `main.c` is provided—this file contains `main`.
