void func_00144b70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x10;                                                  // 0x00144b74: addiu $v0, $zero, 0x10
    a0 = *(int32_t*)(t2);                                       // 0x00144b78: lw $a0, 0($t2)
    t1 = v0 << a1;                                              // 0x00144b7c: sllv $t1, $v0, $a1
    v1 = a0 >> 1;                                               // 0x00144b80: sra $v1, $a0, 1
    if (a2 <= 0) goto label_0x144bb8;                           // 0x00144b84: blez $a2, 0x144bb8
    if (t0 != 0) a0 = v1;                                       // 0x00144b88: movn $a0, $v1, $t0
    v0 = a2 + -1;                                               // 0x00144b8c: addiu $v0, $a2, -1
    a0 = a0 + 1;                                                // 0x00144b90: addiu $a0, $a0, 1
    v0 = v0 << a1;                                              // 0x00144b94: sllv $v0, $v0, $a1
    v0 = v0 + a3;                                               // 0x00144b98: addu $v0, $v0, $a3
    a0 = a0 + v0;                                               // 0x00144b9c: addu $a0, $a0, $v0
    v1 = (a0 < t1) ? 1 : 0;                                     // 0x00144ba0: slt $v1, $a0, $t1
    if (v1 != 0) goto label_0x144bec;                           // 0x00144ba4: bnez $v1, 0x144bec
    v0 = a0 << 1;                                               // 0x00144ba8: sll $v0, $a0, 1
    v0 = t1 << 1;                                               // 0x00144bac: sll $v0, $t1, 1
    goto label_0x144be8;                                        // 0x00144bb0: b 0x144be8
    a0 = a0 - v0;                                               // 0x00144bb4: subu $a0, $a0, $v0
label_0x144bb8:
    if (a2 >= 0) goto label_0x144bec;                           // 0x00144bb8: bgez $a2, 0x144bec
    v0 = a0 << 1;                                               // 0x00144bbc: sll $v0, $a0, 1
    v0 = ~(0 | a2);                                             // 0x00144bc0: nor $v0, $zero, $a2
    a0 = a0 + -1;                                               // 0x00144bc4: addiu $a0, $a0, -1
    v0 = v0 << a1;                                              // 0x00144bc8: sllv $v0, $v0, $a1
    v1 = -t1;                                                   // 0x00144bcc: negu $v1, $t1
    v0 = v0 + a3;                                               // 0x00144bd0: addu $v0, $v0, $a3
    a0 = a0 - v0;                                               // 0x00144bd4: subu $a0, $a0, $v0
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x00144bd8: slt $v1, $a0, $v1
    if (v1 == 0) goto label_0x144be8;                           // 0x00144bdc: beqz $v1, 0x144be8
    v0 = t1 << 1;                                               // 0x00144be0: sll $v0, $t1, 1
    a0 = a0 + v0;                                               // 0x00144be4: addu $a0, $a0, $v0
label_0x144be8:
    v0 = a0 << 1;                                               // 0x00144be8: sll $v0, $a0, 1
label_0x144bec:
    if (t0 == 0) v0 = a0;                                       // 0x00144bec: movz $v0, $a0, $t0
    return;                                                     // 0x00144bf0: jr $ra
    *(uint32_t*)(t2) = v0;                                      // 0x00144bf4: sw $v0, 0($t2)
}