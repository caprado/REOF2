void func_001af750() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001af750: addiu $sp, $sp, -0x20
    func_001afb40();  // 1afb40                                // 0x001af75c: jal 0x1afb40
    v1 = 3;                                                     // 0x001af764: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1af7b4;                          // 0x001af768: beq $v0, $v1, 0x1af7b4
    v1 = 2;                                                     // 0x001af76c: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1af7b4;                          // 0x001af770: beq $v0, $v1, 0x1af7b4
    /* nop */                                                   // 0x001af774: nop 
    v1 = 1;                                                     // 0x001af778: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1af7a4;                          // 0x001af77c: beq $v0, $v1, 0x1af7a4
    if (v0 == 0) goto label_0x1af794;                           // 0x001af784: beqz $v0, 0x1af794
    goto label_0x1af7b8;                                        // 0x001af78c: b 0x1af7b8
    v0 = s0 ^ 0;                                                // 0x001af790: xor $v0, $s0, $zero
label_0x1af794:
    func_007d3d20();  // 0x7d3d20                               // 0x001af794: jal 0x7d3d20
    /* nop */                                                   // 0x001af798: nop 
    goto label_0x1af7c0;                                        // 0x001af79c: b 0x1af7c0
label_0x1af7a4:
    func_007d35e0();  // 0x7d35e0                               // 0x001af7a4: jal 0x7d35e0
    /* nop */                                                   // 0x001af7a8: nop 
    goto label_0x1af7bc;                                        // 0x001af7ac: b 0x1af7bc
    /* nop */                                                   // 0x001af7b0: nop 
label_0x1af7b4:
    v0 = s0 ^ 0;                                                // 0x001af7b4: xor $v0, $s0, $zero
label_0x1af7b8:
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001af7b8: sltiu $v0, $v0, 1
label_0x1af7bc:
label_0x1af7c0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001af7c0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001af7c4: jr $ra
    sp = sp + 0x20;                                             // 0x001af7c8: addiu $sp, $sp, 0x20
}