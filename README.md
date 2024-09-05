

## ABOUT
This is a server/client system that uses UNIX signals for communication. The server displays its PID and receives decrypted signals as characters, while the client encrypts messages and sends true/false signals using SIGUSR1 or SIGUSR2 to the server's PID.

## HOW TO USE
#### 1º - Clone the repository
```bash
git https://github.com/mfk-ayoub/minitalk_42
```

#### 2º - Enter the project folder and run `make`
```bash
cd path/to/minitalk_42
make
```

#### 3º - Run server or server_bonus and copy its PID
```bash
./server
./server_bonus
```

#### 4º - Open another terminal, run client or client_bonus, paste the PID and write a message
```bash
./client [SERVER PID] [MESSAGE]
./client_bonus [SERVER PID] [MESSAGE] [EMOTE]
```

#### MAKEFILE RULES

`make` - Compile minitalk **mandatory** files.

`make bonus` - Compile minitalk **bonus** files.

`make all` - Compile **mandatory** + **bonus** files.

`make clean` - Delete all .o (object files) files.

`make fclean` - Delete all .o (object files) and .a (executable) files.

`make re` - Use rules `fclean` + `all`.

## MANDATORY
- [x] Produce server and client executables.
- [x] The Client must communicate a string passed as a parameter to the server (referenced by its process ID) and display it.
- [x] Use `SIGUSR1` and `SIGUSR2` signals only.

## BONUS
- [x] Add reception acknowledgement system.
- [x] Support Unicode characters.

## NORMINETTE
> At 42 School, it is expected that almost every project is written following the Norm, which is the coding standard of the school.

```
- No for, do...while, switch, case, goto, ternary operators, or variable-length arrays allowed;
- Each function must be a maximum of 25 lines, not counting the function's curly brackets;
- Each line must be at most 80 columns wide, with comments included;
- A function can take 4 named parameters maximum;
- No assigns and declarations in the same line (unless static);
- You can't declare more than 5 variables per function;
- ...
```


## CONTRIBUTING

If you find any issues or have suggestions for improvements, feel free to fork the repository and open an issue or submit a pull request.
