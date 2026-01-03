void func_0017fe30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017fe30: addiu $sp, $sp, -0x10
    func_0011d320();  // 11d320                                // 0x0017fe38: jal 0x11d320
    /* nop */                                                   // 0x0017fe3c: nop 
    v1 = 0x1000 << 16;                                          // 0x0017fe40: lui $v1, 0x1000
    a0 = 0x1000 << 16;                                          // 0x0017fe44: lui $a0, 0x1000
    v1 = v1 | 0x3830;                                           // 0x0017fe48: ori $v1, $v1, 0x3830
    a0 = a0 | 0x3820;                                           // 0x0017fe4c: ori $a0, $a0, 0x3820
    g_10000000 = 0;  // Global at 0x10000000                    // 0x0017fe50: sw $zero, 0($v1)
    a1 = 0x1000 << 16;                                          // 0x0017fe54: lui $a1, 0x1000
    g_10000000 = 0;  // Global at 0x10000000                    // 0x0017fe58: sw $zero, 0($a0)
    a1 = a1 | 0x3810;                                           // 0x0017fe5c: ori $a1, $a1, 0x3810
    v1 = 1;                                                     // 0x0017fe60: addiu $v1, $zero, 1
    g_10000000 = v1;  // Global at 0x10000000                   // 0x0017fe64: sw $v1, 0($a1)
    t0 = t0 | 2;                                                // 0x0017fe6c: ori $t0, $t0, 2
    /* memory sync */                                           // 0x0017fe74: sync 0x10
    a1 = 0x21 << 16;                                            // 0x0017fe78: lui $a1, 0x21
    a2 = 0x1000 << 16;                                          // 0x0017fe7c: lui $a2, 0x1000
    a1 = a1 + 0x5fb0;                                           // 0x0017fe80: addiu $a1, $a1, 0x5fb0
    a2 = a2 | 0x4000;                                           // 0x0017fe84: ori $a2, $a2, 0x4000
    /* FPU: andi.b $w0, $w0, 0xa3 */                            // 0x0017fe88: andi.b $w0, $w0, 0xa3
    /* FPU: adds_a.h $w0, $w0, $w4 */                           // 0x0017fe90: adds_a.h $w0, $w0, $w4
    if (v0 == 0) goto label_0x17fea8;                           // 0x0017fe98: beqz $v0, 0x17fea8
    return func_0011d390();  // Tail call                        // 0x0017fea0: j 0x11d378
    sp = sp + 0x10;                                             // 0x0017fea4: addiu $sp, $sp, 0x10
label_0x17fea8:
    return;                                                     // 0x0017fea8: jr $ra
    sp = sp + 0x10;                                             // 0x0017feac: addiu $sp, $sp, 0x10
}