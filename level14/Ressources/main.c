#include <string.h>
#include <stdio.h>

char * ft_des(char *param_1) {
  char cVar1;
  char *code;
  unsigned int uVar3;
  char *pcVar4;
  char bVar5;
  unsigned int local_20;
  int local_1c;
  
  bVar5 = 0;
  code = strdup(param_1);
  local_1c = 0;
  local_20 = 0;
  do {
    uVar3 = 0xffffffff;
    pcVar4 = code;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (unsigned int)bVar5 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 <= local_20) {
      return code;
    }
    if (local_1c == 6) {
      local_1c = 0;
    }
    if ((local_20 & 1) == 0) {
      if ((local_20 & 1) == 0) {
        for (int i = 0; i < "0123456"[local_1c]; i++) {
          code[local_20] = code[local_20] + -1;
          if (code[local_20] == '\x1f') {
            code[local_20] = '~';
          }
        }
      }
    }
    else {
      for (int i = 0; i < "0123456"[local_1c]; i++) {
        code[local_20] = code[local_20] + '\x01';
        if (code[local_20] == '\x7f') {
          code[local_20] = ' ';
        }
      }
    }
    local_20 = local_20 + 1;
    local_1c = local_1c + 1;
  } while(1);
}

int main(int ac, char **av) {
    printf("%s\n", ft_des("g <t61:|4_|!@IF.-62FH&G~DCK/Ekrvvdwz?v|"));
    return (0);
}