void func_0010a260() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0010a260: addiu $sp, $sp, -0x20
    v0 = 0x34 << 16;                                            // 0x0010a264: lui $v0, 0x34
    s1 = v0 + 0x1cc0;                                           // 0x0010a274: addiu $s1, $v0, 0x1cc0
    func_00114a90();  // 0x1149e0                                // 0x0010a280: jal 0x1149e0
    g_00341cc0 = 0;  // Global at 0x00341cc0                    // 0x0010a284: sw $zero, 0($s1)
    v1 = -1;                                                    // 0x0010a28c: addiu $v1, $zero, -1
    if (a0 != v1) goto label_0x10a2a8;                          // 0x0010a290: bnel $a0, $v1, 0x10a2a8
    v1 = g_00341cc0;  // Global at 0x00341cc0                   // 0x0010a298: lw $v1, 0($s1)
    /* bnezl $v1, 0x10a2a4 */                                   // 0x0010a29c: bnezl $v1, 0x10a2a4
    *(uint32_t*)(s0) = v1;                                      // 0x0010a2a0: sw $v1, 0($s0)
label_0x10a2a8:
    return;                                                     // 0x0010a2b0: jr $ra
    sp = sp + 0x20;                                             // 0x0010a2b4: addiu $sp, $sp, 0x20
}