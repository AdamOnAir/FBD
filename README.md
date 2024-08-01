# FBD

FBD is a textual software in a Terminal Emulator designed for Linux. So read jokes, and get the current time, that's it.

## Technical Badges

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![Windows](https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)
<br>

## Compile : Linux

Compile with GCC:
```bash
git clone https://gitHub.com/FBDev64/FBD.git
cd FBD
gcc -o fbd main.c
+
```

Compile with CMake:
```bash
git clone https://gitHub.com/FBDev64/FBD.git
cd FBD
mkdir build && cd build
cmake ..
make
```

```bash
# Add to PATH with bash
echo "export PATH=$PATH:$PWD" >> ~/.bashrc
source ~/.bashrc
```

```zsh
# Add to PATH with zsh
echo "export PATH=$PATH:$PWD" >> ~/.zshrc
source ~/.zshrc
```

## Execute : MS Windows

To execute on MS Windows, just download the executable from [the Releases section.](https://github.com/FBDev64/FBD/releases)
But you can still compile with `cl` or CMake.

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

## License

Distribute, modify and use freely under the terms of the
[BSD 3-Clause “New” or “Revised” License](https://choosealicense.com/licenses/bsd-3-clause/).
