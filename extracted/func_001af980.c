void func_001af980() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001af980: addiu $sp, $sp, -0x20
    func_001afb80();  // 0x1afb40                                // 0x001af98c: jal 0x1afb40
    v1 = 3;                                                     // 0x001af994: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1af9e4;                          // 0x001af998: beq $v0, $v1, 0x1af9e4
    v1 = 2;                                                     // 0x001af99c: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1af9e4;                          // 0x001af9a0: beq $v0, $v1, 0x1af9e4
    /* nop */                                                   // 0x001af9a4: nop 
    v1 = 1;                                                     // 0x001af9a8: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1af9d4;                          // 0x001af9ac: beq $v0, $v1, 0x1af9d4
    if (v0 == 0) goto label_0x1af9c4;                           // 0x001af9b4: beqz $v0, 0x1af9c4
    goto label_0x1af9e8;                                        // 0x001af9bc: b 0x1af9e8
    v0 = 1;                                                     // 0x001af9c0: addiu $v0, $zero, 1
label_0x1af9c4:
    func_007d3c50();  // 0x7d3c50                               // 0x001af9c4: jal 0x7d3c50
    /* nop */                                                   // 0x001af9c8: nop 
    goto label_0x1af9ec;                                        // 0x001af9cc: b 0x1af9ec
label_0x1af9d4:
    func_007d34c0();  // 0x7d34c0                               // 0x001af9d4: jal 0x7d34c0
    /* nop */                                                   // 0x001af9d8: nop 
    goto label_0x1af9e8;                                        // 0x001af9dc: b 0x1af9e8
    /* nop */                                                   // 0x001af9e0: nop 
label_0x1af9e4:
    v0 = 1;                                                     // 0x001af9e4: addiu $v0, $zero, 1
label_0x1af9e8:
label_0x1af9ec:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001af9ec: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001af9f0: jr $ra
    sp = sp + 0x20;                                             // 0x001af9f4: addiu $sp, $sp, 0x20
}