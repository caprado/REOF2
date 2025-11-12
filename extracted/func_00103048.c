void func_00103048() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a1 == 0) goto label_0x103074;                           // 0x00103048: beqz $a1, 0x103074
    v0 = a1 + -1;                                               // 0x0010304c: addiu $v0, $a1, -1
    v1 = -1;                                                    // 0x00103050: addiu $v1, $zero, -1
    /* nop */                                                   // 0x00103054: nop 
label_0x103058:
    *(uint8_t*)(a0) = 0;                                        // 0x00103058: sb $zero, 0($a0)
    v0 = v0 + -1;                                               // 0x0010305c: addiu $v0, $v0, -1
    a0 = a0 + 1;                                                // 0x00103060: addiu $a0, $a0, 1
    /* nop */                                                   // 0x00103064: nop 
    /* nop */                                                   // 0x00103068: nop 
    if (v0 != v1) goto label_0x103058;                          // 0x0010306c: bne $v0, $v1, 0x103058
    /* nop */                                                   // 0x00103070: nop 
label_0x103074:
    return;                                                     // 0x00103074: jr $ra
    /* nop */                                                   // 0x00103078: nop 
}