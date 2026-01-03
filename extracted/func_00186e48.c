void func_00186e48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x2010;                                                // 0x00186e48: addiu $v0, $zero, 0x2010
    sp = sp + -0x40;                                            // 0x00186e4c: addiu $sp, $sp, -0x40
    v1 = 0x28 << 16;                                            // 0x00186e54: lui $v1, 0x28
    v1 = v1 + -0x7800;                                          // 0x00186e5c: addiu $v1, $v1, -0x7800
    s2 = -1;                                                    // 0x00186e68: addiu $s2, $zero, -1
    s1 = a3 + v1;                                               // 0x00186e70: addu $s1, $a3, $v1
    a2 = *(int32_t*)(s1);                                       // 0x00186e74: lw $a2, 0($s1)
    if (a2 == s2) goto label_0x186ea0;                          // 0x00186e78: beq $a2, $s2, 0x186ea0
    v0 = 1;                                                     // 0x00186e7c: addiu $v0, $zero, 1
    s0 = v1 + 0xc;                                              // 0x00186e80: addiu $s0, $v1, 0xc
    a1 = v1 + 0x10;                                             // 0x00186e84: addiu $a1, $v1, 0x10
    s0 = a3 + s0;                                               // 0x00186e88: addu $s0, $a3, $s0
    a1 = a3 + a1;                                               // 0x00186e8c: addu $a1, $a3, $a1
    func_00186e08();  // 186e08                                // 0x00186e90: jal 0x186e08
    a3 = g_0027880c;  // Global at 0x0027880c                   // 0x00186e94: lw $a3, 0($s0)
    *(uint32_t*)(s1) = s2;                                      // 0x00186e98: sw $s2, 0($s1)
    g_0027880c = 0;  // Global at 0x0027880c                    // 0x00186e9c: sw $zero, 0($s0)
label_0x186ea0:
    return;                                                     // 0x00186eb0: jr $ra
    sp = sp + 0x40;                                             // 0x00186eb4: addiu $sp, $sp, 0x40
}