[toc]
### A Note For Vim
#### 0. What it this?
This is a note for vim, the original url is <a>https://coolshell.cn/articles/5426.html</a>. It is clear that the original content of this note is a Chinese translation(and i translate it back to English cuz Vim does not support Chinese well).

#### 1.0 Introduction
Here are some basic knowledge that makes you can survive in vim mode.
> * ```i``` insert Mode, insert before cursor. Press ```ESC``` to back to normal.
> * ```x``` delete single letter under the cursor.
> * ```:wq``` write and quit.
> * ```dd``` delete current line and save it to buffer.
> ```p``` paste from buffer.

**Some Suggestion for you**
> * ```hjkl``` move the cursor.
> * ```help``` help <command\> Show the defination and usage of command.

There is one thing you must know that: under normal mode, all keys are functional. When one command take you too much time, think if there is a better way.

#### 2.0 Feels Better.
Remembering more instructions seems to be difficult at first. However, all the instructions below are suggested cuz they'll greatly improve your typing speed.
1. Insertion Mode
   > * ```a``` Insert after the cursor
   > * ```o``` Insert after one line
   > * ```O``` Insert before one line
   > * ```cw``` Change a word
2. Primary Moving Skills
   > * ```0``` Move to the beginning of a line
   > * ```^``` Move to the beginning position that is not blank(refers to space/tab/'\r'/enter,etc) in one line.
   > * ```$``` Move to the end of a line
   > * ```g_``` Move to the end position which is not blank.
   > * ```/pattern``` Search for the string named 'pattern'. Press n to search for the next.
3. Copy/Paste
   > * ```yy``` Copy current line without deleting it(different from dd)
   > * ```p/P``` Paste from buffer. 
4. Undo/Redo
   > * ```u``` Undo
   > * ```C-r``` Redo
5. File Operation
   > * ```e``` Open a file. Whether it can be faster than mouse are remain testing.
   > * ```w``` Save.
   > * ```saveas <path/to/file>``` Save as a new file(Not work in VSCode).
   > * ```wq``` Write and Quit.
   > * ```q!``` Quit without saving.
   > * ```:bn/:bp/:n``` Change to next file. 

#### 3.0 Better, Stronger, Faster
##### 3.1 Better
Use the commands below to make vim repeat.
> * ```.``` Repeat the last command.
> * ```N <command>``` Repeat a certain command N times.

Here are some examples:
> * 