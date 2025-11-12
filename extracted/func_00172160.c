void func_00172160() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x48);                              // 0x00172160: lw $v1, 0x48($a0)
    v1 = v1 + -1;                                               // 0x00172164: addiu $v1, $v1, -1
    v1 = ((unsigned)v1 < (unsigned)4) ? 1 : 0;                  // 0x00172168: sltiu $v1, $v1, 4
    if (v1 == 0) goto label_0x17217c;                           // 0x0017216c: beqz $v1, 0x17217c
    v0 = 1;                                                     // 0x00172170: addiu $v0, $zero, 1
    v0 = *(int32_t*)((a0) + 0x44);                              // 0x00172174: lw $v0, 0x44($a0)
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x00172178: sltiu $v0, $v0, 1
label_0x17217c:
    return;                                                     // 0x0017217c: jr $ra
    /* nop */                                                   // 0x00172180: nop 
}