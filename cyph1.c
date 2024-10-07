from sys import argv

def EncryptChar(plainC,ciphKey):
  ciphC = plainC
  return ciphC


if __name__=='__main__':

  file1 = open(argv[1], 'r')
  file2 = open(argv[2], 'w')
  ciphKey = 3
  while 1:
    # read by character
    char = file1.read(1)        
    if not char:
      break

    ciphC = EncryptChar(char, ciphKey)
    file2.write(ciphC)

  file1.close()
  file2.close()
