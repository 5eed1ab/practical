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
OpenZFS                     Open-source implementation of ZFS file system
Git                         Distributed version control software system
ThinkPad                    Business laptops and tablets series from Lenovo
Windows Subsystem for Linux Feature for a Linux environment in Windows
Arch Linux                  Rolling release Linux distribution
Hyper-V                     Native hypervisor by Microsoft
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
character: 0xfffffc8622f7 → A → 65
ABCDEFGHIJKLMNOPQRSTUVWXYZ ## alphabet with printf %s
ABCDEFGHIJKLMNOPQRSTUVWXYZ ## alphabet[i] with while until '\0' null terminator
 ## alphabet[i] with for(i=0;i<26;i++): address → char → decimal → binary
0xfffffc8622d8 → A → 65 → 1000001 | 0xfffffc8622d7 → a →  97 → 1100001
0xfffffc8622d9 → B → 66 → 1000010 | 0xfffffc8622d7 → b →  98 → 1100010
0xfffffc8622da → C → 67 → 1000011 | 0xfffffc8622d7 → c →  99 → 1100011
0xfffffc8622db → D → 68 → 1000100 | 0xfffffc8622d7 → d → 100 → 1100100
0xfffffc8622dc → E → 69 → 1000101 | 0xfffffc8622d7 → e → 101 → 1100101
0xfffffc8622dd → F → 70 → 1000110 | 0xfffffc8622d7 → f → 102 → 1100110
0xfffffc8622de → G → 71 → 1000111 | 0xfffffc8622d7 → g → 103 → 1100111
0xfffffc8622df → H → 72 → 1001000 | 0xfffffc8622d7 → h → 104 → 1101000
0xfffffc8622e0 → I → 73 → 1001001 | 0xfffffc8622d7 → i → 105 → 1101001
0xfffffc8622e1 → J → 74 → 1001010 | 0xfffffc8622d7 → j → 106 → 1101010
0xfffffc8622e2 → K → 75 → 1001011 | 0xfffffc8622d7 → k → 107 → 1101011
0xfffffc8622e3 → L → 76 → 1001100 | 0xfffffc8622d7 → l → 108 → 1101100
0xfffffc8622e4 → M → 77 → 1001101 | 0xfffffc8622d7 → m → 109 → 1101101
0xfffffc8622e5 → N → 78 → 1001110 | 0xfffffc8622d7 → n → 110 → 1101110
0xfffffc8622e6 → O → 79 → 1001111 | 0xfffffc8622d7 → o → 111 → 1101111
0xfffffc8622e7 → P → 80 → 1010000 | 0xfffffc8622d7 → p → 112 → 1110000
0xfffffc8622e8 → Q → 81 → 1010001 | 0xfffffc8622d7 → q → 113 → 1110001
0xfffffc8622e9 → R → 82 → 1010010 | 0xfffffc8622d7 → r → 114 → 1110010
0xfffffc8622ea → S → 83 → 1010011 | 0xfffffc8622d7 → s → 115 → 1110011
0xfffffc8622eb → T → 84 → 1010100 | 0xfffffc8622d7 → t → 116 → 1110100
0xfffffc8622ec → U → 85 → 1010101 | 0xfffffc8622d7 → u → 117 → 1110101
0xfffffc8622ed → V → 86 → 1010110 | 0xfffffc8622d7 → v → 118 → 1110110
0xfffffc8622ee → W → 87 → 1010111 | 0xfffffc8622d7 → w → 119 → 1110111
0xfffffc8622ef → X → 88 → 1011000 | 0xfffffc8622d7 → x → 120 → 1111000
0xfffffc8622f0 → Y → 89 → 1011001 | 0xfffffc8622d7 → y → 121 → 1111001
0xfffffc8622f1 → Z → 90 → 1011010 | 0xfffffc8622d7 → z → 122 → 1111010
 ## character with for(character=65;character<91;character++):
