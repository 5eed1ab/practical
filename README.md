# Computing
## For the Practical Ca7
![Ca7header](https://5eed1ab.com/images/Ca7header.jpg)

`curl --silent https://en.wikipedia.org/api/rest_v1/page/summary/information_theory |jq '{title,description,extract}'`
|title|Information theory|
|--:|:--|
|description|Scientific study of digital information|
|extract|Information theory is the mathematical study of the quantification, storage, and communication of a particular type of mathematically defined information. The field was established and formalized by Claude Shannon in the 1940s, though early contributions were made in the 1920s through the works of Harry Nyquist and Ralph Hartley."|

## [A Mathematical Theory of Communication](https://people.math.harvard.edu/~ctm/home/text/others/shannon/entropy/entropy.pdf)
### Need help from J.E. Thompson to understand Claude Shannon's paper
- [Arithmetic for the Practical Man](https://dn790009.ca.archive.org/0/items/in.ernet.dli.2015.463129/2015.463129.Arithmetic-For.pdf)
- [Algebra for the Practical Man](https://dn790003.ca.archive.org/0/items/j.e.thompsonalgebraforthepracticalman/J._E._Thompson_Algebra_for_the_Practical_Man.pdf)
- [Trigonometry for the Practical man](https://www.rexresearch1.com/TrigonometryLibrary/TrigonometryPracticalManThompson.pdf)
- [Calculus: For the Practical Man](https://dn760107.eu.archive.org/0/items/in.ernet.dli.2015.462654/2015.462654.Calculus--.pdf)


## Collection of relevant topics
```
title                       description
-----                       -----------
Information theory          Scientific study of digital information
Computing                   Activity involving calculations or computing machinery
Pragmatism                  Philosophical tradition
Cat                         Small domesticated carnivorous mammal
Decimal                     Number in base-10 numeral system
Binary number               Number expressed in the base-2 numeral system
Bit                         Unit of information
Byte                        Unit of digital information, usually 8 bits
ASCII                       Character encoding standard
C (programming language)    General-purpose programming language
Unix                        Family of computer operating systems
Git                         Distributed version control software system
ThinkPad                    Business laptops and tablets series from Lenovo
PowerShell                  Cross-platform shell based on .NET technology
WSL                         Feature for a Linux environment in Windows
Red Hat                     American open source software company
KVM                         Virtualization module in the Linux kernel
Hyper-V                     Native hypervisor by Microsoft
UTM (software)              Virtual machine software
PXE boot                    Standard for booting from a server
OpenZFS                     Open-source implementation of ZFS file system
FreeBSD                     Free and open-source Unix-like operating system
Gitea                       Free forge based on Git written in Go
Forge (software)            Platform for developing computer applications
```

## Practical Ca7 C Example
- avoid cut-in-paste, The more you type the faster you get. Taking time to type the examples yourself actually accelerates retention. To encourage this, code examles will be images.
- asciiCa7 generated from uploading Ca7header.jpg to [Image to ASCII Art](https://www.asciiart.eu/image-to-ascii)

![practical.c-v0.1.2](https://5eed1ab.com/images/practical.c-v0.1.3.png)
### `cd git/practical;make;./practical`

```markdown
Practical Ca7                                                            1000001
▒▒░░░░░   ░▒▓█████▒░░░  ░░  ░░▓▒▒ ░▒▒░ ░░▓▓░░▓▒░░░░ ▒░ ░  ▒████████▓▒░ ░░░░░░░▒▒
▒▒▒░░░░░░▒███▓▓▒▒▒▓███▒░    ░▒▒░▒░░▓ ░░░▒▒▒▓▓▓▓▒░ ░░░░▒████▒▓░▓▓▓▓██▓░░░▓▒░░░░▒▒
░▒▒░░░░░ ░▓█▒░░▒▒ ░█░▒▓█▓░░   ░▓▒░▒░▒▒░░░░░▒▒█▓░░░░░▓███▒░█░▒▒░ ░░▓▓░   ░▒▓▒░▒▒░
▒░░░░░░░  ▒█░  ░░░███░▒▒▒▒░░  ░▒▒░▒▒▒░░░░░▒▒▓▓▒░ ░░█▓▓▒▒▒███░░░░  █▒      ░░▒▒▒▒
▓░▒▒░░░░ ░ ░▓░  ░░███░░░░░█░  ░░░▒░░░░░░░▒▒▒▓▓▒ ░░▒██▒░▒░███░░░░ ▓▒    ░ ░░▒▓▓▒▒
▒░░▒░░░     ░▒▓  ░ █░░░ ░██▓░░░▒▒░ ░   ░░░▒░▒▒▒░░░▓██▓░░▒░█ ░░ ▓░   ░░░░ ░░▒▓▓▒▒
▒░░▒▒▒░░░░      ▒▓▒▒▓▓▓▓▓▒▒▒░░▒░░░░░░░░░░▒▒▒▓▓▒▒▒▒▓▓▒▓▒▓▓▓▓▓░░     ░░░░░▒░▒▓▓▓▓▒
character: 0xffffc5e25077 → A → 65
ABCDEFGHIJKLMNOPQRSTUVWXYZ ## alphabet with printf %s
ABCDEFGHIJKLMNOPQRSTUVWXYZ ## alphabet[i] with while until '\0' null terminator
 ## alphabet[i] with for(i=0;i<26;i++): address → char → decimal → hex → binary
0xffffc5e25058 → A → 65 → 41 → 1000001 | 0xffffc5e25057 → a →  97 → 61 → 1100001
0xffffc5e25059 → B → 66 → 42 → 1000010 | 0xffffc5e25057 → b →  98 → 62 → 1100010
0xffffc5e2505a → C → 67 → 43 → 1000011 | 0xffffc5e25057 → c →  99 → 63 → 1100011
0xffffc5e2505b → D → 68 → 44 → 1000100 | 0xffffc5e25057 → d → 100 → 64 → 1100100
0xffffc5e2505c → E → 69 → 45 → 1000101 | 0xffffc5e25057 → e → 101 → 65 → 1100101
0xffffc5e2505d → F → 70 → 46 → 1000110 | 0xffffc5e25057 → f → 102 → 66 → 1100110
0xffffc5e2505e → G → 71 → 47 → 1000111 | 0xffffc5e25057 → g → 103 → 67 → 1100111
0xffffc5e2505f → H → 72 → 48 → 1001000 | 0xffffc5e25057 → h → 104 → 68 → 1101000
0xffffc5e25060 → I → 73 → 49 → 1001001 | 0xffffc5e25057 → i → 105 → 69 → 1101001
0xffffc5e25061 → J → 74 → 4a → 1001010 | 0xffffc5e25057 → j → 106 → 6a → 1101010
0xffffc5e25062 → K → 75 → 4b → 1001011 | 0xffffc5e25057 → k → 107 → 6b → 1101011
0xffffc5e25063 → L → 76 → 4c → 1001100 | 0xffffc5e25057 → l → 108 → 6c → 1101100
0xffffc5e25064 → M → 77 → 4d → 1001101 | 0xffffc5e25057 → m → 109 → 6d → 1101101
0xffffc5e25065 → N → 78 → 4e → 1001110 | 0xffffc5e25057 → n → 110 → 6e → 1101110
0xffffc5e25066 → O → 79 → 4f → 1001111 | 0xffffc5e25057 → o → 111 → 6f → 1101111
0xffffc5e25067 → P → 80 → 50 → 1010000 | 0xffffc5e25057 → p → 112 → 70 → 1110000
0xffffc5e25068 → Q → 81 → 51 → 1010001 | 0xffffc5e25057 → q → 113 → 71 → 1110001
0xffffc5e25069 → R → 82 → 52 → 1010010 | 0xffffc5e25057 → r → 114 → 72 → 1110010
0xffffc5e2506a → S → 83 → 53 → 1010011 | 0xffffc5e25057 → s → 115 → 73 → 1110011
0xffffc5e2506b → T → 84 → 54 → 1010100 | 0xffffc5e25057 → t → 116 → 74 → 1110100
0xffffc5e2506c → U → 85 → 55 → 1010101 | 0xffffc5e25057 → u → 117 → 75 → 1110101
0xffffc5e2506d → V → 86 → 56 → 1010110 | 0xffffc5e25057 → v → 118 → 76 → 1110110
0xffffc5e2506e → W → 87 → 57 → 1010111 | 0xffffc5e25057 → w → 119 → 77 → 1110111
0xffffc5e2506f → X → 88 → 58 → 1011000 | 0xffffc5e25057 → x → 120 → 78 → 1111000
0xffffc5e25070 → Y → 89 → 59 → 1011001 | 0xffffc5e25057 → y → 121 → 79 → 1111001
0xffffc5e25071 → Z → 90 → 5a → 1011010 | 0xffffc5e25057 → z → 122 → 7a → 1111010
 ## character with for(character=65;character<91;character++):
0xffffc5e25077 → A → 65 → 41 → 1000001 | 0xffffc5e25056 → a →  97 → 61 → 1100001
0xffffc5e25077 → B → 66 → 42 → 1000010 | 0xffffc5e25056 → b →  98 → 62 → 1100010
0xffffc5e25077 → C → 67 → 43 → 1000011 | 0xffffc5e25056 → c →  99 → 63 → 1100011
0xffffc5e25077 → D → 68 → 44 → 1000100 | 0xffffc5e25056 → d → 100 → 64 → 1100100
0xffffc5e25077 → E → 69 → 45 → 1000101 | 0xffffc5e25056 → e → 101 → 65 → 1100101
0xffffc5e25077 → F → 70 → 46 → 1000110 | 0xffffc5e25056 → f → 102 → 66 → 1100110
0xffffc5e25077 → G → 71 → 47 → 1000111 | 0xffffc5e25056 → g → 103 → 67 → 1100111
0xffffc5e25077 → H → 72 → 48 → 1001000 | 0xffffc5e25056 → h → 104 → 68 → 1101000
0xffffc5e25077 → I → 73 → 49 → 1001001 | 0xffffc5e25056 → i → 105 → 69 → 1101001
0xffffc5e25077 → J → 74 → 4a → 1001010 | 0xffffc5e25056 → j → 106 → 6a → 1101010
0xffffc5e25077 → K → 75 → 4b → 1001011 | 0xffffc5e25056 → k → 107 → 6b → 1101011
0xffffc5e25077 → L → 76 → 4c → 1001100 | 0xffffc5e25056 → l → 108 → 6c → 1101100
0xffffc5e25077 → M → 77 → 4d → 1001101 | 0xffffc5e25056 → m → 109 → 6d → 1101101
0xffffc5e25077 → N → 78 → 4e → 1001110 | 0xffffc5e25056 → n → 110 → 6e → 1101110
0xffffc5e25077 → O → 79 → 4f → 1001111 | 0xffffc5e25056 → o → 111 → 6f → 1101111
0xffffc5e25077 → P → 80 → 50 → 1010000 | 0xffffc5e25056 → p → 112 → 70 → 1110000
0xffffc5e25077 → Q → 81 → 51 → 1010001 | 0xffffc5e25056 → q → 113 → 71 → 1110001
0xffffc5e25077 → R → 82 → 52 → 1010010 | 0xffffc5e25056 → r → 114 → 72 → 1110010
0xffffc5e25077 → S → 83 → 53 → 1010011 | 0xffffc5e25056 → s → 115 → 73 → 1110011
0xffffc5e25077 → T → 84 → 54 → 1010100 | 0xffffc5e25056 → t → 116 → 74 → 1110100
0xffffc5e25077 → U → 85 → 55 → 1010101 | 0xffffc5e25056 → u → 117 → 75 → 1110101
0xffffc5e25077 → V → 86 → 56 → 1010110 | 0xffffc5e25056 → v → 118 → 76 → 1110110
0xffffc5e25077 → W → 87 → 57 → 1010111 | 0xffffc5e25056 → w → 119 → 77 → 1110111
0xffffc5e25077 → X → 88 → 58 → 1011000 | 0xffffc5e25056 → x → 120 → 78 → 1111000
0xffffc5e25077 → Y → 89 → 59 → 1011001 | 0xffffc5e25056 → y → 121 → 79 → 1111001
0xffffc5e25077 → Z → 90 → 5a → 1011010 | 0xffffc5e25056 → z → 122 → 7a → 1111010

character: 0xffffc5e25077 → [ → 91 after for loop

 ## Using math.h for float pi = 4 * atan(1.0)
pi = 3.14159274101257324219

 ## Using limits.h to discover: 
INT_MAX :  2147483647
INT_MIN : -2147483648

i: 0xffffc5e25078 → 26 outside Odometer
 ## Odometer is an example of an integer overflow.
i: 0xffffc5e2501c →  2147483645 → 7ffffffd → 01111111111111111111111111111101
i: 0xffffc5e2501c →  2147483646 → 7ffffffe → 01111111111111111111111111111110
i: 0xffffc5e2501c →  2147483647 → 7fffffff → 01111111111111111111111111111111
i: 0xffffc5e2501c → -2147483648 → 80000000 → 10000000000000000000000000000000
i: 0xffffc5e2501c → -2147483647 → 80000001 → 10000000000000000000000000000001
i: 0xffffc5e2501c → -2147483646 → 80000002 → 10000000000000000000000000000010
```
```powershell
$computing = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/Computing
$practical = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/practical
$cat = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/cat
$it = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/information_theory
$decimal = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/Decimal
$binary = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/Binary_number
$bit = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/bit
$byte = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/byte
$ascii = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/ascii
$c = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/C_Programming
$unix = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/unix
$git = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/git
$thinkpad = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/Thinkpad
$wsl = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/Windows_Subsystem_for_Linux
$archlinux = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/archlinux
$hyperV = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/hyperV
$freebsd = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/freebsd
$openzfs = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/openzfs
$gitea = Invoke-RestMethod https://en.wikipedia.org/api/rest_v1/page/summary/gitea
$forge = Invoke-RestMethod 'https://en.wikipedia.org/api/rest_v1/page/summary/Forge_(software)'

$list = @($computing,$practical,$cat,$it,$decimal,$binary,$bit,$byte,$ascii,$c,$unix,$git,$thinkpad,$WSL,$archlinux,$HyperV,$freebsd,$openzfs,$gitea,$forge)
```


## `$list | % {$_ | fl extract}`
```
extract : Computing is any goal-oriented activity that requires, benefits from, or creates computing
          machinery. It includes the study and experimentation of algorithmic processes, and the
          development of both hardware and software. Computing encompasses scientific, engineering,
          mathematical, technological, and social aspects. Major computing disciplines include computer
          engineering, computer science, cybersecurity, data science, information systems, information
          technology, and software engineering.


extract : Pragmatism is a philosophical tradition that views language and thought as tools for prediction,
          problem solving, and action, rather than describing, representing, or mirroring reality.
          Pragmatists contend that most philosophical topics—such as the nature of knowledge, language,
          concepts, meaning, belief, and science—are best viewed in terms of their practical uses and
          successes.


extract : The cat, also called domestic cat and house cat, is a small domesticated carnivorous mammal. It
          is an obligate carnivore, requiring a predominantly meat-based diet. Its retractable claws are
          adapted to killing small prey species such as mice and rats. It has a strong, flexible body,
          quick reflexes, and sharp teeth, and its night vision and sense of smell are well developed. It
          is a social species, but a solitary hunter and a crepuscular predator.
          Cat communication includes meowing, purring, trilling, hissing, growling, grunting, and body
          language. It can hear sounds too faint or too high in frequency for human ears, such as those
          made by small mammals. It secretes and perceives pheromones. Cat intelligence is evident in its
          ability to adapt, learn through observation, and solve problems.
          Female domestic cats can have kittens from spring to late autumn in temperate zones and
          throughout the year in equatorial regions, with litter sizes often ranging from two to five
          kittens.


extract : Information theory is the mathematical study of the quantification, storage, and communication of
          a particular type of mathematically defined information. The field was established and formalized
          by Claude Shannon in the 1940s, though early contributions were made in the 1920s through the
          works of Harry Nyquist and Ralph Hartley.


extract : A decimal system is a numeral system that uses ten as its radix (base). Decimal systems are the
          global standard for denoting integer and non-integer numbers. The way of denoting numbers in a
          decimal system is often referred to as decimal notation. Presently, the most common decimal
          system is the Hindu–Arabic numeral system, which is a positional numeral system. However, there
          are also non-positional base-ten systems, such as Roman or Chinese numerals.


extract : A binary number is a number expressed in the base-2 numeral system or binary numeral system, a
          method for representing numbers that uses only two symbols for the natural numbers: typically 0
          (zero) and 1 (one). A binary number may also refer to a rational number that has a finite
          representation in the binary numeral system, that is, the quotient of an integer by a power of
          two.


extract : The bit is the most basic unit of information in computing and digital communication. The name is
          a portmanteau of binary digit. The bit represents a logical state with one of two possible
          values. These values are most commonly represented as 1 and 0, but other representations such as
          true/false, yes/no, on/off, and +/− are also widely used.


extract : The byte is a unit of digital information that most commonly consists of eight bits.
          Historically, the byte was the number of bits used to encode a single character of text in a
          computer and for this reason it is the smallest addressable unit of memory in many computer
          architectures. To disambiguate arbitrarily sized bytes from the common 8-bit definition, network
          protocol documents such as the Internet Protocol refer to an 8-bit byte as an octet. Those bits
          in an octet are usually counted with numbering from 0 to 7 or 7 to 0 depending on the bit
          endianness.


extract : ASCII, an acronym for American Standard Code for Information Interchange, is a character encoding
          standard for representing a particular set of 95 (English-language–focused) printable and 33
          control characters– a total of 128 code points. The set of available punctuation had significant
          impact on the syntax of computer languages and text markup. ASCII hugely influenced the design of
          character sets used by modern computers; for example, the first 128 code points of Unicode are
          the same as ASCII.


extract : C is a general-purpose programming language created in the 1970s by Dennis Ritchie. By design, C
          gives the programmer relatively direct access to the features of the typical CPU architecture,
          customized for the target instruction set. It has been and continues to be used to implement
          operating systems, device drivers, and protocol stacks, but its use in application software has
          been decreasing. C is used on computers that range from the largest supercomputers to the
          smallest microcontrollers and embedded systems.


extract : Unix is a family of multitasking, multi-user computer operating systems that derive from the
          original AT&T Unix, the development of which started in 1969 at the Bell Labs research center by
          Ken Thompson, Dennis Ritchie, and others. Initially intended for use inside the Bell System, AT&T
          licensed Unix to outside parties in the late 1970s, leading to a variety of both academic and
          commercial Unix variants from vendors including University of California, Berkeley (BSD),
          Microsoft (Xenix), Sun Microsystems (SunOS/Solaris), HP/HPE (HP-UX), and IBM (AIX).


extract : OpenZFS is an open-source implementation of the ZFS file system and volume manager initially
          developed by Sun Microsystems for the Solaris operating system, and is now maintained by the
          OpenZFS Project. Similar to the original ZFS, the implementation supports features like data
          compression, data deduplication, copy-on-write clones, snapshots, RAID-Z, and virtual devices
          that can create filesystems that span multiple disks.


extract : Git is a distributed version control software system that is capable of managing versions of
          source code or data. It is often used to control source code by programmers who are developing
          software collaboratively.


extract : ThinkPad is a line of business-oriented laptop and tablet computers produced since 1992. It was
          originally designed, created and manufactured by the American International Business Machines
          (IBM) Corporation. IBM sold its PC business to the Chinese company Lenovo in 2005; since 2007,
          all ThinkPad models have been manufactured by Lenovo.


extract : Windows Subsystem for Linux (WSL) is a component of Microsoft Windows that allows the use of a
          Linux environment from within Windows, forgoing the overhead of a virtual machine and being an
          alternative to dual booting. The WSL command-line interface tool is installed by default in
          Windows 11, but a distribution must be downloaded and installed through it before use. In Windows
          10, WSL can be installed either by joining the Windows Insider program or manually via Microsoft
          Store or Winget.


extract : Arch Linux is an open source, rolling release Linux distribution. Arch Linux is kept up-to-date
          by regularly updating the individual pieces of software that it comprises. It provides monthly
          "snapshots" which are used as installation media. Arch Linux is intentionally minimal, and is
          meant to be configured by the user during installation to add only what is needed.


extract : Hyper-V is a native hypervisor developed by Microsoft; it can create virtual machines on x86-64
          systems running Windows. It is included in Pro and Enterprise editions of Windows as an optional
          feature to be manually enabled. A server computer running Hyper-V can be configured to expose
          individual virtual machines to one or more networks.


extract : FreeBSD is a free and open-source Unix-like operating system descended from the Berkeley Software
          Distribution (BSD), a version of Unix developed at the University of California, Berkeley. The
          project began in 1993 as an outgrowth of 386BSD and released FreeBSD 1.0 later that year. It is
          developed as a complete operating system, with the kernel, device drivers, userland utilities,
          build system and documentation maintained in a single source tree.


extract : Gitea is a forge software package for hosting software development version control using Git as
          well as other collaborative features like bug tracking, code review, continuous integration,
          kanban boards, tickets, and wikis. It supports self-hosting and also provides a free public
          first-party instance. It is a fork of Gogs and is written in Go and TypeScript. Gitea can be
          hosted on all platforms supported by Go including FreeBSD, Linux, macOS, OpenBSD, and Windows.
          The project is funded on Open Collective.


extract : In free and open-source software (FOSS) development communities, a forge is a web-based
          collaborative software platform for both developing and sharing computer applications.
```
|  128 |  64 |  32 |  16 |   8 |   4 |   2 |   1 |      |      |   100 |   10 |   1 |
|  --: | --: | --: | --: | --: | --: | --: | --: |  --: |  --: |   --: |  --: | --: |
|    1 |   1 |   1 |   1 |   1 |   1 |   1 |   1 |      |      |      2|    5|     5|   
