# MINITALK 

## Introduction
>The objective of this project is for you to create a communication program, it will be able to send messages from a client to a server.

## Objectives 
 * You must create a communication program in the form of a client and server.
 * The server must be launched first, and after being launched it must display its PID
 * The client will take as parameters:
 * The server PID.
 * The string that should be sent 
 * The client must communicate the string passed as a parameter to the server. Once the string has been received, the server must display it.
 * Communication between your programs should ONLY be done using UNIX signals.
 * The server must be able to display the string pretty quickly. By quickly we mean that if you think it is too long, then it is probably too long (hint: 1 second for 100 characters is COLOSSAL)
 * Your server should be able to receive strings from several clients in a row, without needing to be restarted.
 * Add a small reception acknowledgment system (BONUS)
 * support Unicode characters! (BONUS)
  
## Usage
> To use minitalk you first need to clone the repository and go to the associated folder
```bash
git clone https://github.com/sherchryst/minitalk.git
```
```bash
cd minitalk
```
> Now you have to compile the project : in order to compile you can use the Makefile
```bash
make bonus && make clean
```
> You can now launch the server (ctrl+c to stop it)
```bash
./server
```
> And the client (in another terminal) with server PID and your message
```bash
./client PID "your message here"
```
Here we go ! You can now send many messages (with emoji, chinese caracters, etc...) to the server with multiple clients and the client will display a message if the server received correctly!
