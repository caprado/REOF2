void func_00163f98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163f98: addiu $sp, $sp, -0x10
    func_0015fcb0();  // 0x15fc80                                // 0x00163fa4: jal 0x15fc80
    if (v0 != 0) goto label_0x163fc8;                           // 0x00163fac: bnez $v0, 0x163fc8
    a0 = 0x23 << 16;                                            // 0x00163fb4: lui $a0, 0x23
    func_001634a8();  // 0x163410                                // 0x00163fb8: jal 0x163410
    a0 = &str_00228df0;  // "(c)CRI"                            // 0x00163fbc: addiu $a0, $a0, -0x7210
    goto label_0x163fd8;                                        // 0x00163fc0: b 0x163fd8
label_0x163fc8:
    func_00163f88();  // 0x163f80                                // 0x00163fc8: jal 0x163f80
    /* nop */                                                   // 0x00163fcc: nop 
    v0 = v0 ^ 1;                                                // 0x00163fd0: xori $v0, $v0, 1
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00163fd4: sltu $v0, $zero, $v0
label_0x163fd8:
    return;                                                     // 0x00163fe0: jr $ra
    sp = sp + 0x10;                                             // 0x00163fe4: addiu $sp, $sp, 0x10
}