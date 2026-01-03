void func_001af880() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001af880: addiu $sp, $sp, -0x20
    func_001afb40();  // 1afb40                                // 0x001af88c: jal 0x1afb40
    v1 = 3;                                                     // 0x001af894: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1af8e4;                          // 0x001af898: beq $v0, $v1, 0x1af8e4
    v1 = 2;                                                     // 0x001af89c: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1af8e4;                          // 0x001af8a0: beq $v0, $v1, 0x1af8e4
    /* nop */                                                   // 0x001af8a4: nop 
    v1 = 1;                                                     // 0x001af8a8: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1af8d8;                          // 0x001af8ac: beq $v0, $v1, 0x1af8d8
    if (v0 == 0) goto label_0x1af8c4;                           // 0x001af8b4: beqz $v0, 0x1af8c4
    goto label_0x1af8e8;                                        // 0x001af8bc: b 0x1af8e8
label_0x1af8c4:
    func_007d3b40();  // 0x7d3b40                               // 0x001af8c8: jal 0x7d3b40
    goto label_0x1af8e4;                                        // 0x001af8d0: b 0x1af8e4
    /* nop */                                                   // 0x001af8d4: nop 
label_0x1af8d8:
    func_007d3320();  // 0x7d3320                               // 0x001af8dc: jal 0x7d3320
label_0x1af8e4:
label_0x1af8e8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001af8e8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001af8ec: jr $ra
    sp = sp + 0x20;                                             // 0x001af8f0: addiu $sp, $sp, 0x20
}