void func_0016c088() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016c088: addiu $sp, $sp, -0x10
    a1 = 0x1c;                                                  // 0x0016c08c: addiu $a1, $zero, 0x1c
    func_001752f8();  // 0x1752e8                                // 0x0016c098: jal 0x1752e8
    if (v0 == 0) goto label_0x16c0e8;                           // 0x0016c0a0: beqz $v0, 0x16c0e8
    func_001696b0();  // 0x169678                                // 0x0016c0a8: jal 0x169678
    /* nop */                                                   // 0x0016c0ac: nop 
    a2 = 1;                                                     // 0x0016c0b0: addiu $a2, $zero, 1
    if (v1 == 0) goto label_0x16c0d8;                           // 0x0016c0bc: beqz $v1, 0x16c0d8
    a1 = 5;                                                     // 0x0016c0c0: addiu $a1, $zero, 5
    if (v1 > 0) goto label_0x16c0d8;                            // 0x0016c0c4: bgtz $v1, 0x16c0d8
    v0 = -1;                                                    // 0x0016c0cc: addiu $v0, $zero, -1
    if (v1 == v0) goto label_0x16c0ec;                          // 0x0016c0d0: beq $v1, $v0, 0x16c0ec
label_0x16c0d8:
    return func_0016bc40();  // Tail call                        // 0x0016c0e0: j 0x16bb88
    sp = sp + 0x10;                                             // 0x0016c0e4: addiu $sp, $sp, 0x10
label_0x16c0e8:
label_0x16c0ec:
    return;                                                     // 0x0016c0f0: jr $ra
    sp = sp + 0x10;                                             // 0x0016c0f4: addiu $sp, $sp, 0x10
}