0xfffffc8622f7 → A → 65 → 1000001 | 0xfffffc8622d6 → a →  97 → 1100001
0xfffffc8622f7 → B → 66 → 1000010 | 0xfffffc8622d6 → b →  98 → 1100010
0xfffffc8622f7 → C → 67 → 1000011 | 0xfffffc8622d6 → c →  99 → 1100011
0xfffffc8622f7 → D → 68 → 1000100 | 0xfffffc8622d6 → d → 100 → 1100100
0xfffffc8622f7 → E → 69 → 1000101 | 0xfffffc8622d6 → e → 101 → 1100101
0xfffffc8622f7 → F → 70 → 1000110 | 0xfffffc8622d6 → f → 102 → 1100110
0xfffffc8622f7 → G → 71 → 1000111 | 0xfffffc8622d6 → g → 103 → 1100111
0xfffffc8622f7 → H → 72 → 1001000 | 0xfffffc8622d6 → h → 104 → 1101000
0xfffffc8622f7 → I → 73 → 1001001 | 0xfffffc8622d6 → i → 105 → 1101001
0xfffffc8622f7 → J → 74 → 1001010 | 0xfffffc8622d6 → j → 106 → 1101010
0xfffffc8622f7 → K → 75 → 1001011 | 0xfffffc8622d6 → k → 107 → 1101011
0xfffffc8622f7 → L → 76 → 1001100 | 0xfffffc8622d6 → l → 108 → 1101100
0xfffffc8622f7 → M → 77 → 1001101 | 0xfffffc8622d6 → m → 109 → 1101101
0xfffffc8622f7 → N → 78 → 1001110 | 0xfffffc8622d6 → n → 110 → 1101110
0xfffffc8622f7 → O → 79 → 1001111 | 0xfffffc8622d6 → o → 111 → 1101111
0xfffffc8622f7 → P → 80 → 1010000 | 0xfffffc8622d6 → p → 112 → 1110000
0xfffffc8622f7 → Q → 81 → 1010001 | 0xfffffc8622d6 → q → 113 → 1110001
0xfffffc8622f7 → R → 82 → 1010010 | 0xfffffc8622d6 → r → 114 → 1110010
0xfffffc8622f7 → S → 83 → 1010011 | 0xfffffc8622d6 → s → 115 → 1110011
0xfffffc8622f7 → T → 84 → 1010100 | 0xfffffc8622d6 → t → 116 → 1110100
0xfffffc8622f7 → U → 85 → 1010101 | 0xfffffc8622d6 → u → 117 → 1110101
0xfffffc8622f7 → V → 86 → 1010110 | 0xfffffc8622d6 → v → 118 → 1110110
0xfffffc8622f7 → W → 87 → 1010111 | 0xfffffc8622d6 → w → 119 → 1110111
0xfffffc8622f7 → X → 88 → 1011000 | 0xfffffc8622d6 → x → 120 → 1111000
0xfffffc8622f7 → Y → 89 → 1011001 | 0xfffffc8622d6 → y → 121 → 1111001
0xfffffc8622f7 → Z → 90 → 1011010 | 0xfffffc8622d6 → z → 122 → 1111010

character: 0xfffffc8622f7 → [ → 91 after for loop

 ## Using math.h for float pi = 4 * atan(1.0)
pi = 3.14159274101257324219

 ## Using limits.h to discover: 
INT_MAX :  2147483647
INT_MIN : -2147483648

i: 0xfffffc8622f8 → 26 outside Odometer
 ## Odometer is an example of an integer overflow.
i: 0xfffffc8622ac →  2147483645 → 01111111111111111111111111111101
i: 0xfffffc8622ac →  2147483646 → 01111111111111111111111111111110
i: 0xfffffc8622ac →  2147483647 → 01111111111111111111111111111111
i: 0xfffffc8622ac → -2147483648 → 10000000000000000000000000000000
i: 0xfffffc8622ac → -2147483647 → 10000000000000000000000000000001
i: 0xfffffc8622ac → -2147483646 → 10000000000000000000000000000010
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
