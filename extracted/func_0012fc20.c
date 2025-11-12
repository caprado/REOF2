void func_0012fc20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0012fc20: addiu $sp, $sp, -0x20
label_0x12fc34:
    v0 = *(int8_t*)((s0) + 3);                                  // 0x0012fc34: lb $v0, 3($s0)
    if (v0 != 0) goto label_0x12fc88;                           // 0x0012fc38: bnez $v0, 0x12fc88
    s1 = 1;                                                     // 0x0012fc3c: addiu $s1, $zero, 1
    goto label_0x12fc68;                                        // 0x0012fc40: b 0x12fc68
    /* nop */                                                   // 0x0012fc44: nop 
    v1 = *(int32_t*)((s0) + 0x30);                              // 0x0012fc48: lw $v1, 0x30($s0)
    a0 = *(int32_t*)((s0) + 0x3c);                              // 0x0012fc4c: lw $a0, 0x3c($s0)
    v0 = v0 + a1;                                               // 0x0012fc50: addu $v0, $v0, $a1
    v1 = (v1 < a0) ? 1 : 0;                                     // 0x0012fc54: slt $v1, $v1, $a0
    if (v1 != 0) goto label_0x12fc68;                           // 0x0012fc58: bnez $v1, 0x12fc68
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x0012fc5c: sw $v0, 0x2c($s0)
    goto label_0x12fc34;                                        // 0x0012fc60: b 0x12fc34
    *(uint8_t*)((s0) + 3) = s1;                                 // 0x0012fc64: sb $s1, 3($s0)
label_0x12fc68:
    func_0012ec50();  // 0x12eba0                                // 0x0012fc68: jal 0x12eba0
    /* bnezl $a1, 0x12fc48 */                                   // 0x0012fc74: bnezl $a1, 0x12fc48
    v0 = *(int32_t*)((s0) + 0x2c);                              // 0x0012fc78: lw $v0, 0x2c($s0)
    goto label_0x12fca4;                                        // 0x0012fc7c: b 0x12fca4
    /* nop */                                                   // 0x0012fc84: nop 
label_0x12fc88:
    func_0012ed50();  // 0x12ec50                                // 0x0012fc88: jal 0x12ec50
    if (v0 <= 0) goto label_0x12fca4;                           // 0x0012fc90: blezl $v0, 0x12fca4
    v0 = 3;                                                     // 0x0012fc98: addiu $v0, $zero, 3
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x0012fc9c: sb $v0, 1($s0)
label_0x12fca4:
    return;                                                     // 0x0012fcac: jr $ra
    sp = sp + 0x20;                                             // 0x0012fcb0: addiu $sp, $sp, 0x20
}