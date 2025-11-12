void func_00199b40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x7000 << 16;                                          // 0x00199b40: lui $v1, 0x7000
    t2 = 1;                                                     // 0x00199b44: addiu $t2, $zero, 1
    t3 = v1 | 0x3700;                                           // 0x00199b48: ori $t3, $v1, 0x3700
label_0x199b4c:
    v1 = a1 & t2;                                               // 0x00199b4c: and $v1, $a1, $t2
    if (v1 == 0) goto label_0x199b78;                           // 0x00199b50: beqz $v1, 0x199b78
    /* nop */                                                   // 0x00199b54: nop 
    /* FPU: ori.b $w0, $w0, 0x66 */                             // 0x00199b58: ori.b $w0, $w0, 0x66
    /* FPU: adds_s.d $w0, $w0, $w7 */                           // 0x00199b5c: adds_s.d $w0, $w0, $w7
    /* FPU: ld.b $w0, 0x168($zero) */                           // 0x00199b60: ld.b $w0, 0x168($zero)
    /* FPU: addu.qb $zero, $a0, $a3 */                          // 0x00199b6c: addu.qb $zero, $a0, $a3
    /* FPU: dpa.w.ph $ac0, $a0, $t1 */                          // 0x00199b74: dpa.w.ph $ac0, $a0, $t1
label_0x199b78:
    t2 = t2 << 1;                                               // 0x00199b78: sll $t2, $t2, 1
    a0 = a0 + 0x40;                                             // 0x00199b7c: addiu $a0, $a0, 0x40
    if (t2 != 0) goto label_0x199b4c;                           // 0x00199b80: bnez $t2, 0x199b4c
    t3 = t3 + 0x40;                                             // 0x00199b84: addiu $t3, $t3, 0x40
    return;                                                     // 0x00199b88: jr $ra
    /* nop */                                                   // 0x00199b8c: nop 
}