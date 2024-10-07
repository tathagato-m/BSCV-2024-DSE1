rom sys import argv

def DecryptChar(ciphC, ciphKey):
  plainC = ciphC
  return plainC


if __name__=='__main__':
  file = open(argv[1], 'r')
  ciphKey = 3
  while 1:
    # read by character
    char = file.read(1)
    if not char:
      break

    plainC = DecryptChar(char, ciphKey)
    print(plainC);

  file.close()
