#if defined(_MSC_VER) && !defined(__GNUC__)
#  define FORCEINLINE __forceinline
#else
#  define FORCEINLINE __inline
#endif

#if defined(_MSC_VER) && !defined(__GNUC__)
FORCEINLINE int PopCnt(uint64_t a) {
  __asm {
    mov ecx, dword ptr a
    xor eax, eax
    test ecx, ecx
    jz l1
l0: lea edx,[ecx - 1]
    inc eax
    and ecx, edx
    jnz l0
l1: mov ecx, dword ptr a + 4
    test ecx, ecx
    jz l3
l2: lea edx,[ecx - 1]
    inc eax
    and ecx, edx
    jnz l2
l3:
  }
}
#else
FORCEINLINE int PopCnt(uint64_t a) {
  int count = 0;
  uint64_t x = a;
  while (x) {
    count += x & 1;
    x >>= 1;
  }
  return count;
}
#endif

#if defined(_MSC_VER) && !defined(__GNUC__)
FORCEINLINE int MSB(uint64_t a) {
  __asm {
    bsr edx, dword ptr a + 4
    mov eax, 31
    jnz l1
    bsr edx, dword ptr a
    mov eax, 63
    jnz l1
    mov edx, -1
l1: sub eax, edx
  }
}
#else
FORCEINLINE int MSB(uint64_t a) {
  if (a == 0) return -1;
  int idx = 0;
  uint64_t x = a;
  while (x >>= 1) idx++;
  return idx;
}
#endif

#if defined(_MSC_VER) && !defined(__GNUC__)
FORCEINLINE int LSB(uint64_t a) {
  __asm {
    bsf edx, dword ptr a
    mov eax, 63
    jnz l1
    bsf edx, dword ptr a + 4
    mov eax, 31
    jnz l1
    mov edx, -33
l1: sub eax, edx
  }
}
#else
FORCEINLINE int LSB(uint64_t a) {
  if (a == 0) return -1;
  int idx = 0;
  uint64_t x = a;
  while (!(x & 1)) {
    x >>= 1;
    idx++;
  }
  return idx;
}
#endif
