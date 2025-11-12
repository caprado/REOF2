void func_001086f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0x10);                              // 0x001086f0: lw $v0, 0x10($a0)
    v1 = *(int32_t*)((a1) + 0x10);                              // 0x001086f4: lw $v1, 0x10($a1)
    v0 = v0 - v1;                                               // 0x001086f8: subu $v0, $v0, $v1
    if (v0 != 0) goto label_0x108750;                           // 0x001086fc: bnez $v0, 0x108750
    /* nop */                                                   // 0x00108700: nop 
    v1 = v1 << 2;                                               // 0x00108704: sll $v1, $v1, 2
    t2 = a0 + 0x14;                                             // 0x00108708: addiu $t2, $a0, 0x14
    v0 = a1 + 0x14;                                             // 0x0010870c: addiu $v0, $a1, 0x14
    a3 = t2 + v1;                                               // 0x00108710: addu $a3, $t2, $v1
    t1 = v0 + v1;                                               // 0x00108714: addu $t1, $v0, $v1
    a3 = a3 + -4;                                               // 0x00108718: addiu $a3, $a3, -4
    /* nop */                                                   // 0x0010871c: nop 
    t1 = t1 + -4;                                               // 0x00108720: addiu $t1, $t1, -4
    a1 = *(int32_t*)(a3);                                       // 0x00108724: lw $a1, 0($a3)
    a2 = 1;                                                     // 0x00108728: addiu $a2, $zero, 1
    a0 = *(int32_t*)(t1);                                       // 0x0010872c: lw $a0, 0($t1)
    v0 = -1;                                                    // 0x00108730: addiu $v0, $zero, -1
    t0 = ((unsigned)t2 < (unsigned)a3) ? 1 : 0;                 // 0x00108734: sltu $t0, $t2, $a3
    v1 = ((unsigned)a1 < (unsigned)a0) ? 1 : 0;                 // 0x00108738: sltu $v1, $a1, $a0
    if (a1 != a0) goto label_0x108750;                          // 0x0010873c: bne $a1, $a0, 0x108750
    if (v1 == 0) v0 = a2;                                       // 0x00108740: movz $v0, $a2, $v1
    /* bnezl $t0, 0x108720 */                                   // 0x00108744: bnezl $t0, 0x108720
    a3 = a3 + -4;                                               // 0x00108748: addiu $a3, $a3, -4
label_0x108750:
    return;                                                     // 0x00108750: jr $ra
    /* nop */                                                   // 0x00108754: nop 
}