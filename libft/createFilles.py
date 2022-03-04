import sys

list = """isalpha
isdigit
isalnum
isascii
isprint
strlen
memset
bzero
memcpy
memmove
strlcpy
strlcat
toupper
tolower
strchr
strrchr
strncmp
memchr
memcmp
strnstr
atoi
calloc
strdup"""

cFiles = ["ft_" + cFile + ".c" for cFile in list.split("\n")]

for cFile in cFiles:
    with open(cFile, "w"):
        pass

# print(" ".join(cFiles))
