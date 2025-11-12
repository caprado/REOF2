void func_0016a258() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a1 <= 0) goto label_0x16a28c;                           // 0x0016a258: blez $a1, 0x16a28c
    v1 = *(uint8_t*)(a0);                                       // 0x0016a260: lbu $v1, 0($a0)
    /* nop */                                                   // 0x0016a264: nop 
    a0 = a0 + 1;                                                // 0x0016a268: addiu $a0, $a0, 1
    if (v1 != 0) goto label_0x16a290;                           // 0x0016a26c: bnez $v1, 0x16a290
    a2 = a2 + 1;                                                // 0x0016a274: addiu $a2, $a2, 1
    v0 = (a2 < a1) ? 1 : 0;                                     // 0x0016a278: slt $v0, $a2, $a1
    /* nop */                                                   // 0x0016a27c: nop 
    /* nop */                                                   // 0x0016a280: nop 
    /* bnezl $v0, 0x16a268 */                                   // 0x0016a284: bnezl $v0, 0x16a268
    v1 = *(uint8_t*)(a0);                                       // 0x0016a288: lbu $v1, 0($a0)
label_0x16a28c:
    v0 = 1;                                                     // 0x0016a28c: addiu $v0, $zero, 1
label_0x16a290:
    return;                                                     // 0x0016a290: jr $ra
    /* nop */                                                   // 0x0016a294: nop 
}