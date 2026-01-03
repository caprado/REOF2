void func_001829e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001829e0: addiu $sp, $sp, -0x30
    v0 = 0x898;                                                 // 0x001829e4: addiu $v0, $zero, 0x898
    s1 = 0x27 << 16;                                            // 0x001829f8: lui $s1, 0x27
    a1 = s1 + 0x72c8;                                           // 0x00182a00: addiu $a1, $s1, 0x72c8
    v0 = a1 + a3;                                               // 0x00182a04: addu $v0, $a1, $a3
    a2 = *(int32_t*)((v0) + 0x800);                             // 0x00182a08: lw $a2, 0x800($v0)
    if (a2 <= 0) goto label_0x182a44;                           // 0x00182a0c: blez $a2, 0x182a44
    a0 = 1;                                                     // 0x00182a10: addiu $a0, $zero, 1
    v1 = *(int32_t*)((v0) + 0x894);                             // 0x00182a14: lw $v1, 0x894($v0)
    if (v1 != a0) goto label_0x182a48;                          // 0x00182a18: bne $v1, $a0, 0x182a48
    v1 = 0x898;                                                 // 0x00182a1c: addiu $v1, $zero, 0x898
    a1 = a1 + 0x400;                                            // 0x00182a20: addiu $a1, $a1, 0x400
    a1 = a3 + a1;                                               // 0x00182a28: addu $a1, $a3, $a1
    func_00186e08();  // 186e08                                // 0x00182a2c: jal 0x186e08
    a3 = 1;                                                     // 0x00182a30: addiu $a3, $zero, 1
    if (v0 != 0) goto label_0x182a48;                           // 0x00182a34: bnez $v0, 0x182a48
    v1 = 0x898;                                                 // 0x00182a38: addiu $v1, $zero, 0x898
    goto label_0x182a5c;                                        // 0x00182a3c: b 0x182a5c
label_0x182a44:
    v1 = 0x898;                                                 // 0x00182a44: addiu $v1, $zero, 0x898
label_0x182a48:
    a0 = s1 + 0x72c8;                                           // 0x00182a48: addiu $a0, $s1, 0x72c8
    /* multiply: s0 * v1 -> hi:lo */                            // 0x00182a4c: mult $ac3, $s0, $v1
    v0 = 1;                                                     // 0x00182a50: addiu $v0, $zero, 1
    a0 = a0 + v1;                                               // 0x00182a54: addu $a0, $a0, $v1
    g_00277b5c = 0;  // Global at 0x00277b5c                    // 0x00182a58: sw $zero, 0x894($a0)
label_0x182a5c:
    return;                                                     // 0x00182a68: jr $ra
    sp = sp + 0x30;                                             // 0x00182a6c: addiu $sp, $sp, 0x30
}