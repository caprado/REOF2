void func_001d0000() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a1 >= 0) goto label_0x1d0014;                           // 0x001d0004: bgez $a1, 0x1d0014
    t1 = a1 >> 1;                                               // 0x001d0008: sra $t1, $a1, 1
    v1 = a1 + 1;                                                // 0x001d000c: addiu $v1, $a1, 1
    t1 = v1 >> 1;                                               // 0x001d0010: sra $t1, $v1, 1
label_0x1d0014:
    goto label_0x1d0038;                                        // 0x001d0014: b 0x1d0038
    a1 = a1 + -1;                                               // 0x001d0018: addiu $a1, $a1, -1
label_0x1d001c:
    t0 = a0 + t2;                                               // 0x001d001c: addu $t0, $a0, $t2
    a3 = a0 + v1;                                               // 0x001d0020: addu $a3, $a0, $v1
    a2 = *(uint8_t*)(t0);                                       // 0x001d0024: lbu $a2, 0($t0)
    v1 = *(uint8_t*)(a3);                                       // 0x001d0028: lbu $v1, 0($a3)
    t2 = t2 + 1;                                                // 0x001d002c: addiu $t2, $t2, 1
    *(uint8_t*)(t0) = v1;                                       // 0x001d0030: sb $v1, 0($t0)
    *(uint8_t*)(a3) = a2;                                       // 0x001d0034: sb $a2, 0($a3)
label_0x1d0038:
    v1 = (t2 < t1) ? 1 : 0;                                     // 0x001d0038: slt $v1, $t2, $t1
    if (v1 != 0) goto label_0x1d001c;                           // 0x001d003c: bnez $v1, 0x1d001c
    v1 = a1 - t2;                                               // 0x001d0040: subu $v1, $a1, $t2
    return;                                                     // 0x001d0044: jr $ra
    /* nop */                                                   // 0x001d0048: nop 
}