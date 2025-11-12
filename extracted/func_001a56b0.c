void func_001a56b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_18;
    
    sp = sp + -0x60;                                            // 0x001a56b0: addiu $sp, $sp, -0x60
    v1 = 1;                                                     // 0x001a56b4: addiu $v1, $zero, 1
    v0 = (v1 < 8) ? 1 : 0;                                      // 0x001a56bc: slti $v0, $v1, 8
    local_18 = a0;                                              // 0x001a56c0: sw $a0, 0x18($sp)
    if (v0 != 0) goto label_0x1a56ec;                           // 0x001a56dc: bnez $v0, 0x1a56ec
    goto label_0x1a56f8;                                        // 0x001a56e4: b 0x1a56f8
label_0x1a56ec:
    v0 = 8;                                                     // 0x001a56ec: addiu $v0, $zero, 8
    v0 = v0 - v1;                                               // 0x001a56f0: subu $v0, $v0, $v1
    v1 = v0 << 3;                                               // 0x001a56f4: sll $v1, $v0, 3
label_0x1a56f8:
    a1 = local_18;                                              // 0x001a56f8: lw $a1, 0x18($sp)
    v0 = sp + 0x60;                                             // 0x001a56fc: addiu $v0, $sp, 0x60
    a0 = 0x2a << 16;                                            // 0x001a5700: lui $a0, 0x2a
    a2 = v0 - v1;                                               // 0x001a5704: subu $a2, $v0, $v1
    func_0010f580();  // 0x10f528                                // 0x001a5708: jal 0x10f528
    a0 = a0 + 0x520;                                            // 0x001a570c: addiu $a0, $a0, 0x520
    v0 = 1;                                                     // 0x001a5714: addiu $v0, $zero, 1
    return;                                                     // 0x001a5718: jr $ra
    sp = sp + 0x60;                                             // 0x001a571c: addiu $sp, $sp, 0x60
}