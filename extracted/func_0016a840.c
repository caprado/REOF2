void func_0016a840() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x30;                                            // 0x0016a840: addiu $sp, $sp, -0x30
    a1 = 0x3b;                                                  // 0x0016a84c: addiu $a1, $zero, 0x3b
    func_001752f8();  // 0x1752e8                                // 0x0016a85c: jal 0x1752e8
    v1 = 1;                                                     // 0x0016a86c: addiu $v1, $zero, 1
    if (s0 == v1) goto label_0x16a8ac;                          // 0x0016a870: beq $s0, $v1, 0x16a8ac
    a0 = (s0 < 2) ? 1 : 0;                                      // 0x0016a874: slti $a0, $s0, 2
    /* bnezl $a0, 0x16a8b0 */                                   // 0x0016a878: bnezl $a0, 0x16a8b0
    v0 = 2;                                                     // 0x0016a880: addiu $v0, $zero, 2
    if (s0 != v0) goto label_0x16a8ac;                          // 0x0016a884: bnel $s0, $v0, 0x16a8ac
    func_0016b2a8();  // 0x16b1f8                                // 0x0016a894: jal 0x16b1f8
    a2 = sp + 4;                                                // 0x0016a898: addiu $a2, $sp, 4
    v1 = local_4;                                               // 0x0016a8a0: lw $v1, 4($sp)
    v1 = (v1 < 2) ? 1 : 0;                                      // 0x0016a8a4: slti $v1, $v1, 2
    if (v1 != 0) v0 = s1;                                       // 0x0016a8a8: movn $v0, $s1, $v1
label_0x16a8ac:
    return;                                                     // 0x0016a8bc: jr $ra
    sp = sp + 0x30;                                             // 0x0016a8c0: addiu $sp, $sp, 0x30
}