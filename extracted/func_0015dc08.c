void func_0015dc08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x30;                                            // 0x0015dc08: addiu $sp, $sp, -0x30
    func_00178fc8();  // 178fc8                                // 0x0015dc2c: jal 0x178fc8
    s2 = s1 + 0xb4;                                             // 0x0015dc30: addiu $s2, $s1, 0xb4
    if (v0 == 0) goto label_0x15dca0;                           // 0x0015dc34: beqz $v0, 0x15dca0
    v0 = local_0;                                               // 0x0015dc38: lw $v0, 0($sp)
    if (v0 == 0) goto label_0x15dca0;                           // 0x0015dc3c: beqz $v0, 0x15dca0
    a1 = 0xe0;                                                  // 0x0015dc44: addiu $a1, $zero, 0xe0
    func_001790b8();  // 1790b8                                // 0x0015dc48: jal 0x1790b8
    a2 = sp + 4;                                                // 0x0015dc4c: addiu $a2, $sp, 4
    if (v0 == 0) goto label_0x15dca0;                           // 0x0015dc50: beqz $v0, 0x15dca0
    v0 = local_4;                                               // 0x0015dc54: lw $v0, 4($sp)
    if (v0 == 0) goto label_0x15dca0;                           // 0x0015dc58: beqz $v0, 0x15dca0
    a1 = 0xe0;                                                  // 0x0015dc60: addiu $a1, $zero, 0xe0
    func_00179e18();  // 179e18                                // 0x0015dc64: jal 0x179e18
    a2 = sp + 8;                                                // 0x0015dc68: addiu $a2, $sp, 8
    if (v0 == 0) goto label_0x15dca0;                           // 0x0015dc6c: beqz $v0, 0x15dca0
    v1 = 3;                                                     // 0x0015dc70: addiu $v1, $zero, 3
    v0 = local_8;                                               // 0x0015dc74: lw $v0, 8($sp)
    if (v0 != v1) goto label_0x15dc98;                          // 0x0015dc78: bne $v0, $v1, 0x15dc98
    v0 = 1;                                                     // 0x0015dc80: addiu $v0, $zero, 1
    *(uint32_t*)((s2) + 4) = v0;                                // 0x0015dc84: sw $v0, 4($s2)
    func_00161238();  // 161238                                // 0x0015dc88: jal 0x161238
    a1 = 1;                                                     // 0x0015dc8c: addiu $a1, $zero, 1
    goto label_0x15dca4;                                        // 0x0015dc90: b 0x15dca4
label_0x15dc98:
    func_00161238();  // 161238                                // 0x0015dc98: jal 0x161238
label_0x15dca0:
label_0x15dca4:
    return;                                                     // 0x0015dcb0: jr $ra
    sp = sp + 0x30;                                             // 0x0015dcb4: addiu $sp, $sp, 0x30
}