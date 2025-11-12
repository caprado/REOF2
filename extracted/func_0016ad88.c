void func_0016ad88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0016ad88: addiu $sp, $sp, -0x50
    s1 = s0 + 0x1ae4;                                           // 0x0016ad98: addiu $s1, $s0, 0x1ae4
    v0 = (s5 < 4) ? 1 : 0;                                      // 0x0016adb0: slti $v0, $s5, 4
    s3 = *(int32_t*)((s1) + 8);                                 // 0x0016adc8: lw $s3, 8($s1)
    s4 = *(int32_t*)((s1) + 0x10);                              // 0x0016adcc: lw $s4, 0x10($s1)
    if (v0 != 0) goto label_0x16ae30;                           // 0x0016add0: bnez $v0, 0x16ae30
    s7 = *(int32_t*)((s0) + 0x28);                              // 0x0016add4: lw $s7, 0x28($s0)
    func_00157a00();  // 0x1579e8                                // 0x0016add8: jal 0x1579e8
    /* nop */                                                   // 0x0016addc: nop 
    v0 = 8 << 16;                                               // 0x0016ade4: lui $v0, 8
    if (s2 != v0) goto label_0x16ae20;                          // 0x0016ade8: bne $s2, $v0, 0x16ae20
    /* nop */                                                   // 0x0016adec: nop 
    v0 = *(int32_t*)((s1) + 0x20);                              // 0x0016adf0: lw $v0, 0x20($s1)
    if (v0 >= 0) goto label_0x16ae14;                           // 0x0016adf4: bgezl $v0, 0x16ae14
    v0 = 1;                                                     // 0x0016adf8: addiu $v0, $zero, 1
    func_00167208();  // 0x1671e8                                // 0x0016ae00: jal 0x1671e8
    v0 = v0 + 4;                                                // 0x0016ae08: addiu $v0, $v0, 4
    *(uint32_t*)((s1) + 0x20) = v0;                             // 0x0016ae0c: sw $v0, 0x20($s1)
    v0 = 1;                                                     // 0x0016ae10: addiu $v0, $zero, 1
label_0x16ae14:
    goto label_0x16ae34;                                        // 0x0016ae14: b 0x16ae34
    *(uint32_t*)((s3) + 0x30) = v0;                             // 0x0016ae18: sw $v0, 0x30($s3)
    /* nop */                                                   // 0x0016ae1c: nop 
label_0x16ae20:
    /* bnezl $s2, 0x16ae34 */                                   // 0x0016ae20: bnezl $s2, 0x16ae34
    *(uint32_t*)((s3) + 0x30) = 0;                              // 0x0016ae24: sw $zero, 0x30($s3)
    goto label_0x16ae38;                                        // 0x0016ae28: b 0x16ae38
label_0x16ae30:
label_0x16ae34:
label_0x16ae38:
    func_0016af28();  // 0x16aed8                                // 0x0016ae38: jal 0x16aed8
    if (v0 == 0) goto label_0x16ae58;                           // 0x0016ae40: beqz $v0, 0x16ae58
    a1 = 1;                                                     // 0x0016ae48: addiu $a1, $zero, 1
    goto label_0x16ae88;                                        // 0x0016ae4c: b 0x16ae88
    a2 = 1;                                                     // 0x0016ae50: addiu $a2, $zero, 1
    /* nop */                                                   // 0x0016ae54: nop 
label_0x16ae58:
    v0 = (s6 < 4) ? 1 : 0;                                      // 0x0016ae58: slti $v0, $s6, 4
    /* beqzl $v0, 0x16ae98 */                                   // 0x0016ae5c: beqzl $v0, 0x16ae98
    v0 = (s5 < s7) ? 1 : 0;                                     // 0x0016ae60: slt $v0, $s5, $s7
    func_001679e0();  // 0x1679c0                                // 0x0016ae68: jal 0x1679c0
    v1 = 1;                                                     // 0x0016ae70: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x16ae98;                          // 0x0016ae74: bnel $v0, $v1, 0x16ae98
    v0 = (s5 < s7) ? 1 : 0;                                     // 0x0016ae78: slt $v0, $s5, $s7
    a2 = *(int32_t*)((s3) + 0x30);                              // 0x0016ae7c: lw $a2, 0x30($s3)
    a1 = 1;                                                     // 0x0016ae84: addiu $a1, $zero, 1
label_0x16ae88:
    func_0016ad00();  // 0x16ac88                                // 0x0016ae88: jal 0x16ac88
    /* nop */                                                   // 0x0016ae8c: nop 
    goto label_0x16aeac;                                        // 0x0016ae90: b 0x16aeac
label_0x16ae98:
    /* beqzl $v0, 0x16aeac */                                   // 0x0016ae98: beqzl $v0, 0x16aeac
    v0 = 1;                                                     // 0x0016ae9c: addiu $v0, $zero, 1
    v0 = 1 << 16;                                               // 0x0016aea0: lui $v0, 1
    v0 = s2 ^ v0;                                               // 0x0016aea4: xor $v0, $s2, $v0
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0016aea8: sltu $v0, $zero, $v0
label_0x16aeac:
    return;                                                     // 0x0016aed0: jr $ra
    sp = sp + 0x50;                                             // 0x0016aed4: addiu $sp, $sp, 0x50
}